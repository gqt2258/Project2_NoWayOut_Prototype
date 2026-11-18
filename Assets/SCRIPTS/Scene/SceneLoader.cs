using UnityEngine;
using Unity.Netcode;
using Unity.Netcode.Transports.UTP;

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
    private bool joiningCoop;

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
        GetComponent<NearbyGames>()?.StopDiscovery();
        StopWatchingForGuests();
        if (NetworkManager.Singleton != null && NetworkManager.Singleton.IsListening)
            NetworkManager.Singleton.Shutdown();

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
        GetComponent<NearbyGames>()?.Refresh();
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
        GetComponent<NearbyGames>()?.StopDiscovery();
        StopWatchingForGuests();
        if (NetworkManager.Singleton != null && NetworkManager.Singleton.IsListening)
            NetworkManager.Singleton.Shutdown();

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

    public void HostCoop()
    {
        NetworkManager network = NetworkManager.Singleton;
        UnityTransport transport = network != null ? network.GetComponent<UnityTransport>() : null;
        if (network == null || transport == null)
        {
            GameServerLogs.AddError("Co-op networking is not set up");
            return;
        }

        if (network.IsListening && !network.IsHost)
        {
            GameServerLogs.AddError("Leave the current room before hosting");
            return;
        }

        transport.SetConnectionData("127.0.0.1", 7777, "0.0.0.0");
        if (!network.IsListening && !network.StartHost())
        {
            GameServerLogs.AddError("Could not start the co-op host");
            return;
        }

        network.OnClientConnectedCallback -= OnGuestConnected;
        network.OnClientConnectedCallback += OnGuestConnected;
        GetComponent<NearbyGames>()?.StartHosting();
        LoadCoopLobbyBoard();
    }

    private void OnGuestConnected(ulong clientId)
    {
        if (NetworkManager.Singleton != null && clientId != NetworkManager.Singleton.LocalClientId)
            GameServerLogs.Add("A player has joined");
    }

    private void StopWatchingForGuests()
    {
        if (NetworkManager.Singleton != null)
            NetworkManager.Singleton.OnClientConnectedCallback -= OnGuestConnected;
    }

    public void JoinCoop(string address)
    {
        NetworkManager network = NetworkManager.Singleton;
        UnityTransport transport = network != null ? network.GetComponent<UnityTransport>() : null;
        if (network == null || transport == null)
        {
            GameServerLogs.AddError("Co-op networking is not set up");
            return;
        }

        if (network.IsListening)
        {
            GameServerLogs.AddError("Leave the current room before joining another");
            return;
        }

        transport.SetConnectionData(address, 7777);
        network.OnClientConnectedCallback += OnCoopConnected;
        network.OnClientDisconnectCallback += OnCoopDisconnected;
        joiningCoop = true;
        if (!network.StartClient())
        {
            StopWaitingForCoop();
            GameServerLogs.AddError("Could not connect to the co-op host");
        }
    }

    private void OnCoopConnected(ulong clientId)
    {
        if (!joiningCoop || clientId != NetworkManager.Singleton.LocalClientId)
            return;

        StopWaitingForCoop();
        LoadCoopLobbyBoard();
        GameServerLogs.Add("A player has joined");
    }

    private void OnCoopDisconnected(ulong clientId)
    {
        if (!joiningCoop || clientId != NetworkManager.Singleton.LocalClientId)
            return;

        StopWaitingForCoop();
        GameServerLogs.AddError("Could not connect to the co-op host");
    }

    private void StopWaitingForCoop()
    {
        joiningCoop = false;
        NetworkManager network = NetworkManager.Singleton;
        if (network == null)
            return;

        network.OnClientConnectedCallback -= OnCoopConnected;
        network.OnClientDisconnectCallback -= OnCoopDisconnected;
    }

    private void OnDestroy()
    {
        StopWaitingForCoop();
        StopWatchingForGuests();
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
        if (JobSession.IsCoop && (NetworkManager.Singleton == null || !NetworkManager.Singleton.IsServer))
        {
            GameServerLogs.AddError("Only the host can start the co-op game");
            return;
        }

        if (JobSession.SelectedJob == null)
        {
            GameServerLogs.AddError("Pick a job from the Job Board first");
            return;
        }

        jobBoardController.StartConfirmedJob();
    }
}
