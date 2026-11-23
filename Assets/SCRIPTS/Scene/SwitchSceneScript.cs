using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Unity.Netcode;

public class SwitchSceneScript : MonoBehaviour
{

    [SerializeField] private Button returnButton;

    private void Awake()
    {
        // Leave Return Button empty if GameplaySettings handles the button (it asks to confirm first).
        if (returnButton != null)
            returnButton.onClick.AddListener(ReturnToMainMenu);
    }

    public void ReturnToMainMenu()
    {
        Time.timeScale = 1f;
        if (NetworkManager.Singleton != null && NetworkManager.Singleton.IsListening)
        {
            // Leaving on purpose: tell the other player so they see "Returning to Main Menu"
            // straight away instead of waiting 60 seconds. Equipment is used up.
            CoopSession.LeavingOnPurpose = true;
            CoopSession.ReturnToLobby = false;
            DisconnectScreen.NotifyPartnerLeaving();
            NetworkManager.Singleton.Shutdown();   // sends queued messages before closing
            StartCoroutine(LoadMenuAfterShutdown());
            return;
        }
        JobSession.ClearResult();
        ScreenFader.LoadScene("Main Menu", "Returning to the office");
    }

    private IEnumerator LoadMenuAfterShutdown()
    {
        while (NetworkManager.Singleton != null && NetworkManager.Singleton.ShutdownInProgress)
            yield return null;

        CoopSession.LeavingOnPurpose = false;
        JobSession.ClearResult();
        ScreenFader.LoadScene("Main Menu", "Returning to the office");
    }
}