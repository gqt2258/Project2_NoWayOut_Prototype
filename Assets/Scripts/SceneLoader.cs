using Unity.Properties;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{

    public GameObject lobbyBoard, jobBoard, mainMenuCanvas;

    private void Start()
    {
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(false);
        mainMenuCanvas.SetActive(true);
    }

    public void LoadMainMenu()
    {
        mainMenuCanvas.SetActive(true);
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(false);
    }

    public void LoadLobbyBoard()
    {
        lobbyBoard.SetActive(true);
        mainMenuCanvas.SetActive(false);
        jobBoard.SetActive(false);
    }

    public void LoadJobBoard()
    {
        jobBoard.SetActive(true);
        mainMenuCanvas.SetActive(false);
    }
}
