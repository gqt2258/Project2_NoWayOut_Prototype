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

    private void Update()
    {
        bool inGame = SceneManager.GetActiveScene().name == "Gameplay";
        if (sprite != null)
            sprite.enabled = inGame && IsSpawned && !IsOwner;

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
            UpdatePartnerFootsteps(target);
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
