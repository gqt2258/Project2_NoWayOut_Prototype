using UnityEngine;

namespace NoWayOut.Maze
{
    public class MazeItemPickup : MonoBehaviour
    {
        private string itemId;
        private ShopItem tool;   // set when this is a dropped hotbar tool instead of a job item

        public void Initialize(string id)
        {
            itemId = id;
        }

        public void InitializeTool(ShopItem droppedTool)
        {
            tool = droppedTool;
        }

        private void OnTriggerEnter2D(Collider2D other)
        {
            if (tool != null)
            {
                PlayerLoadout loadout = other.GetComponentInParent<PlayerLoadout>();
                if (loadout != null && loadout.TryAddItem(tool))
                    Destroy(gameObject);
                return;
            }

            // Job items share the inventory with tools, so a full inventory leaves them here.
            PlayerLoadout inventory = other.GetComponentInParent<PlayerLoadout>();
            if (inventory != null && !inventory.HasFreeSlot)
                return;

            PlayerJobScript playerJob = other.GetComponentInParent<PlayerJobScript>();
            if (playerJob == null || !playerJob.TryCollectItem(itemId))
                return;

            if (inventory != null)
            {
                SpriteRenderer sprite = GetComponentInChildren<SpriteRenderer>();
                inventory.TryAddJobItem(itemId, gameObject.name, sprite != null ? sprite.sprite : null);
            }

            Destroy(gameObject);
        }
    }
}