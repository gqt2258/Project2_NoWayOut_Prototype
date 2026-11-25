using Unity.Netcode;
using UnityEngine;
using UnityEngine.SceneManagement;

// Shows the other player while each editor still uses its existing Gameplay player and UI.
public sealed class NetworkPlayerAvatar : NetworkBehaviour
{
    [SerializeField] private SpriteRenderer sprite;
    private readonly NetworkVariable<Vector2> position = new NetworkVariable<Vector2>();
    private Transform localPlayer;
    private float nextSendTime;

    [Header("Partner footsteps")]
    [Tooltip("Speed (units per second) above which the partner counts as running.")]
    [SerializeField, Min(0.1f)] private float runSpeedThreshold = 3.5f;
    private AudioSource footsteps;
    private Vector2 lastTarget;
    private float partnerSpeed;
    public Vector2 ReportedPosition => position.Value;

    // Co-op: this player has no revives left and is spectating, so their character is hidden.
    public bool IsOut { get; set; }

    // The other player's character in Gameplay (null in solo or before they appear).
    public static Transform PartnerTransform
    {
        get
        {
            foreach (NetworkPlayerAvatar avatar in FindObjectsByType<NetworkPlayerAvatar>())
                if (avatar.IsSpawned && !avatar.IsOwner)
                    return avatar.transform;
            return null;
        }
    }

    [Header("Partner animation (copies your own player's animations)")]
    [Tooltip("Same as PlayerMovement's, so the partner's legs move at the same speed as yours.")]
    [SerializeField, Min(0.1f)] private float walkAnimationSpeed = 0.7f;
    [SerializeField, Min(0.1f)] private float sprintAnimationSpeed = 1.5f;
    [SerializeField, Min(0.1f)] private float idleAnimationSpeed = 0.6f;
    private Animator partnerAnimator;
    private bool triedAnimator;
    private Vector2 animationFrom;
    private Vector2 smoothedVelocity;

    private void Update()
    {
        bool inGame = SceneManager.GetActiveScene().name == "Gameplay";
        if (!inGame) IsOut = false;   // back in the lobby: in again for the next job
        if (sprite != null)
            sprite.enabled = inGame && IsSpawned && !IsOwner && !IsOut;
        if (IsOut && footsteps != null && footsteps.isPlaying)
            footsteps.Stop();

        if (!inGame || !IsSpawned)
            return;

        if (IsOwner)
        {
            if (localPlayer == null)
            {
                GameObject player = GameObject.Find("Player");
                if (player != null)
                    localPlayer = player.transform;
            }

            if (localPlayer != null && Time.time >= nextSendTime)
            {
                nextSendTime = Time.time + 0.05f;
                SendPositionRpc(localPlayer.position);
            }
        }
        else
        {
            Vector2 target = position.Value;
            transform.position = Vector3.Lerp(transform.position,
                new Vector3(target.x, target.y, transform.position.z), 15f * Time.deltaTime);
            if (!IsOut)
            {
                UpdatePartnerFootsteps(target);
                UpdatePartnerAnimation();
            }
        }
    }

    // Walks, runs, idles and turns like a real player, worked out from how the partner is moving.
    // Uses the same Animator Controller as your own Player, so there is nothing to set up.
    private void UpdatePartnerAnimation()
    {
        if (sprite == null || Time.deltaTime <= 0f)
            return;

        if (partnerAnimator == null && !triedAnimator)
        {
            triedAnimator = true;
            GameObject player = GameObject.Find("Player");
            Animator mine = player != null ? player.GetComponentInChildren<Animator>() : null;
            if (mine == null || mine.runtimeAnimatorController == null)
            {
                Debug.LogWarning("Partner animation: your Player has no Animator to copy, so the partner stays still.", this);
                return;
            }

            partnerAnimator = sprite.GetComponent<Animator>();
            if (partnerAnimator == null) partnerAnimator = sprite.gameObject.AddComponent<Animator>();
            partnerAnimator.runtimeAnimatorController = mine.runtimeAnimatorController;
            animationFrom = transform.position;
        }
        if (partnerAnimator == null)
            return;

        // How fast and which way the shown partner is moving (smoothed, so network gaps don't flicker).
        Vector2 now = transform.position;
        Vector2 velocity = (now - animationFrom) / Time.deltaTime;
        animationFrom = now;
        smoothedVelocity = Vector2.Lerp(smoothedVelocity, velocity, 12f * Time.deltaTime);

        float speed = smoothedVelocity.magnitude;
        bool moving = speed > 0.3f;
        partnerAnimator.SetBool("IsMoving", moving);
        partnerAnimator.speed = !moving ? idleAnimationSpeed
                              : partnerSpeed > runSpeedThreshold ? sprintAnimationSpeed : walkAnimationSpeed;
        if (!moving)
            return;   // keeps facing the last way, like your own player

        if (Mathf.Abs(smoothedVelocity.x) > Mathf.Abs(smoothedVelocity.y))
        {
            partnerAnimator.SetFloat("MoveX", Mathf.Sign(smoothedVelocity.x));
            partnerAnimator.SetFloat("MoveY", 0f);
            sprite.flipX = smoothedVelocity.x < 0f;
        }
        else
        {
            partnerAnimator.SetFloat("MoveX", 0f);
            partnerAnimator.SetFloat("MoveY", Mathf.Sign(smoothedVelocity.y));
        }
    }

    // The partner's footsteps, heard from where they are (3D).
    private void UpdatePartnerFootsteps(Vector2 target)
    {
        AudioManager audio = AudioManager.Instance;
        if (audio == null || Time.deltaTime <= 0f)
            return;

        if (footsteps == null)
        {
            var audioObject = new GameObject("Partner Footsteps");
            audioObject.transform.SetParent(transform, false);
            footsteps = audioObject.AddComponent<AudioSource>();
            lastTarget = target;
        }
        audio.ConfigureSpatialSource(footsteps, 12f);   // also keeps it level with the listener

        float frameSpeed = (target - lastTarget).magnitude / Time.deltaTime;
        partnerSpeed = Mathf.Lerp(partnerSpeed, frameSpeed, 10f * Time.deltaTime);
        lastTarget = target;

        audio.PlayerMoves(footsteps, partnerSpeed > 0.3f, partnerSpeed > runSpeedThreshold);
    }

    public override void OnNetworkDespawn()
    {
        if (footsteps != null)
            footsteps.Stop();
        base.OnNetworkDespawn();
    }

    [Rpc(SendTo.Server)]
    private void SendPositionRpc(Vector2 newPosition)
    {
        position.Value = newPosition;
    }
}