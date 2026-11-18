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
        }
    }

    [Rpc(SendTo.Server)]
    private void SendPositionRpc(Vector2 newPosition)
    {
        position.Value = newPosition;
    }
}
