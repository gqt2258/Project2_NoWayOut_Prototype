using UnityEngine;

public class SceneLoader : MonoBehaviour
{

    public GameObject
        lobbyBoard,
        jobBoard,
        mainMenuCanvas,
        lobbyCreate,
        PlayerSlot2,
        Settings,
        Shop,
        EquipmentShop,
        UpgradesShop,
        CosmeticsShop;
    [SerializeField] private JobBoardController jobBoardController;

    private bool isCoopLobby = false;   // remembers the last lobby type

    private void Start()
    {
        JobSession.Select(null);   // a finished job doesn't carry over from the last game
        GameServerLogs.Clear();         // this scene opens on the main menu, so the room has ended
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(false);
        mainMenuCanvas.SetActive(true);
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
        Shop.SetActive(false);
        EquipmentShop.SetActive(false);
        UpgradesShop.SetActive(false);
        CosmeticsShop.SetActive(false);
    }

    public void LoadMainMenu()
    {
        GameServerLogs.Clear();   // leaving the room
        mainMenuCanvas.SetActive(true);
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(false);
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
        Shop.SetActive(false);
        EquipmentShop.SetActive(false);
        UpgradesShop.SetActive(false);
        CosmeticsShop.SetActive(false);
    }

    public void LoadLobbyCreate()
    {
        GameServerLogs.Clear();   // leaving the room
        lobbyBoard.SetActive(false);
        mainMenuCanvas.SetActive(false);
        jobBoard.SetActive(false);
        Settings.SetActive(false);
        lobbyCreate.SetActive(true);
        Shop.SetActive(false);
        EquipmentShop.SetActive(false);
        UpgradesShop.SetActive(false);
        CosmeticsShop.SetActive(false);
    }

    public void LoadSettings()
    {
        lobbyBoard.SetActive(false);
        mainMenuCanvas.SetActive(false);
        jobBoard.SetActive(false);
        Settings.SetActive(true);
        lobbyCreate.SetActive(false);
        Shop.SetActive(false);
        EquipmentShop.SetActive(false);
        UpgradesShop.SetActive(false);
        CosmeticsShop.SetActive(false);
    }

    public void LoadSoloLobbyBoard()
    {
        isCoopLobby = false;
        lobbyBoard.SetActive(true);
        mainMenuCanvas.SetActive(false);
        jobBoard.SetActive(false);
        PlayerSlot2.SetActive(false);
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
        Shop.SetActive(false);
        EquipmentShop.SetActive(false);
        UpgradesShop.SetActive(false);
        CosmeticsShop.SetActive(false);
    }

    public void LoadCoopLobbyBoard()
    {
        isCoopLobby = true;
        lobbyBoard.SetActive(true);
        mainMenuCanvas.SetActive(false);
        jobBoard.SetActive(false);
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
        PlayerSlot2.SetActive(true);
        Shop.SetActive(false);
        EquipmentShop.SetActive(false);
        UpgradesShop.SetActive(false);
        CosmeticsShop.SetActive(false);
    }

    // Returns to whichever lobby the player was last in.
    public void LoadLastLobby()
    {
        if (isCoopLobby)
            LoadCoopLobbyBoard();
        else
            LoadSoloLobbyBoard();
    }

    public void LoadJobBoard()
    {
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(true);
        mainMenuCanvas.SetActive(false);
        jobBoardController.ShowBoard();
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
        Shop.SetActive(false);
        EquipmentShop.SetActive(false);
        UpgradesShop.SetActive(false);
        CosmeticsShop.SetActive(false);
    }

    public void LoadEquipmentShop()
    {
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(false);
        mainMenuCanvas.SetActive(false);
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
        Shop.SetActive(true);
        EquipmentShop.SetActive(true);
        UpgradesShop.SetActive(false);
        CosmeticsShop.SetActive(false);
    }

    public void LoadUpgradesShop()
    {
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(false);
        mainMenuCanvas.SetActive(false);
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
        Shop.SetActive(true);
        EquipmentShop.SetActive(false);
        UpgradesShop.SetActive(true);
        CosmeticsShop.SetActive(false);
    }

    public void LoadCosmeticsShop()
    {
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(false);
        mainMenuCanvas.SetActive(false);
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
        Shop.SetActive(true);
        EquipmentShop.SetActive(false);
        UpgradesShop.SetActive(false);
        CosmeticsShop.SetActive(true);
    }

    // Confirm button on the job board.
    public void AcceptJob()
    {
        if (jobBoardController.ConfirmSelectedJob())
            LoadLastLobby();
    }

    // Start button in the lobby.
    public void StartGame()
    {
        if (JobSession.SelectedJob == null)
        {
            GameServerLogs.AddError("Pick a job from the Job Board first");
            return;
        }

        jobBoardController.StartConfirmedJob();
    }
}