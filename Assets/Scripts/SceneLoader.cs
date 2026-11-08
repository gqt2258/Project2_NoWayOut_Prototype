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
        CosmeticsShop,
        Loadout,
        Player2Loadout;
    [SerializeField] private JobBoardController jobBoardController;


    private bool isCoopLobby = false;   // remembers the last lobby type

    [Header("Results")]
    [Tooltip("Your results screen. Opened when the scene loads after a job ends.")]
    [SerializeField] private GameObject resultsPanel;

    private void Start()
    {
        JobSession.Select(null);   // a finished job doesn't carry over from the last game
        GameServerLogs.Clear();         // this scene opens on the main menu, so the room has ended
        if (Loadout != null)
            Loadout.SetActive(false);
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(false);
        mainMenuCanvas.SetActive(true);
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
        Shop.SetActive(false);
        EquipmentShop.SetActive(false);
        UpgradesShop.SetActive(false);
        CosmeticsShop.SetActive(false);
        Loadout.SetActive(false);
        Player2Loadout.SetActive(false);

        // Back from a match: remember Solo or Co-op, and show the results screen.
        isCoopLobby = JobSession.IsCoop;
        if (JobSession.LastResult != JobResult.None && resultsPanel != null)
        {
            mainMenuCanvas.SetActive(false);
            resultsPanel.SetActive(true);
        }
        else if (resultsPanel != null)
        {
            resultsPanel.SetActive(false);
        }
    }

    public void LoadMainMenu()
    {
        GameServerLogs.Clear();   // leaving the room
        PlayerWallet.Instance.ResetRun();   // clears equipment only
        jobBoardController.ClearSelection();   // no job selected
        mainMenuCanvas.SetActive(true);
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(false);
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
        Shop.SetActive(false);
        EquipmentShop.SetActive(false);
        UpgradesShop.SetActive(false);
        CosmeticsShop.SetActive(false);
        Loadout.SetActive(false);
        Player2Loadout.SetActive(false);
    }

    public void LoadLobbyCreate()
    {
        GameServerLogs.Clear();   // leaving the room
        PlayerWallet.Instance.ResetRun();   // clears equipment only
        jobBoardController.ClearSelection();   // no job selected
        lobbyBoard.SetActive(false);
        mainMenuCanvas.SetActive(false);
        jobBoard.SetActive(false);
        Settings.SetActive(false);
        lobbyCreate.SetActive(true);
        Shop.SetActive(false);
        EquipmentShop.SetActive(false);
        UpgradesShop.SetActive(false);
        CosmeticsShop.SetActive(false);
        Loadout.SetActive(false);
        Player2Loadout.SetActive(false);
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
        Loadout.SetActive(false);
        Player2Loadout.SetActive(false);
    }

    public void LoadSoloLobbyBoard()
    {
        isCoopLobby = false;
        JobSession.IsCoop = false;
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
        Loadout.SetActive(false);
        Player2Loadout.SetActive(false);
    }

    public void LoadCoopLobbyBoard()
    {
        isCoopLobby = true;
        JobSession.IsCoop = true;
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
        Loadout.SetActive(false);
        Player2Loadout.SetActive(false);
    }

    // Loadout button in the lobby. Its Back button uses LoadLastLobby.
    public void LoadLoadout()
    {
        lobbyBoard.SetActive(false);
        jobBoard.SetActive(false);
        mainMenuCanvas.SetActive(false);
        Settings.SetActive(false);
        lobbyCreate.SetActive(false);
        Shop.SetActive(false);
        EquipmentShop.SetActive(false);
        UpgradesShop.SetActive(false);
        CosmeticsShop.SetActive(false);
        Player2Loadout.SetActive(isCoopLobby);   // solo only shows Player 1
        Loadout.SetActive(true);
    }

    // Results screen button: closes it and goes back to the Solo or Co-op lobby.
    public void CloseResults()
    {
        JobSession.ClearResult();
        if (resultsPanel != null)
            resultsPanel.SetActive(false);

        LoadLastLobby();
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
        Loadout.SetActive(false);
        Player2Loadout.SetActive(false);
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
        Loadout.SetActive(false);
        Player2Loadout.SetActive(false);
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
        Loadout.SetActive(false);
        Player2Loadout.SetActive(false);
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
        Loadout.SetActive(false);
        Player2Loadout.SetActive(false);

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