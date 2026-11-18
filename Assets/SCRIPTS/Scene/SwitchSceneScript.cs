using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Unity.Netcode;

public class SwitchSceneScript : MonoBehaviour
{

    [SerializeField] private Button returnButton;

    private void Awake()
    {
        returnButton.onClick.AddListener(ReturnToMainMenu);
    }

    public void ReturnToMainMenu()
    {
        Time.timeScale = 1f;
        if (NetworkManager.Singleton != null && NetworkManager.Singleton.IsListening)
            NetworkManager.Singleton.Shutdown();
        JobSession.ClearResult();
        SceneManager.LoadScene("Main Menu");
    }
}
