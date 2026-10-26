using UnityEngine;
using UnityEngine.AI;
using NoWayOut.Maze;

public class EnemyMovement : MonoBehaviour
{
    public NavMeshAgent agent;
    public Transform player;
    [SerializeField, Min(0.05f)] private float repathIntervalSeconds = 0.25f;
    [SerializeField, Min(0.05f)] private float minimumTargetMovement = 0.5f;
    [SerializeField] private MazeShiftController mazeShiftController;

    [Header("Line of sight")]
    [SerializeField, Min(0.02f)] private float visionCheckIntervalSeconds = 0.1f;
    [SerializeField, Min(0f)] private float chaseMemorySeconds = 10f;
    [SerializeField] private LayerMask lineOfSightLayers = Physics2D.DefaultRaycastLayers;

    [Header("Loitering")]
    [SerializeField, Min(0.1f)] private float loiterRadius = 4f;
    [SerializeField, Min(0.1f)] private float loiterIntervalSeconds = 3f;

    private readonly RaycastHit2D[] sightHits = new RaycastHit2D[16];
    private float nextRepathTime;
    private float nextVisionCheckTime;
    private float nextLoiterTime;
    private float lastSeenTime;
    private bool subscribedToMaze;
    private bool isChasing;
    private Vector3 lastRequestedPosition;

    private void OnEnable()
    {
        SubscribeToMaze();
    }

    private void Start()
    {
        if (player == null)
        {
            GameObject playerObject = GameObject.Find("Player");
            if (playerObject != null)
                player = playerObject.transform;
        }

        if (mazeShiftController == null)
            mazeShiftController = FindAnyObjectByType<MazeShiftController>();

        SubscribeToMaze();
        if (agent == null)
            agent = GetComponent<NavMeshAgent>();
        RefreshPath();
    }

    private void Update()
    {
        if (agent == null)
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

        if (player != null && Time.time >= nextVisionCheckTime)
        {
            nextVisionCheckTime = Time.time + visionCheckIntervalSeconds;
            if (CanSeePlayer())
            {
                lastSeenTime = Time.time;
                if (!isChasing)
                {
                    isChasing = true;
                    SetChaseDestination();
                }
            }
            else if (isChasing && Time.time - lastSeenTime >= chaseMemorySeconds)
            {
                isChasing = false;
                agent.ResetPath();
                nextLoiterTime = Time.time;
            }
        }

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
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        PlayerHealth playerHealth = collision.gameObject.GetComponentInParent<PlayerHealth>();
        if (playerHealth != null)
            playerHealth.TakeDamage(GetComponent<Collider2D>());
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
        if (agent == null)
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

        agent.SetDestination(player.position);
        lastRequestedPosition = player.position;
        nextRepathTime = Time.time + repathIntervalSeconds;
    }

    private void SetLoiterDestination()
    {
        nextLoiterTime = Time.time + loiterIntervalSeconds;
        if (agent == null || !agent.isOnNavMesh)
            return;

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

    private bool CanSeePlayer()
    {
        Vector2 origin = transform.position;
        Vector2 directionToPlayer = (Vector2)player.position - origin;
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

        return closestCollider != null && IsPlayerCollider(closestCollider);
    }

    private bool IsEnemyCollider(Collider2D collider)
    {
        return collider.transform == transform || collider.transform.IsChildOf(transform);
    }

    private bool IsPlayerCollider(Collider2D collider)
    {
        return collider.transform == player || collider.transform.IsChildOf(player);
    }
}
