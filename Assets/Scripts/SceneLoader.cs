using UnityEngine;

public class SceneLoader : MonoBehaviour
{

    public GameObject lobbyBoard, jobBoard, mainMenuCanvas, lobbyCreate, PlayerSlot2, Settings;
    [SerializeField] private JobBoardController jobBoardController;

    private void Start()
    {
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(false);
        mainMenuCanvas.SetActive(true);
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
    }

    public void LoadMainMenu()
    {
        mainMenuCanvas.SetActive(true);
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(false);
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
    }

    public void LoadLobbyCreate()
    {
        lobbyBoard.SetActive(false);
        mainMenuCanvas.SetActive(false);
        jobBoard.SetActive(false);
        Settings.SetActive(false);
        lobbyCreate.SetActive(true);
    }

    public void LoadSettings()
    {
        lobbyBoard.SetActive(false);
        mainMenuCanvas.SetActive(false);
        jobBoard.SetActive(false);
        Settings.SetActive(true);
        lobbyCreate.SetActive(false);
    }

    public void LoadSoloLobbyBoard()
    {
        lobbyBoard.SetActive(true);
        mainMenuCanvas.SetActive(false);
        jobBoard.SetActive(false);
        PlayerSlot2.SetActive(false);
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
    }

    public void LoadCoopLobbyBoard()
    {
        lobbyBoard.SetActive(true);
        mainMenuCanvas.SetActive(false);
        jobBoard.SetActive(false);
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
        PlayerSlot2.SetActive(true);
    }

    public void LoadJobBoard()
    {
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(true);
        mainMenuCanvas.SetActive(false);
        jobBoardController.ShowNewBoard();
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
    }

    public void AcceptJob()
    {
        jobBoardController.AcceptSelectedJob();
    }
}
