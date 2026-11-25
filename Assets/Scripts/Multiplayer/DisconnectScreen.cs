using System.Collections;
using TMPro;
using Unity.Netcode;
using Unity.Netcode.Transports.UTP;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

// Co-op disconnect overlay. Put one in the Gameplay scene and one in the Main Menu scene.
// In the Main Menu it is only used for one message: the guest was sent back to the Join screen
// because the room ended ("The host left the room" / "Lost connection to the host").
// It uses ONE panel and changes its title, message, timer and buttons for each screen:
//
// Player who lost connection (guest):
//   Disconnected -> Reconnecting... -> Connection Restored (resumes in 3s) / Failed to Reconnect
// Player still connected (host):
//   Waiting for Guest (60s) -> Guest is back (resumes in 3s) / Returning to Main Menu
// If the other player's app is paused (phone call, switching apps), the other side sees
//   Waiting for Host / Guest -> Host / Guest is back.
//
// Solid background = game paused. Translucent = game still running.
public class DisconnectScreen : MonoBehaviour
{
    public static DisconnectScreen Instance { get; private set; }

    enum State { Hidden, Disconnected, Reconnecting, Restored, FailedToReconnect, Waiting, PartnerBack, Returning, KickedFromRoom }

    [Header("Panel (one panel used for every screen)")]
    [SerializeField] GameObject overlay;
    [SerializeField] Image background;
    [SerializeField] Color solidColor = new Color(0f, 0f, 0f, 1f);
    [SerializeField] Color translucentColor = new Color(0f, 0f, 0f, 0.6f);
    [SerializeField] TMP_Text titleText;
    [SerializeField] TMP_Text messageText;
    [SerializeField] TMP_Text timerText;

    [Header("Buttons (label = the TMP text inside each button)")]
    [SerializeField] Button buttonA;
    [SerializeField] Button buttonB;
    [SerializeField] Button buttonC;

    [Header("Timing (seconds)")]
    [SerializeField, Min(5f)] float waitForPartnerSeconds = 60f;
    [SerializeField, Min(1f)] float resumeSeconds = 3f;
    [SerializeField, Min(3f)] float reconnectTimeoutSeconds = 15f;
    [SerializeField, Min(1f)] float returningSeconds = 3f;

    [Header("Scenes")]
    [SerializeField] string gameplayScene = "Gameplay";
    [SerializeField] string mainMenuScene = "Main Menu";

    State state = State.Hidden;
    Coroutine routine;
    AudioSource reconnectingLoop;
    bool pausedGame;
    bool connected;   // this device was in a co-op room, so losing it should show the screen
    float partnerLeftAt = -100f;   // when the other player said they were leaving on purpose
    NetworkManager subscribed;

    bool InGameplay => SceneManager.GetActiveScene().name == gameplayScene;
    static NetworkManager Network => NetworkManager.Singleton;
    static bool IsHostSide => Network != null && Network.IsServer;
    string PartnerName => IsHostSide ? "Guest" : "Host";

    void Awake()
    {
        Instance = this;
        // Listen straight away: if Overlay is this same object, hiding it below stops Start from running.
        Subscribe();
        connected = Network != null && Network.IsConnectedClient;

        if (overlay == null)
            Debug.LogWarning("[Disconnect] Overlay is empty on DisconnectScreen, so nothing can show. " +
                             "Drag the disconnect panel into Overlay.", this);
        else
        {
            if (transform.IsChildOf(overlay.transform))
                Debug.LogWarning("[Disconnect] DisconnectScreen is on the Overlay panel itself (or inside it). " +
                                 "Hiding the panel would also stop its timers. Move the component to an object " +
                                 "that stays on, e.g. the Canvas.", this);
            overlay.SetActive(false);   // pops in and out instantly, no fade
        }
    }

    // Warns in co-op if a scene has no DisconnectScreen, or only a switched-off one (it can't listen then).
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
    static void WatchScenes()
    {
        SceneManager.sceneLoaded += (scene, mode) =>
        {
            if (!JobSession.IsCoop || Instance != null)
                return;
            DisconnectScreen inactive = FindAnyObjectByType<DisconnectScreen>(FindObjectsInactive.Include);
            Debug.LogWarning(inactive != null
                ? $"[Disconnect] The DisconnectScreen in {scene.name} is on a switched-off object, so it never starts. " +
                  "Put the component on an object that stays on (e.g. the Canvas) and drag the panel into Overlay."
                : $"[Disconnect] No DisconnectScreen in {scene.name}, so losing the other player shows nothing.");
        };
    }

    void Start()
    {
        Subscribe();
        connected |= Network != null && Network.IsConnectedClient;

        // A reconnect that reloaded the Gameplay scene. (The lobby doesn't show it.)
        if (CoopSession.JustReconnected)
        {
            CoopSession.JustReconnected = false;
            if (InGameplay)
                Show(State.Restored);
        }
    }

    void OnDestroy()
    {
        if (Instance == this) Instance = null;
        Unsubscribe();
        StopReconnectingLoop();
        if (pausedGame) Time.timeScale = 1f;
    }

    void Subscribe()
    {
        if (Network == null || subscribed == Network)
            return;

        subscribed = Network;
        subscribed.OnClientDisconnectCallback += OnClientDisconnected;
        subscribed.OnClientConnectedCallback += OnClientConnected;
    }

    void Unsubscribe()
    {
        if (subscribed == null)
            return;

        subscribed.OnClientDisconnectCallback -= OnClientDisconnected;
        subscribed.OnClientConnectedCallback -= OnClientConnected;
        subscribed = null;
    }

    // ---------- NETWORK EVENTS ----------

    void OnClientDisconnected(ulong clientId)
    {
        if (!InGameplay || !JobSession.IsCoop || CoopSession.LeavingOnPurpose || Network == null)
            return;

        bool lostMyself = clientId == Network.LocalClientId || !Network.IsServer;

        if (state == State.Reconnecting && lostMyself)
        {
            Show(State.FailedToReconnect);
            return;
        }

        if (!IsHostSide && lostMyself)
        {
            // Guest lost the host (in the lobby or in a job). A join that never connected is
            // handled by SceneLoader ("Could not connect to the co-op host").
            if (!connected)
                return;
            connected = false;
            if (state != State.Returning)
                Show(State.Disconnected);
            return;
        }

        // Host: the guest dropped. Only the job waits for them; the lobby just logs it (SceneLoader).
        if (IsHostSide && clientId != Network.LocalClientId && InGameplay && state != State.Returning)
            Show(State.Waiting);
    }

    void OnClientConnected(ulong clientId)
    {
        if (Network == null)
            return;

        if (clientId == Network.LocalClientId)
            connected = true;

        if (state == State.Reconnecting && clientId == Network.LocalClientId)
        {
            // The host may move this device into its scene. If it does, the next scene's
            // disconnect screen shows "Connection Restored". If not, this one does.
            CoopSession.JustReconnected = true;
            CoopSession.ReturnToLobby = true;
            StopReconnectingLoop();
            if (routine != null) StopCoroutine(routine);
            routine = StartCoroutine(RestoreIfSceneStays());
            return;
        }

        if (state == State.Waiting && IsHostSide && clientId != Network.LocalClientId)
            Show(State.PartnerBack);
    }

    IEnumerator RestoreIfSceneStays()
    {
        yield return new WaitForSecondsRealtime(1.5f);
        CoopSession.JustReconnected = false;

        if (!InGameplay)
        {
            CoopSession.ReturnToLobby = false;
            FindAnyObjectByType<SceneLoader>()?.LoadCoopLobbyBoard();
        }
        Show(State.Restored);
    }

    // Called through NetworkJobSync when the other player presses Back / Main Menu on purpose.
    public void OnPartnerLeftOnPurpose()
    {
        // In the lobby, SceneLoader handles it. Remember it so the guest's message can say the host left.
        if (!InGameplay)
        {
            partnerLeftAt = Time.unscaledTime;
            return;
        }

        Show(State.Returning);
    }

    // Main Menu: the guest was sent back to the Join screen because the room ended.
    // removedByHost: the host pressed X on this player in the lobby.
    public void ShowKickedFromRoom(bool removedByHost = false)
    {
        this.removedByHost = removedByHost;
        Show(State.KickedFromRoom);
    }

    bool removedByHost;

    // Called through NetworkJobSync when the other player's app is paused or resumed.
    public void OnPartnerPaused(bool paused)
    {
        if (!InGameplay)
            return;

        if (paused && state == State.Hidden)
            Show(State.Waiting);
        else if (!paused && state == State.Waiting)
            Show(State.PartnerBack);
    }

    // ---------- SCREENS ----------

    void Show(State next)
    {
        if (routine != null) StopCoroutine(routine);
        routine = null;
        if (next != State.Reconnecting) StopReconnectingLoop();

        state = next;
        AudioManager audio = AudioManager.Instance;
        if (next != State.Hidden)
        {
            Debug.Log($"[Disconnect] Showing: {next}", this);
            if (overlay != null) overlay.SetActive(true);   // first, so its timers can run
        }

        switch (next)
        {
            case State.Disconnected:
                SetPanel("Disconnected", "Lost connection to the host.", "", true);
                SetButtons("Reconnect", StartReconnect, "Back to Main Menu", LeaveWithRefund);
                Play(audio != null ? audio.Coop.ConnectionLost : null);
                break;

            case State.Reconnecting:
                SetPanel("Reconnecting...", "Trying to reach the host.", "0:00", true);
                SetButtons("Back", CancelReconnect);
                if (audio != null) reconnectingLoop = audio.PlayLoop(audio.Coop.Reconnecting);
                routine = StartCoroutine(ReconnectTimer());
                break;

            case State.Restored:
                SetPanel("Connection Restored", "", "", false);
                SetButtons();
                Play(audio != null ? audio.Coop.Reconnected : null);
                routine = StartCoroutine(ResumeCountdown());
                break;

            case State.FailedToReconnect:
                SetPanel("Failed to Reconnect", "The host could not be reached.", "", true);
                SetButtons("Retry", StartReconnect, "Back to Main Menu", LeaveWithRefund);
                Play(audio != null ? audio.UI.ErrorClick : null);
                break;

            case State.Waiting:
                SetPanel($"Waiting for {PartnerName}...", $"The {PartnerName.ToLower()} lost connection.", "", true);
                if (IsHostSide)
                    SetButtons("End Job", EndJobAndReturnToLobby, "Back to Main Menu", LeaveWithRefund);
                else
                    SetButtons("Back to Main Menu", LeaveWithRefund);
                Play(audio != null ? audio.Coop.PartnerDisconnect : null);
                routine = StartCoroutine(WaitCountdown());
                break;

            case State.PartnerBack:
                SetPanel($"{PartnerName} is back", "", "", false);
                SetButtons();
                Play(audio != null ? audio.Coop.Reconnected : null);
                routine = StartCoroutine(ResumeCountdown());
                break;

            case State.KickedFromRoom:
                bool hostLeft = Time.unscaledTime - partnerLeftAt < 5f;
                SetPanel(removedByHost ? "Removed" : "Disconnected",
                         removedByHost ? "The host removed you from the room." :
                         hostLeft ? "The host left the room." : "Lost connection to the host.",
                         "", true);
                SetButtons("OK", Hide);
                Play(audio != null ? audio.Coop.ConnectionLost : null);
                break;

            case State.Returning:
                SetPanel("Returning to Main Menu...", "The other player left the game.", "", true);
                SetButtons();
                Play(audio != null ? audio.UI.ErrorClick : null);
                routine = StartCoroutine(ReturnAfterDelay());
                break;

            default:
                Hide();
                return;
        }

        if (overlay != null) overlay.SetActive(true);
    }

    void Hide()
    {
        state = State.Hidden;
        StopReconnectingLoop();
        if (overlay != null) overlay.SetActive(false);
        SetPaused(false);
    }

    void SetPanel(string title, string message, string timer, bool solid)
    {
        if (titleText != null) titleText.text = title;
        if (messageText != null)
        {
            messageText.text = message;
            messageText.gameObject.SetActive(!string.IsNullOrEmpty(message));
        }
        if (timerText != null)
        {
            timerText.text = timer;
            timerText.gameObject.SetActive(!string.IsNullOrEmpty(timer) || state == State.Waiting ||
                                           state == State.Restored || state == State.PartnerBack ||
                                           state == State.Returning);
        }
        if (background != null) background.color = solid ? solidColor : translucentColor;

        // Solid = paused (only matters during a job).
        SetPaused(solid && InGameplay);
    }

    // Up to three buttons. Unused buttons are hidden.
    void SetButtons(string labelA = null, UnityAction actionA = null,
                    string labelB = null, UnityAction actionB = null,
                    string labelC = null, UnityAction actionC = null)
    {
        SetButton(buttonA, labelA, actionA);
        SetButton(buttonB, labelB, actionB);
        SetButton(buttonC, labelC, actionC);
    }

    static void SetButton(Button button, string label, UnityAction action)
    {
        if (button == null)
            return;

        button.onClick.RemoveAllListeners();
        bool used = action != null;
        button.gameObject.SetActive(used);
        if (!used)
            return;

        TMP_Text text = button.GetComponentInChildren<TMP_Text>(true);
        if (text != null) text.text = label;
        button.onClick.AddListener(action);
    }

    void SetPaused(bool pause)
    {
        if (pause && !pausedGame)
        {
            Time.timeScale = 0f;
            pausedGame = true;
        }
        else if (!pause && pausedGame)
        {
            Time.timeScale = 1f;
            pausedGame = false;
        }
    }

    static void Play(AudioClip clip)
    {
        if (AudioManager.Instance != null && clip != null)
            AudioManager.Instance.PlaySFX(clip);
    }

    void StopReconnectingLoop()
    {
        if (reconnectingLoop != null && AudioManager.Instance != null)
            AudioManager.Instance.StopLoop(reconnectingLoop);
        reconnectingLoop = null;
    }

    // ---------- TIMERS ----------

    IEnumerator ResumeCountdown()
    {
        for (int seconds = Mathf.CeilToInt(resumeSeconds); seconds > 0; seconds--)
        {
            if (timerText != null) timerText.text = $"Resuming in {seconds}";
            yield return new WaitForSecondsRealtime(1f);
        }
        Hide();
    }

    IEnumerator WaitCountdown()
    {
        for (int seconds = Mathf.CeilToInt(waitForPartnerSeconds); seconds > 0; seconds--)
        {
            if (timerText != null) timerText.text = $"{seconds / 60}:{seconds % 60:00}";
            yield return new WaitForSecondsRealtime(1f);
        }
        Show(State.Returning);
    }

    IEnumerator ReturnAfterDelay()
    {
        for (int seconds = Mathf.CeilToInt(returningSeconds); seconds > 0; seconds--)
        {
            if (timerText != null) timerText.text = $"{seconds}";
            yield return new WaitForSecondsRealtime(1f);
        }
        LeaveToMainMenu(true);
    }

    IEnumerator ReconnectTimer()
    {
        // Wait for the old connection to finish closing before connecting again.
        while (Network != null && (Network.ShutdownInProgress || Network.IsListening))
        {
            if (!Network.ShutdownInProgress) Network.Shutdown();
            yield return null;
        }

        if (!TryStartClient())
        {
            Show(State.FailedToReconnect);
            yield break;
        }

        float elapsed = 0f;
        while (elapsed < reconnectTimeoutSeconds)
        {
            int whole = Mathf.FloorToInt(elapsed);
            if (timerText != null) timerText.text = $"{whole / 60}:{whole % 60:00}";
            yield return new WaitForSecondsRealtime(0.25f);
            elapsed += 0.25f;
        }

        // Took too long.
        if (Network != null && Network.IsListening) Network.Shutdown();
        Show(State.FailedToReconnect);
    }

    bool TryStartClient()
    {
        NetworkManager network = Network;
        UnityTransport transport = network != null ? network.GetComponent<UnityTransport>() : null;
        if (network == null || transport == null || string.IsNullOrEmpty(CoopSession.LastHostAddress))
            return false;

        Subscribe();
        transport.SetConnectionData(CoopSession.LastHostAddress, 7777);
        return network.StartClient();
    }

    // ---------- BUTTON ACTIONS ----------

    void StartReconnect() => Show(State.Reconnecting);

    void LeaveWithRefund() => LeaveToMainMenu(true);

    void CancelReconnect()
    {
        if (Network != null && Network.IsListening)
        {
            CoopSession.LeavingOnPurpose = true;   // so this shutdown isn't shown as a failed reconnect
            Network.Shutdown();
            CoopSession.LeavingOnPurpose = false;
        }
        Show(State.Disconnected);
    }

    // Host only, while the guest is disconnected: ends the job and goes back to the co-op lobby,
    // still hosting, so the guest can rejoin. A disconnect: no results, the equipment is refunded.
    void EndJobAndReturnToLobby()
    {
        if (!IsHostSide || Network == null || Network.SceneManager == null)
            return;

        Hide();
        Time.timeScale = 1f;
        if (PlayerWallet.Instance != null)
            PlayerWallet.Instance.RefundMatchEquipment();
        JobSession.ClearResult();
        CoopSession.ReturnToLobby = true;
        Network.SceneManager.LoadScene(mainMenuScene, LoadSceneMode.Single);   // instant, no loading screen
    }

    // Leaves the room and goes to the Main Menu. Disconnects and timeouts refund the equipment.
    public void LeaveToMainMenu(bool refundEquipment)
    {
        StartCoroutine(LeaveRoutine(refundEquipment));
    }

    IEnumerator LeaveRoutine(bool refundEquipment)
    {
        Hide();
        CoopSession.LeavingOnPurpose = true;
        NotifyPartnerLeaving();
        yield return new WaitForSecondsRealtime(0.25f);   // lets the message reach the other player

        if (refundEquipment && InGameplay && PlayerWallet.Instance != null)
            PlayerWallet.Instance.RefundMatchEquipment();

        if (Network != null && Network.IsListening)
            Network.Shutdown();
        while (Network != null && Network.ShutdownInProgress)
            yield return null;

        CoopSession.LeavingOnPurpose = false;
        CoopSession.ReturnToLobby = false;
        Time.timeScale = 1f;
        if (refundEquipment)
            JobSession.ClearResult();   // a disconnect: no results. Leaving on purpose keeps them.

        if (InGameplay)
            SceneManager.LoadScene(mainMenuScene);   // instant, no loading screen
        else
            FindAnyObjectByType<SceneLoader>()?.LoadMainMenu();
    }

    // Tells the other player this device is leaving on purpose, so they skip the 60s wait.
    public static void NotifyPartnerLeaving()
    {
        NetworkManager network = Network;
        if (network == null || !network.IsListening || network.LocalClient == null ||
            network.LocalClient.PlayerObject == null)
            return;

        network.LocalClient.PlayerObject.GetComponent<NetworkJobSync>()?.NotifyLeaving();
    }
}