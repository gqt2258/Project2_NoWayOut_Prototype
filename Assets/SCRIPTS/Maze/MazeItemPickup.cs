using UnityEngine;
using Unity.Netcode;

namespace NoWayOut.Maze
{
    public class MazeItemPickup : MonoBehaviour
    {
        private string itemId;
        private string networkKey;
        private bool claimed;
        private ShopItem tool;   // set when this is a dropped hotbar tool instead of a job item

        public bool IsJobItem => tool == null && !string.IsNullOrEmpty(itemId);
        public string NetworkKey => networkKey;
        public bool TryClaim()
        {
            if (claimed)
                return false;
            claimed = true;
            return true;
        }

        public void Initialize(string id, string key = null)
        {
            itemId = id;
            networkKey = key;
            SetRadarVisible(false);
        }

        public void InitializeTool(ShopItem droppedTool, string key = null)
        {
            tool = droppedTool;
            networkKey = key;
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
                if (loadout == null)
                    return;
                if (JobSession.IsCoop && !string.IsNullOrEmpty(networkKey))
                {
                    NetworkJobSync sync = NetworkManager.Singleton != null && NetworkManager.Singleton.LocalClient.PlayerObject != null
                        ? NetworkManager.Singleton.LocalClient.PlayerObject.GetComponent<NetworkJobSync>() : null;
                    sync?.TryTakeItem(this);
                    return;
                }
                CollectTool(loadout);
                return;
            }

            // Job items share the inventory with tools, so a full inventory leaves them here.
            PlayerLoadout inventory = other.GetComponentInParent<PlayerLoadout>();
            if (inventory != null && !inventory.HasFreeSlot)
                return;

            PlayerJobScript playerJob = other.GetComponentInParent<PlayerJobScript>();
            if (playerJob == null)
                return;

            if (JobSession.IsCoop && !string.IsNullOrEmpty(networkKey))
            {
                NetworkJobSync sync = NetworkManager.Singleton != null && NetworkManager.Singleton.LocalClient != null &&
                    NetworkManager.Singleton.LocalClient.PlayerObject != null
                    ? NetworkManager.Singleton.LocalClient.PlayerObject.GetComponent<NetworkJobSync>() : null;
                sync?.TryTakeItem(this);
                return;
            }

            Collect(playerJob, inventory);
        }

        public bool Collect(PlayerJobScript playerJob, PlayerLoadout inventory)
        {
            if (claimed || playerJob == null || (inventory != null && !inventory.HasFreeSlot) || !playerJob.TryCollectItem(itemId))
                return false;

            claimed = true;

            if (inventory != null)
            {
                SpriteRenderer sprite = GetComponentInChildren<SpriteRenderer>();
                inventory.TryAddJobItem(itemId, gameObject.name, sprite != null ? sprite.sprite : null);
            }

            Destroy(gameObject);
            return true;
        }

        public bool CollectTool(PlayerLoadout inventory)
        {
            if (claimed || tool == null || inventory == null || !inventory.TryAddItem(tool))
                return false;
            claimed = true;
            inventory.GetComponent<RadarController>()?.RevealTool(tool);
            Destroy(gameObject);
            return true;
        }
    }
}
