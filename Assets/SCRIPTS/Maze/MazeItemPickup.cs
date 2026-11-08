using UnityEngine;

namespace NoWayOut.Maze
{
    public class MazeItemPickup : MonoBehaviour
    {
        private string itemId;

        public void Initialize(string id)
        {
            itemId = id;
        }

        private void OnTriggerEnter2D(Collider2D other)
        {
            PlayerJobScript playerJob = other.GetComponentInParent<PlayerJobScript>();
            if (playerJob != null && playerJob.TryCollectItem(itemId))
                Destroy(gameObject);
        }
    }
}
