using UnityEngine;
using UnityEngine.AI;

public class EnemyMovement : MonoBehaviour
{

    public NavMeshAgent agent;
    public Transform player;

    // Update is called once per frame
    void Update()
    {
        agent.destination = player.position;
    }
}
