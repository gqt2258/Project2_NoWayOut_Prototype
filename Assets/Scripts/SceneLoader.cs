using UnityEngine;

public class SceneLoader : MonoBehaviour
{

    public GameObject lobbyBoard, jobBoard, mainMenuCanvas;
    [SerializeField] private JobBoardController jobBoardController;

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
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(true);
        mainMenuCanvas.SetActive(false);
        jobBoardController.ShowNewBoard();
    }

    public void AcceptJob()
    {
        jobBoardController.AcceptSelectedJob();
    }
}
