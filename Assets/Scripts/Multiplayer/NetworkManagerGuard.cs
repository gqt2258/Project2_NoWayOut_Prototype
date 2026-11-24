using Unity.Netcode;
using UnityEngine;

// Put it on the NetworkManager object in the Main Menu scene.
//
// The NetworkManager stays loaded between scenes. So every time the Main Menu loads again
// (after a solo job, leaving a room, ...), the scene's own copy would be a second NetworkManager.
// This removes that extra copy before it starts, so there is always exactly one.
// (Fixes: "Singleton is not null after invoking OnDestroy. Do you have more than one NetworkManager".)
[DefaultExecutionOrder(-10000)]   // before the NetworkManager itself wakes up
public class NetworkManagerGuard : MonoBehaviour
{
    void Awake()
    {
        NetworkManager existing = NetworkManager.Singleton;
        if (existing == null || existing.gameObject == gameObject)
            return;   // this is the first one: keep it

        gameObject.SetActive(false);   // stops this copy's NetworkManager from starting up
        Destroy(gameObject);
    }
}