using UnityEngine;
using UnityEngine.AI;
using NoWayOut.Maze;
using Unity.Netcode;

public class EnemyMovement : MonoBehaviour
{
    public NavMeshAgent agent;
    public Transform player;
    private Rigidbody2D body;
    [SerializeField, Min(0.05f)] private float repathIntervalSeconds = 0.25f;
    [SerializeField, Min(0.05f)] private float minimumTargetMovement = 0.5f;
    [SerializeField] private MazeShiftController mazeShiftController;

    [Header("Movement speeds")]
    [SerializeField, Min(0f)] private float walkSpeed = 1f;
    [SerializeField, Min(0f)] private float chaseSpeed = 2f;

    [Header("Line of sight")]
    [SerializeField, Min(0.02f)] private float visionCheckIntervalSeconds = 0.1f;
    [SerializeField, Min(0f)] private float chaseMemorySeconds = 10f;
    [SerializeField] private LayerMask lineOfSightLayers = Physics2D.DefaultRaycastLayers;

    [Header("Loitering")]
    [SerializeField, Min(0.1f)] private float loiterRadius = 4f;
    [SerializeField, Min(0.1f)] private float loiterIntervalSeconds = 3f;

    [Header("Anti-camping")]
    [SerializeField, Min(1f)] private float maxChaseSeconds = 15f;
    [SerializeField, Min(0.5f)] private float unreachableGiveUpSeconds = 4f;
    [SerializeField, Min(1f)] private float giveUpCooldownSeconds = 10f;
    [SerializeField, Min(1f)] private float retreatDistance = 8f;

    [Header("Audio")]
    [Tooltip("The heartbeat plays while the monster is this close to your player.")]
    [SerializeField, Min(1f)] private float heartbeatDistance = 6f;
    [Tooltip("The chase music plays while the monster is chasing and this close to your player.")]
    [SerializeField, Min(1f)] private float chaseMusicDistance = 12f;

    [Header("Animation")]
    [SerializeField] private Animator animator;
    [SerializeField] private SpriteRenderer spriteRenderer;

    [Header("Look per location (optional)")]
    [Tooltip("Animator Controller (or Animator Override Controller) for each map. Empty keeps the current one.")]
    [SerializeField] private RuntimeAnimatorController hospitalAnimator;
    [SerializeField] private RuntimeAnimatorController prisonAnimator;
    [SerializeField] private RuntimeAnimatorController mansionAnimator;
    [Tooltip("Optional starting sprite for each map, shown before the animation plays.")]
    [SerializeField] private Sprite hospitalSprite;
    [SerializeField] private Sprite prisonSprite;
    [SerializeField] private Sprite mansionSprite;
    [Tooltip("Location used when Gameplay is played without picking a job.")]
    [SerializeField] private JobLocation testLocation = JobLocation.Hospital;

    private readonly RaycastHit2D[] sightHits = new RaycastHit2D[16];
    private Collider2D playerCollider;
    private MonsterIndicator monsterIndicator;
    private float nextRepathTime;
    private float nextVisionCheckTime;
    private float nextLoiterTime;
    private float lastSeenTime;
    private float chaseStartTime;
    private float ignorePlayerUntil;
    private float unreachableSince = -1f;
    private bool subscribedToMaze;
    private bool isChasing;
    private Vector3 lastRequestedPosition;
    private Transform localPlayer;
    private float nextRemoteHitTime;
    private AudioSource enemyAudio;
    private Transform audioPlayer;   // this device's player, for heartbeat and chase music

    public bool IsChasing => isChasing;

    private void OnEnable()
    {
        SubscribeToMaze();
    }

    // Gives the monster the current map's animations and sprite. Runs for both players.
    private void ApplyLocationLook()
    {
        if (animator == null) animator = GetComponentInChildren<Animator>();
        if (spriteRenderer == null) spriteRenderer = GetComponentInChildren<SpriteRenderer>();

        JobLocation location = JobSession.SelectedJob != null ? JobSession.SelectedJob.Location : testLocation;
        RuntimeAnimatorController controller = location == JobLocation.Prison ? prisonAnimator
                                             : location == JobLocation.Mansion ? mansionAnimator : hospitalAnimator;
        Sprite sprite = location == JobLocation.Prison ? prisonSprite
                      : location == JobLocation.Mansion ? mansionSprite : hospitalSprite;

        if (animator != null && controller != null)
            animator.runtimeAnimatorController = controller;
        if (spriteRenderer != null && sprite != null)
            spriteRenderer.sprite = sprite;
    }

    private void Start()
    {
        ApplyLocationLook();
        body = GetComponent<Rigidbody2D>();
        Transform audioObject = transform.Find("Enemy Audio");
        enemyAudio = audioObject != null ? audioObject.GetComponent<AudioSource>() : null;
        AudioManager.Instance?.ConfigureSpatialSource(enemyAudio, 18f);
        AudioManager.Instance?.PlayMonsterWalk(enemyAudio, 18f);   // the monster is always walking
        if (JobSession.IsCoop && NetworkManager.Singleton != null && !NetworkManager.Singleton.IsServer)
        {
            if (agent == null)
                agent = GetComponent<NavMeshAgent>();
            if (agent != null)
                agent.enabled = false;
            if (body != null)
                body.simulated = false;
            enabled = false;
            return;
        }

        if (player == null)
        {
            GameObject playerObject = GameObject.Find("Player");
            if (playerObject != null)
                player = playerObject.transform;
        }
        if (player != null)
        {
            localPlayer = player;
            playerCollider = player.GetComponent<Collider2D>();
            monsterIndicator = player.GetComponentInChildren<MonsterIndicator>(true);
        }

        if (mazeShiftController == null)
            mazeShiftController = FindAnyObjectByType<MazeShiftController>();

        SubscribeToMaze();
        if (agent == null)
            agent = GetComponent<NavMeshAgent>();
        if (agent != null)
        {
            agent.updatePosition = false;
            agent.updateRotation = false;
            agent.updateUpAxis = false;   // keeps the enemy flat in 2D
        }
        ApplyJobTierSpeeds();
        RefreshPath();

        if (animator == null) animator = GetComponentInChildren<Animator>();
        if (spriteRenderer == null) spriteRenderer = GetComponentInChildren<SpriteRenderer>();
    }

    private void FixedUpdate()
    {
        if (body == null || agent == null)
            return;

        body.linearVelocity = agent.enabled && agent.isOnNavMesh
            ? new Vector2(agent.desiredVelocity.x, agent.desiredVelocity.y)
            : Vector2.zero;

        if (agent.enabled && agent.isOnNavMesh)
            agent.nextPosition = body.position;
    }

    private void Update()
    {
        UpdateLocalAudio();

        // MazeGenerator turns the agent on once the navmesh is built.
        if (agent == null || !agent.enabled)
            return;

        if (!agent.isOnNavMesh)
        {
            if (Time.time >= nextRepathTime)
            {
                nextRepathTime = Time.time + 1f;
                RefreshPath();
            }
            return;
        }

        // ---------- Vision check ----------
        if (player != null && Time.time >= nextVisionCheckTime)
        {
            nextVisionCheckTime = Time.time + visionCheckIntervalSeconds;

            bool canSee = Time.time >= ignorePlayerUntil && ChooseVisiblePlayer();
            if (canSee)
            {
                lastSeenTime = Time.time;
                if (!isChasing)
                {
                    isChasing = true;
                    chaseStartTime = Time.time;
                    unreachableSince = -1f;
                    SetChaseDestination();
                    if (player == localPlayer)
                        monsterIndicator?.Show(transform);
                    else
                        AlertRemotePlayer();

                    PlayEnemySound(0);
                }
            }
            else if (isChasing && Time.time - lastSeenTime >= chaseMemorySeconds)
            {
                isChasing = false;
                unreachableSince = -1f;
                agent.ResetPath();
                nextLoiterTime = Time.time;
            }
        }

        // ---------- Anti-camping ----------
        if (isChasing && Time.time - chaseStartTime >= maxChaseSeconds)
            GiveUpChase();

        if (isChasing && !agent.pathPending)
        {
            if (agent.pathStatus != NavMeshPathStatus.PathComplete)
            {
                if (unreachableSince < 0f)
                    unreachableSince = Time.time;
                else if (Time.time - unreachableSince >= unreachableGiveUpSeconds)
                    GiveUpChase();
            }
            else
            {
                unreachableSince = -1f;
            }
        }

        // ---------- Movement ----------
        if (isChasing && player != null)
        {
            float movedDistance = (player.position - lastRequestedPosition).sqrMagnitude;
            if (Time.time >= nextRepathTime && movedDistance >= minimumTargetMovement * minimumTargetMovement)
                SetChaseDestination();
        }
        else if (!agent.pathPending &&
                 (!agent.hasPath || agent.remainingDistance <= Mathf.Max(agent.stoppingDistance, 0.2f)) &&
                 Time.time >= nextLoiterTime)
        {
            SetLoiterDestination();
        }

        HandleAnimation();
        DamageRemotePlayer();
    }

    public void ApplyRemoteState(Vector2 position, bool chasing)
    {
        transform.position = new Vector3(position.x, position.y, transform.position.z);
        isChasing = chasing;
        if (animator == null)
            animator = GetComponentInChildren<Animator>();
        HandleAnimation();
        UpdateLocalAudio();
    }

    // Heartbeat when the monster is near this device's player, chase music while it chases nearby.
    // Runs on the host and solo from Update, and on the guest from ApplyRemoteState.
    private void UpdateLocalAudio()
    {
        AudioManager audio = AudioManager.Instance;
        if (audio == null)
            return;

        if (audioPlayer == null)
        {
            GameObject playerObject = GameObject.Find("Player");
            if (playerObject == null)
                return;
            audioPlayer = playerObject.transform;
        }

        float distance = Vector2.Distance(transform.position, audioPlayer.position);
        audio.SetChase(isChasing && distance <= chaseMusicDistance);
        audio.SetHeartbeat(distance <= heartbeatDistance);
    }

    private void OnDestroy()
    {
        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.SetChase(false);
            AudioManager.Instance.SetHeartbeat(false);
        }
    }

    public void PlayEnemySound(int sound, bool broadcast = true)
    {
        AudioManager audio = AudioManager.Instance;
        if (audio == null)
            return;

        if (sound == 0)
        {
            audio.PlaySpatialSFX(enemyAudio, audio.MonsterSeenBass);
            audio.PlaySpatialSFX(enemyAudio, audio.MonsterScream);
        }
        else if (sound == 1)
            audio.PlaySpatialSFX(enemyAudio, audio.MonsterSlash);

        if (broadcast && JobSession.IsCoop && NetworkManager.Singleton != null && NetworkManager.Singleton.IsServer &&
            NetworkManager.Singleton.LocalClient.PlayerObject != null)
            NetworkManager.Singleton.LocalClient.PlayerObject.GetComponent<NetworkJobSync>()?.BroadcastEnemySound(sound);
    }

    private bool ChooseVisiblePlayer()
    {
        Transform closest = null;
        Collider2D closestCollider = null;
        float closestDistance = float.PositiveInfinity;

        if (localPlayer != null && CanSee(localPlayer, localPlayer.GetComponent<Collider2D>()))
        {
            closest = localPlayer;
            closestCollider = localPlayer.GetComponent<Collider2D>();
            closestDistance = (localPlayer.position - transform.position).sqrMagnitude;
        }

        if (JobSession.IsCoop)
            foreach (NetworkPlayerAvatar avatar in FindObjectsByType<NetworkPlayerAvatar>())
            {
                if (!avatar.IsSpawned || avatar.IsOwner || !CanSee(avatar.transform, null))
                    continue;
                float distance = (avatar.transform.position - transform.position).sqrMagnitude;
                if (distance < closestDistance)
                {
                    closest = avatar.transform;
                    closestCollider = null;
                    closestDistance = distance;
                }
            }

        if (closest == null)
            return false;

        if (isChasing && player != closest && closest != localPlayer)
        {
            player = closest;
            AlertRemotePlayer();
        }
        player = closest;
        playerCollider = closestCollider;
        return true;
    }

    private void DamageRemotePlayer()
    {
        if (!JobSession.IsCoop || player == null || player == localPlayer ||
            Time.time < nextRemoteHitTime ||
            (player.position - transform.position).sqrMagnitude > 1f)
            return;

        if (NetworkManager.Singleton == null || NetworkManager.Singleton.LocalClient.PlayerObject == null)
            return;
        NetworkJobSync sync = NetworkManager.Singleton.LocalClient.PlayerObject.GetComponent<NetworkJobSync>();
        if (sync != null)
        {
            sync.DamageRemotePlayer(player.GetComponent<NetworkObject>().OwnerClientId);
            nextRemoteHitTime = Time.time + 1f;
        }
    }

    private void AlertRemotePlayer()
    {
        if (NetworkManager.Singleton == null || NetworkManager.Singleton.LocalClient.PlayerObject == null || player == null)
            return;
        NetworkObject avatar = player.GetComponent<NetworkObject>();
        NetworkJobSync sync = NetworkManager.Singleton.LocalClient.PlayerObject.GetComponent<NetworkJobSync>();
        if (avatar != null && sync != null)
            sync.AlertRemotePlayer(avatar.OwnerClientId);
    }

    private void HandleAnimation()
    {
        if (animator == null) return;

        animator.SetBool("IsChasing", isChasing);
        animator.SetFloat("MoveX", 0f);
        animator.SetFloat("MoveY", 1f);

        if (spriteRenderer != null)
            spriteRenderer.flipX = false;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        PlayerHealth playerHealth = collision.gameObject.GetComponentInParent<PlayerHealth>();
        if (playerHealth != null && playerHealth.TakeDamage(GetComponent<Collider2D>()))
        {
            PlayEnemySound(1);
        }
    }

    private void OnDisable()
    {
        if (mazeShiftController != null && subscribedToMaze)
        {
            mazeShiftController.MazeChanged -= RefreshPath;
            subscribedToMaze = false;
        }
    }

    private void SubscribeToMaze()
    {
        if (mazeShiftController == null || subscribedToMaze)
            return;

        mazeShiftController.MazeChanged += RefreshPath;
        subscribedToMaze = true;
    }

    private void RefreshPath()
    {
        if (agent == null || !agent.enabled)
            return;

        if (!agent.isOnNavMesh)
        {
            var filter = new NavMeshQueryFilter
            {
                agentTypeID = agent.agentTypeID,
                areaMask = agent.areaMask
            };

            if (!NavMesh.SamplePosition(transform.position, out NavMeshHit hit, 2f, filter) || !agent.Warp(hit.position))
            {
                Debug.LogWarning("Enemy cannot path yet because it is not on the NavMesh. Check that the surface built successfully and that the enemy is placed inside the walkable area.", this);
                return;
            }
        }

        if (isChasing && player != null)
            SetChaseDestination();
        else
        {
            nextLoiterTime = Time.time;
            SetLoiterDestination();
        }
    }

    private void SetChaseDestination()
    {
        if (agent == null || player == null || !agent.isOnNavMesh)
            return;

        agent.speed = chaseSpeed;
        agent.SetDestination(player.position);
        lastRequestedPosition = player.position;
        nextRepathTime = Time.time + repathIntervalSeconds;
    }

    private void SetLoiterDestination()
    {
        nextLoiterTime = Time.time + loiterIntervalSeconds;
        if (agent == null || !agent.isOnNavMesh)
            return;

        agent.speed = walkSpeed;
        var filter = new NavMeshQueryFilter
        {
            agentTypeID = agent.agentTypeID,
            areaMask = agent.areaMask
        };

        for (int attempt = 0; attempt < 8; attempt++)
        {
            Vector2 offset = Random.insideUnitCircle * loiterRadius;
            Vector3 candidate = transform.position + new Vector3(offset.x, offset.y, 0f);
            if (NavMesh.SamplePosition(candidate, out NavMeshHit hit, loiterRadius, filter))
            {
                agent.SetDestination(hit.position);
                return;
            }
        }
    }

    private void GiveUpChase()
    {
        isChasing = false;
        unreachableSince = -1f;
        ignorePlayerUntil = Time.time + giveUpCooldownSeconds;
        nextLoiterTime = Time.time + loiterIntervalSeconds;

        if (agent == null || !agent.isOnNavMesh || player == null)
            return;

        // Walk away from the player
        Vector3 away = (transform.position - player.position).normalized * retreatDistance;
        var filter = new NavMeshQueryFilter
        {
            agentTypeID = agent.agentTypeID,
            areaMask = agent.areaMask
        };

        agent.speed = walkSpeed;
        if (NavMesh.SamplePosition(transform.position + away, out NavMeshHit hit, retreatDistance, filter))
            agent.SetDestination(hit.position);
    }

    private void ApplyJobTierSpeeds()
    {
        if (player == null)
            return;

        PlayerJobScript playerJob = player.GetComponent<PlayerJobScript>();
        JobTierSettings settings = playerJob != null && playerJob.CurrentJob != null
            ? playerJob.CurrentJob.TierSettings
            : null;

        if (settings == null)
            return;

        walkSpeed = settings.MonsterWalkSpeed;
        chaseSpeed = settings.MonsterChaseSpeed;
    }

    private bool CanSee(Transform targetTransform, Collider2D targetCollider)
    {
        Vector2 origin = transform.position;
        Vector2 target = targetCollider != null ? targetCollider.bounds.center : (Vector2)targetTransform.position;
        Vector2 directionToPlayer = target - origin;
        float distance = directionToPlayer.magnitude;
        if (distance <= 0.01f)
            return true;

        int hitCount = Physics2D.RaycastNonAlloc(origin, directionToPlayer / distance, sightHits,
                                                  distance, lineOfSightLayers);
        Collider2D closestCollider = null;
        float closestDistance = float.PositiveInfinity;

        for (int i = 0; i < hitCount; i++)
        {
            Collider2D hitCollider = sightHits[i].collider;
            if (hitCollider == null || hitCollider.isTrigger || IsEnemyCollider(hitCollider))
                continue;

            if (sightHits[i].distance < closestDistance)
            {
                closestDistance = sightHits[i].distance;
                closestCollider = hitCollider;
            }
        }

        return targetCollider == null ? closestCollider == null : closestCollider != null &&
            (closestCollider == targetCollider || closestCollider.transform.IsChildOf(targetTransform));
    }

    private bool IsEnemyCollider(Collider2D collider)
    {
        return collider.transform == transform || collider.transform.IsChildOf(transform);
    }

}