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
    [Tooltip("The Results Panel (with ResultsScreen on it). Opens over the lobby after a job ends.")]
    [SerializeField] private GameObject resultsPanel;

    // Lobby settings: opens on top of the lobby (solo and co-op). Audio toggles (SettingsAudio)
    // and a Leave Room button that changes with who opened it:
    //   Solo  -> "Leave Room"    Co-op host -> "Close Room" (sends the guest out)    Guest -> "Leave Room"
    // On Click in the Inspector:
    //   Lobby gear button -> OpenLobbySettings     Back / close   -> CloseLobbySettings
    //   Leave Room button -> AskLeaveRoom          Confirm Yes/No -> ConfirmLeaveRoom / CancelLeaveRoom
    // Lobby name (top left of the lobby). Solo and the co-op host can edit it; the guest sees the
    // host's name, locked. Editing happens in the input field itself (no On Click needed).
    [Header("Lobby name")]
    [Tooltip("An input field showing the room name, e.g. \"Bob's Room\".")]
    [SerializeField] private TMP_InputField roomNameInput;
    [Tooltip("Optional. The pencil icon button. Tapping it starts editing the name.")]
    [SerializeField] private Button roomNameEditButton;

    [Header("Lobby settings")]
    [SerializeField] private GameObject lobbySettingsPanel;
    [Tooltip("Its label is set to Leave Room or Close Room.")]
    [SerializeField] private Button leaveRoomButton;
    [SerializeField] private GameObject leaveConfirmPanel;
    [SerializeField] private TMP_Text leaveConfirmTitle;
    [SerializeField] private TMP_Text leaveConfirmMessage;

    private void Start()
    {
        PlayerProfileSync.ProfilesChanged += OnProfilesChanged;
        // Quick fade in whenever one of these screens opens.
        PanelFade.Add(lobbyBoard, jobBoard, mainMenuCanvas, lobbyCreate, Settings, Shop,
                      EquipmentShop, UpgradesShop, CosmeticsShop, Loadout, Player2Loadout, resultsPanel,
                      lobbySettingsPanel, leaveConfirmPanel);
        if (lobbySettingsPanel != null) lobbySettingsPanel.SetActive(false);
        if (leaveConfirmPanel != null) leaveConfirmPanel.SetActive(false);

        if (roomNameInput != null)
        {
            roomNameInput.characterLimit = NearbyGames.MaxRoomNameLength;
            roomNameInput.onEndEdit.AddListener(OnRoomNameEdited);
            MakeNameLookLikeText();
        }
        if (roomNameEditButton != null)
            roomNameEditButton.onClick.AddListener(EditRoomName);

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
        if (resultsPanel != null)
            resultsPanel.SetActive(false);

        bool inNetworkRoom = NetworkManager.Singleton != null && NetworkManager.Singleton.IsListening;
        if (RoundResult.Pending || CoopSession.ReturnToLobby)
            Debug.Log($"[Results] Main Menu opened. Result waiting: {RoundResult.Pending}, " +
                      $"back to: {(RoundResult.BackToMainMenu ? "Main Menu" : "lobby")}, in a co-op room: {inNetworkRoom}, " +
                      $"Results Panel set: {resultsPanel != null}", this);

        // Left the job (Settings > Back to Main Menu): the results show over the Main Menu.
        if (RoundResult.Pending && RoundResult.BackToMainMenu && !inNetworkRoom)
        {
            CoopSession.ReturnToLobby = false;
            ShowResultsIfPending();
            return;
        }

        if ((CoopSession.ReturnToLobby || RoundResult.Pending) && !inNetworkRoom)
        {
            if (RoundResult.Pending && resultsPanel == null)
                Debug.LogWarning("A job just ended but Results Panel is empty on SceneLoader, so no results can show.", this);
            CoopSession.ReturnToLobby = false;
            quietLobbyEnter = RoundResult.Pending;   // the results machine makes the sound instead
            LoadSoloLobbyBoard();
            ShowResultsIfPending();
            return;
        }

        // Still in a co-op room (End Job, results Return, or the guest reconnected to the room):
        // open the co-op lobby straight away instead of the main menu.
        if (CoopSession.ReturnToLobby && JobSession.IsCoop &&
            NetworkManager.Singleton != null && NetworkManager.Singleton.IsListening)
        {
            CoopSession.ReturnToLobby = false;
            CoopSession.JustReconnected = false;   // the lobby uses the server log, not the disconnect screen
            partnerNameLogged = PlayerProfileSync.Partner != null ? PlayerProfileSync.Partner.Profile.Name : null;   // back from a job: no "has joined" again
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
            quietLobbyEnter = RoundResult.Pending;
            LoadCoopLobbyBoard();
            ShowResultsIfPending();
            return;
        }

        // A result with no lobby to go back to (e.g. the co-op room closed while loading): drop it.
        RoundResult.Clear();
        JobSession.ClearResult();
    }

    // ---------- RESULTS ----------

    // Opens the results machine on top of the lobby.
    private void ShowResultsIfPending()
    {
        if (!RoundResult.Pending || resultsPanel == null)
            return;
        resultsPanel.transform.SetAsLastSibling();   // drawn above the lobby
        resultsPanel.SetActive(true);
    }

    // Leaving the lobby (Main Menu, Host / Join, kicked): the results go away too.
    private void HideResults()
    {
        RoundResult.Clear();
        JobSession.ClearResult();
        if (resultsPanel != null)
            resultsPanel.SetActive(false);
    }

    private void CloseResultsHere()
    {
        HideResultsQuietly();
        PlayUI(a => a.UI.BackClick);
        if (lobbyBoard.activeSelf)
        {
            if (Sound != null) Sound.PlayLobbyAmbience();   // the machine hum stops
        }
        else if (Sound != null)
        {
            Sound.StopAmbience();   // results over the Main Menu: just the machine hum stops
        }
    }

    private void HideResultsQuietly()
    {
        RoundResult.Clear();
        JobSession.ClearResult();
        PanelFade.Hide(resultsPanel);
    }

    // The host closed the results (co-op): the guest's close too.
    public void CloseResultsFromHost()
    {
        if (resultsPanel == null || !resultsPanel.activeSelf)
        {
            RoundResult.Clear();
            JobSession.ClearResult();
            return;
        }
        CloseResultsHere();
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
        HideResults();
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
        HideResults();
        NearbyGames.ResetRoomName();   // the next room starts with the default name
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
        // Opening the Host / Join screen searches once. After that, only the Refresh button does.
        NearbyGames nearby = GetComponent<NearbyGames>();
        if (nearby != null)
        {
            nearby.ClearRooms();
            nearby.Refresh();
        }
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
        PlayerSlot2.SetActive(PlayerProfileSync.HasPartner);   // only once someone has joined
        Shop.SetActive(false);
        EquipmentShop.SetActive(false);
        UpgradesShop.SetActive(false);
        CosmeticsShop.SetActive(false);
        Loadout.SetActive(false);
        Player2Loadout.SetActive(false);
    }

    // ---------- LOBBY NAME ----------

    private static bool IsCoopGuest => JobSession.IsCoop && NetworkManager.Singleton != null &&
                                       NetworkManager.Singleton.IsClient && !NetworkManager.Singleton.IsServer;

    // Shows the room name, and locks it for the guest.
    public void RefreshRoomName()
    {
        if (roomNameInput == null)
            return;

        bool guest = IsCoopGuest;
        string roomName = guest && !string.IsNullOrEmpty(CoopSession.HostRoomName)
            ? CoopSession.HostRoomName : NearbyGames.RoomName;

        roomNameInput.SetTextWithoutNotify(roomName);
        roomNameInput.interactable = false;   // only the pencil unlocks it
        editingName = false;
        if (roomNameEditButton != null)
            roomNameEditButton.interactable = !guest;
    }

    private bool editingName;

    // The name looks like plain text: no box and no tint. It stays locked (taps do nothing)
    // and only the pencil button unlocks it for typing (a blinking cursor shows while typing).
    private void MakeNameLookLikeText()
    {
        roomNameInput.transition = Selectable.Transition.None;   // locked doesn't look greyed out
        roomNameInput.onDeselect.AddListener(_ => LockRoomName());

        Image box = roomNameInput.GetComponent<Image>();
        if (box != null)
            box.enabled = false;

        foreach (Graphic graphic in roomNameInput.GetComponentsInChildren<Graphic>(true))
            graphic.raycastTarget = false;

        if (roomNameInput.placeholder != null)
            roomNameInput.placeholder.gameObject.SetActive(false);
    }

    // Pencil button: start typing in the name box.
    public void EditRoomName()
    {
        if (roomNameInput == null || IsCoopGuest)
            return;

        editingName = true;
        roomNameInput.interactable = true;
        roomNameInput.Select();
        roomNameInput.ActivateInputField();
    }

    // Done typing (or tapped elsewhere): lock it again. Waits one frame, because locking it
    // while Unity is still deselecting it causes "Attempting to select while already selecting".
    private void LockRoomName()
    {
        if (roomNameInput == null || !editingName)
            return;

        editingName = false;
        StartCoroutine(LockRoomNameNextFrame());
    }

    private IEnumerator LockRoomNameNextFrame()
    {
        yield return null;
        if (roomNameInput != null && !editingName)
            roomNameInput.interactable = false;
    }

    // Finished typing: save it, and send it to the guest.
    private void OnRoomNameEdited(string typed)
    {
        if (IsCoopGuest)
            return;

        NearbyGames.RoomName = typed;
        roomNameInput.SetTextWithoutNotify(NearbyGames.RoomName);
        LockRoomName();
        SendRoomNameToGuest();
    }

    private static void SendRoomNameToGuest()
    {
        NetworkManager network = NetworkManager.Singleton;
        if (network == null || !network.IsServer || network.LocalClient == null || network.LocalClient.PlayerObject == null)
            return;

        network.LocalClient.PlayerObject.GetComponent<NetworkJobSync>()?.ShareRoomName(NearbyGames.RoomName);
    }

    private IEnumerator SendRoomNameSoon()
    {
        yield return new WaitForSecondsRealtime(1f);   // let the guest finish joining first
        SendRoomNameToGuest();
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
        RefreshRoomName();
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
            PlayUI(a => a.UI.ShopOn);   // Player 2 walks into the office (the log line comes with their name)
            StartCoroutine(SendRoomNameSoon());
        }
    }

    // ---------- THE OTHER PLAYER (co-op) ----------

    private string partnerNameLogged;

    // The partner joined, left, or changed their loadout / cosmetics / upgrades.
    private void OnProfilesChanged()
    {
        PlayerProfileSync partner = PlayerProfileSync.Partner;
        bool here = isCoopLobby && partner != null;

        if (lobbyBoard.activeSelf && isCoopLobby)
            PlayerSlot2.SetActive(here);
        if (Loadout.activeSelf && isCoopLobby)
            Player2Loadout.SetActive(here);

        // "Jacob (Guest) has joined" once their name arrives.
        if (here && partner.Profile.HasData && partnerNameLogged != partner.Profile.Name)
        {
            if (partnerNameLogged == null)
                GameServerLogs.Add(partner.Profile.IsHost ? $"You joined {partner.Profile.Name} (Host)" : $"{partner.Profile.Name} (Guest) has joined");
            else
                GameServerLogs.Add($"{partnerNameLogged} is now called {partner.Profile.Name}");   // they renamed themselves
            partnerNameLogged = partner.Profile.Name;
        }
        if (partner == null)
            partnerNameLogged = null;
    }

    // Host side: the guest left the lobby.
    private void OnGuestLeft(ulong clientId)
    {
        if (NetworkManager.Singleton == null || clientId == NetworkManager.Singleton.LocalClientId ||
            !lobbyBoard.activeInHierarchy && !jobBoard.activeInHierarchy && !Shop.activeInHierarchy && !Loadout.activeInHierarchy)
            return;

        if (LobbyPlayerSlot.KickedJustNow)
            LobbyPlayerSlot.KickedJustNow = false;   // already logged "You removed ..."
        else
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
        bool removed = network.DisconnectReason == LobbyPlayerSlot.KickReason;   // the host pressed X
        if (network.IsListening && !network.ShutdownInProgress)
            network.Shutdown();

        // Straight back to the Host / Join screen (no loading screen for disconnects), then the message.
        ShowLobbyCreate();

        // The Join screen has no server log, so the disconnect panel shows the message.
        if (DisconnectScreen.Instance != null)
            DisconnectScreen.Instance.ShowKickedFromRoom(removed);
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
        PlayerProfileSync.ProfilesChanged -= OnProfilesChanged;
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
        Player2Loadout.SetActive(isCoopLobby && PlayerProfileSync.HasPartner);   // solo / alone: only Player 1
        Loadout.SetActive(true);
    }

    // Results screen Back to Lobby button. Co-op: only the host, and it closes both players' results.
    public void CloseResults()
    {
        if (IsCoopGuest)
        {
            GameServerLogs.AddError("Only the host can close the results");
            return;
        }

        NetworkManager network = NetworkManager.Singleton;
        if (InRoom && network.LocalClient != null && network.LocalClient.PlayerObject != null)
            network.LocalClient.PlayerObject.GetComponent<NetworkJobSync>()?.CloseResultsForEveryone();

        CloseResultsHere();
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