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

    private float nextRepathTime;
    private bool subscribedToMaze;
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

        RefreshPath();
    }

    private void Update()
    {

        if (Time.time < nextRepathTime || player == null)
            return;

        float movementThresholdSquared = minimumTargetMovement * minimumTargetMovement;
        if ((player.position - lastRequestedPosition).sqrMagnitude >= movementThresholdSquared)
            RefreshPath();
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
        if (agent == null || player == null)
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

        agent.SetDestination(player.position);
        lastRequestedPosition = player.position;
        nextRepathTime = Time.time + repathIntervalSeconds;
    }
}
