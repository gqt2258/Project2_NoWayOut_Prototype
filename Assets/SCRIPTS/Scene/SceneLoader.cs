using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
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
    private bool quietLobbyEnter;       // set when going back to the lobby, so only the closing sound plays

    // ---------- AUDIO HELPERS ----------
    private static AudioManager Sound => AudioManager.Instance;

    private static void PlayUI(System.Func<AudioManager, AudioClip> pick)
    {
        if (AudioManager.Instance != null)
            AudioManager.Instance.PlaySFX(pick(AudioManager.Instance));
    }

    [Header("Results")]
    [Tooltip("Your results screen. Opened when the scene loads after a job ends.")]
    [SerializeField] private GameObject resultsPanel;

    // Lobby settings: opens on top of the lobby (solo and co-op). Audio toggles (SettingsAudio)
    // and a Leave Room button that changes with who opened it:
    //   Solo  -> "Leave Room"    Co-op host -> "Close Room" (sends the guest out)    Guest -> "Leave Room"
    // On Click in the Inspector:
    //   Lobby gear button -> OpenLobbySettings     Back / close   -> CloseLobbySettings
    //   Leave Room button -> AskLeaveRoom          Confirm Yes/No -> ConfirmLeaveRoom / CancelLeaveRoom
    [Header("Lobby settings")]
    [SerializeField] private GameObject lobbySettingsPanel;
    [Tooltip("Its label is set to Leave Room or Close Room.")]
    [SerializeField] private Button leaveRoomButton;
    [SerializeField] private GameObject leaveConfirmPanel;
    [SerializeField] private TMP_Text leaveConfirmTitle;
    [SerializeField] private TMP_Text leaveConfirmMessage;

    private void Start()
    {
        // Quick fade in whenever one of these screens opens.
        PanelFade.Add(lobbyBoard, jobBoard, mainMenuCanvas, lobbyCreate, Settings, Shop,
                      EquipmentShop, UpgradesShop, CosmeticsShop, Loadout, Player2Loadout, resultsPanel,
                      lobbySettingsPanel, leaveConfirmPanel);
        if (lobbySettingsPanel != null) lobbySettingsPanel.SetActive(false);
        if (leaveConfirmPanel != null) leaveConfirmPanel.SetActive(false);

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

        // Solo job ended from Settings > End Job: back to the solo lobby.
        if (CoopSession.ReturnToLobby && !JobSession.IsCoop)
        {
            CoopSession.ReturnToLobby = false;
            if (resultsPanel != null)
                resultsPanel.SetActive(false);
            LoadSoloLobbyBoard();
            return;
        }

        // Still in a co-op room (End Job, results Return, or the guest reconnected to the room):
        // open the co-op lobby straight away instead of the main menu.
        if (CoopSession.ReturnToLobby && JobSession.IsCoop &&
            NetworkManager.Singleton != null && NetworkManager.Singleton.IsListening)
        {
            CoopSession.ReturnToLobby = false;
            CoopSession.JustReconnected = false;   // the lobby uses the server log, not the disconnect screen
            if (NetworkManager.Singleton.IsHost)
            {
                NetworkManager.Singleton.OnClientConnectedCallback -= OnGuestConnected;
                NetworkManager.Singleton.OnClientConnectedCallback += OnGuestConnected;
                NetworkManager.Singleton.OnClientDisconnectCallback -= OnGuestLeft;
                NetworkManager.Singleton.OnClientDisconnectCallback += OnGuestLeft;
                GetComponent<NearbyGames>()?.StartHosting();
            }
            else
            {
                NetworkManager.Singleton.OnClientDisconnectCallback -= OnHostLost;
                NetworkManager.Singleton.OnClientDisconnectCallback += OnHostLost;
            }
            if (resultsPanel != null)
                resultsPanel.SetActive(false);
            LoadCoopLobbyBoard();
            return;
        }
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

    private static bool InRoom => JobSession.IsCoop && NetworkManager.Singleton != null && NetworkManager.Singleton.IsListening;

    // Main Menu button. Leaving a co-op room shows the loading screen.
    public void LoadMainMenu()
    {
        if (InRoom || lobbyBoard.activeSelf) ScreenFader.Cover("Leaving room", ShowMainMenu);
        else ShowMainMenu();
    }

    private void ShowMainMenu()
    {
        AudioManager.Instance?.StopAmbience();   // leaving the office
        GetComponent<NearbyGames>()?.StopDiscovery();
        StopWatchingForGuests();
        LeaveRoomOnPurpose();

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

    // Host / Join screen. Leaving a co-op room shows the loading screen.
    public void LoadLobbyCreate()
    {
        if (InRoom || lobbyBoard.activeSelf) ScreenFader.Cover("Leaving room", ShowLobbyCreate);
        else ShowLobbyCreate();
    }

    private void ShowLobbyCreate()
    {
        AudioManager.Instance?.StopAmbience();   // leaving the office
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

    // Solo button. Coming from the Host / Join screen shows the loading screen, like hosting does.
    // Going back to the lobby from a panel (Shop, Job Board...) stays a quick switch.
    public void LoadSoloLobbyBoard()
    {
        if (!quietLobbyEnter && lobbyCreate.activeSelf)
            ScreenFader.Cover("Creating room", ShowSoloLobbyBoard);
        else
            ShowSoloLobbyBoard();
    }

    private void ShowSoloLobbyBoard()
    {
        GetComponent<NearbyGames>()?.StopDiscovery();
        StopWatchingForGuests();
        LeaveRoomOnPurpose();

        isCoopLobby = false;
        JobSession.IsCoop = false;
        EnterLobbyAudio();
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
        EnterLobbyAudio();
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

    // ---------- LOBBY SETTINGS ----------

    private static bool IsCoopHost => JobSession.IsCoop && NetworkManager.Singleton != null && NetworkManager.Singleton.IsServer;

    // Lobby gear button.
    public void OpenLobbySettings()
    {
        if (lobbySettingsPanel == null)
            return;

        TMP_Text label = leaveRoomButton != null ? leaveRoomButton.GetComponentInChildren<TMP_Text>(true) : null;
        if (label != null)
            label.text = IsCoopHost ? "Close Room" : "Leave Room";
        if (leaveConfirmPanel != null)
            leaveConfirmPanel.SetActive(false);

        PanelFade.Show(lobbySettingsPanel);
        AudioManager.Instance?.PlayButtonClick();
    }

    // Back / close button on the lobby settings.
    public void CloseLobbySettings()
    {
        if (leaveConfirmPanel != null)
            leaveConfirmPanel.SetActive(false);
        PanelFade.Hide(lobbySettingsPanel);
        PlayUI(a => a.UI.BackClick);
    }

    // Leave Room / Close Room button.
    public void AskLeaveRoom()
    {
        string title;
        string message;
        if (IsCoopHost)
        {
            title = "Close the room?";
            message = "The guest will be sent back to the Join screen. Equipment in your loadout will be lost.";
        }
        else
        {
            title = "Leave the room?";
            message = "Equipment in your loadout will be lost.";
        }

        if (leaveConfirmPanel == null)
        {
            ConfirmLeaveRoom();   // no confirm panel set up: just leave
            return;
        }

        if (leaveConfirmTitle != null) leaveConfirmTitle.text = title;
        if (leaveConfirmMessage != null) leaveConfirmMessage.text = message;
        PanelFade.Show(leaveConfirmPanel);
        AudioManager.Instance?.PlayButtonClick();
    }

    // Confirm panel: No.
    public void CancelLeaveRoom()
    {
        PanelFade.Hide(leaveConfirmPanel);
        PlayUI(a => a.UI.BackClick);
    }

    // Confirm panel: Yes. Back to the Host / Join screen ("Leaving room..."). The host closing
    // the room sends the guest out, and the guest sees "The host left the room".
    public void ConfirmLeaveRoom()
    {
        PlayUI(a => a.UI.JobConfirmClick);
        if (leaveConfirmPanel != null) leaveConfirmPanel.SetActive(false);
        if (lobbySettingsPanel != null) lobbySettingsPanel.SetActive(false);
        LoadLobbyCreate();
    }

    // Office ambience, plus the "entering the office" sound when coming in from outside the lobby.
    private void EnterLobbyAudio()
    {
        if (Sound == null)
            return;

        Sound.PlayLobbyAmbience();
        if (!quietLobbyEnter)
            Sound.PlaySFX(Sound.UI.ShopOn);
        quietLobbyEnter = false;
    }

    // Leaving the co-op room on purpose: tells the other player first, so they don't wait 60s.
    private void LeaveRoomOnPurpose()
    {
        NetworkManager network = NetworkManager.Singleton;
        if (network == null || !network.IsListening)
            return;

        CoopSession.LeavingOnPurpose = true;
        CoopSession.ReturnToLobby = false;
        DisconnectScreen.NotifyPartnerLeaving();
        network.Shutdown();   // sends queued messages before closing
        StartCoroutine(ClearLeavingFlag());
    }

    private IEnumerator ClearLeavingFlag()
    {
        while (NetworkManager.Singleton != null && NetworkManager.Singleton.ShutdownInProgress)
            yield return null;
        yield return null;
        CoopSession.LeavingOnPurpose = false;
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
        network.OnClientDisconnectCallback -= OnGuestLeft;
        network.OnClientDisconnectCallback += OnGuestLeft;
        GetComponent<NearbyGames>()?.StartHosting();
        ScreenFader.Cover("Creating room", LoadCoopLobbyBoard);
    }

    private void OnGuestConnected(ulong clientId)
    {
        if (NetworkManager.Singleton != null && clientId != NetworkManager.Singleton.LocalClientId)
        {
            GameServerLogs.Add("A player has joined");
            PlayUI(a => a.UI.ShopOn);   // Player 2 walks into the office
        }
    }

    // Host side: the guest left the lobby.
    private void OnGuestLeft(ulong clientId)
    {
        if (NetworkManager.Singleton == null || clientId == NetworkManager.Singleton.LocalClientId ||
            !lobbyBoard.activeInHierarchy && !jobBoard.activeInHierarchy && !Shop.activeInHierarchy && !Loadout.activeInHierarchy)
            return;

        GameServerLogs.Add("The guest left the room");
        PlayUI(a => a.UI.ShopOff);   // Player 2 leaves the office
    }

    private void StopWatchingForGuests()
    {
        if (NetworkManager.Singleton != null)
        {
            NetworkManager.Singleton.OnClientConnectedCallback -= OnGuestConnected;
            NetworkManager.Singleton.OnClientDisconnectCallback -= OnGuestLeft;
        }
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
        CoopSession.LastHostAddress = address;   // used by Reconnect on the disconnect screen
        network.OnClientConnectedCallback += OnCoopConnected;
        network.OnClientDisconnectCallback += OnCoopDisconnected;
        joiningCoop = true;
        ScreenFader.ShowLoading("Joining room");
        if (!network.StartClient())
        {
            StopWaitingForCoop();
            ScreenFader.HideLoading();
            GameServerLogs.AddError("Could not connect to the co-op host");
        }
    }

    private void OnCoopConnected(ulong clientId)
    {
        if (!joiningCoop || clientId != NetworkManager.Singleton.LocalClientId)
            return;

        StopWaitingForCoop();
        LoadCoopLobbyBoard();
        ScreenFader.HideLoading();   // the lobby fades in behind the loading screen
        GameServerLogs.Add("A player has joined");

        // Watch for the host leaving while in the lobby.
        NetworkManager.Singleton.OnClientDisconnectCallback -= OnHostLost;
        NetworkManager.Singleton.OnClientDisconnectCallback += OnHostLost;
    }

    // Guest side: the connection to the room ended while in the lobby. This covers both the host
    // leaving and the guest's own connection dropping (the guest can't tell which).
    // Goes back to the Host / Join screen to join again. No disconnect screen in the lobby.
    private void OnHostLost(ulong clientId)
    {
        NetworkManager network = NetworkManager.Singleton;
        if (network == null || clientId != network.LocalClientId || CoopSession.LeavingOnPurpose)
            return;

        network.OnClientDisconnectCallback -= OnHostLost;
        if (network.IsListening && !network.ShutdownInProgress)
            network.Shutdown();

        // Straight back to the Host / Join screen (no loading screen for disconnects), then the message.
        ShowLobbyCreate();

        // The Join screen has no server log, so the disconnect panel shows the message.
        if (DisconnectScreen.Instance != null)
            DisconnectScreen.Instance.ShowKickedFromRoom();
        else
            GameServerLogs.AddError("Disconnected from the room");
    }

    private void OnCoopDisconnected(ulong clientId)
    {
        if (!joiningCoop || clientId != NetworkManager.Singleton.LocalClientId)
            return;

        StopWaitingForCoop();
        ScreenFader.HideLoading();
        GameServerLogs.AddError("Could not connect to the co-op host");   // plays the error sound
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
        if (NetworkManager.Singleton != null)
            NetworkManager.Singleton.OnClientDisconnectCallback -= OnHostLost;
    }

    // Loadout button in the lobby. Its Back button uses LoadLastLobby.
    public void LoadLoadout()
    {
        PlayUI(a => a.UI.LoadoutOn);
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
        // The closing sound of whichever panel was open. Not when coming back from the
        // Job Board's Confirm, which already played its own sound this frame.
        if (jobBoard.activeSelf) PlayUI(a => a.UI.JobBoardOff);
        else if (Shop.activeSelf) PlayUI(a => a.UI.ShopOff);
        else if (Loadout.activeSelf) PlayUI(a => a.UI.LoadoutOff);
        else PlayUI(a => a.UI.BackClick);

        quietLobbyEnter = true;
        if (isCoopLobby)
            LoadCoopLobbyBoard();
        else
            LoadSoloLobbyBoard();
    }

    public void LoadJobBoard()
    {
        if (JobSession.IsCoop && (NetworkManager.Singleton == null || !NetworkManager.Singleton.IsServer))
        {
            GameServerLogs.AddError("Only the host can choose the co-op job");
            return;
        }

        PlayUI(a => a.UI.JobBoardOn);
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

    // Opening the shop plays Shop On. Switching tabs inside the shop plays the default click.
    private void PlayShopOpen()
    {
        if (!Shop.activeSelf)
            PlayUI(a => a.UI.ShopOn);
    }

    public void LoadEquipmentShop()
    {
        PlayShopOpen();
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
        PlayShopOpen();
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
        PlayShopOpen();
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
        {
            PlayUI(a => a.UI.JobConfirmClick);
            quietLobbyEnter = true;
            jobBoard.SetActive(false);   // so LoadLastLobby doesn't also play the board closing
            if (isCoopLobby) LoadCoopLobbyBoard();
            else LoadSoloLobbyBoard();
        }
        else
        {
            PlayUI(a => a.UI.ErrorClick);
        }
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

        PlayUI(a => a.UI.StartGameClick);
        PlayUI(a => a.Player.Leave);   // through the portal
        jobBoardController.StartConfirmedJob();
    }
}