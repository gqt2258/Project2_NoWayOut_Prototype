using UnityEngine;

namespace NoWayOut.Maze
{
    public class MazeItemPickup : MonoBehaviour
    {
        private string itemId;
        private ShopItem tool;   // set when this is a dropped hotbar tool instead of a job item

        public bool IsJobItem => tool == null && !string.IsNullOrEmpty(itemId);

        public void Initialize(string id)
        {
            itemId = id;
            SetRadarVisible(false);
        }

        public void InitializeTool(ShopItem droppedTool)
        {
            tool = droppedTool;
        }

        public SpriteRenderer GetRadarIcon()
        {
            int radarLayer = LayerMask.NameToLayer("MiniMapIcon");
            foreach (SpriteRenderer sprite in GetComponentsInChildren<SpriteRenderer>(true))
                if (sprite.gameObject.layer == radarLayer)
                    return sprite;
            return null;
        }

        public void SetRadarVisible(bool visible)
        {
            int radarLayer = LayerMask.NameToLayer("MiniMapIcon");
            foreach (SpriteRenderer sprite in GetComponentsInChildren<SpriteRenderer>(true))
                if (sprite.gameObject.layer == radarLayer)
                    sprite.enabled = visible;
        }

        private void OnTriggerEnter2D(Collider2D other)
        {
            if (tool != null)
            {
                PlayerLoadout loadout = other.GetComponentInParent<PlayerLoadout>();
                if (loadout != null && loadout.TryAddItem(tool))
                {
                    loadout.GetComponent<RadarController>()?.RevealTool(tool);
                    Destroy(gameObject);
                }
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
