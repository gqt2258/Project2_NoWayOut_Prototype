using System.Collections;
using TMPro;
using Unity.Netcode;
using UnityEngine;
using UnityEngine.UI;

// Goes on each player slot in the lobby (the standing character with the name above and ping below).
//   Player 1 slot (Is Partner off): this player. The pencil lets them rename themselves.
//   Player 2 slot (Is Partner on):  the co-op partner. The host gets an X to remove them from the room.
// The Player 2 slot is only shown once someone has joined (SceneLoader turns it on and off).
// The character itself is a CharacterPreviewUI inside the slot (Show Partner on for Player 2).
//
// Buttons are wired in code, so leave their On Click empty.
public class LobbyPlayerSlot : MonoBehaviour
{
    public const string KickReason = "kicked";

    // Set when the host removes the guest, so the lobby logs "removed" instead of "left".
    public static bool KickedJustNow;

    [SerializeField] bool isPartner;

    [Header("Name (above the character)")]
    [Tooltip("An input field showing the name and role, e.g. \"Bob (Host)\". Looks like plain text, " +
             "and only the pencil unlocks it (the role is left out while typing).")]
    [SerializeField] TMP_InputField nameInput;
    [Tooltip("Player 1 only. The pencil button next to the name.")]
    [SerializeField] Button editNameButton;
    [Tooltip("Optional. Shows e.g. \"6/10\" while typing. Hidden otherwise.")]
    [SerializeField] TMP_Text nameCounterText;

    [Header("Role after the name (empty = nothing)")]
    [SerializeField] string soloRole = "";
    [SerializeField] string hostRole = "(Host)";
    [SerializeField] string guestRole = "";

    [Header("Ping (under the character)")]
    [Tooltip("Optional. This slot's player's ping, e.g. \"14 ms\". Hidden in solo.")]
    [SerializeField] TMP_Text pingText;

    [Header("Remove player (Player 2 slot, host only)")]
    [Tooltip("The X next to the partner's name. Only the host sees it.")]
    [SerializeField] Button kickButton;
    [Tooltip("Optional. \"Remove Jacob from the room?\" with Yes / No. Empty = removes straight away.")]
    [SerializeField] GameObject kickConfirmPanel;
    [SerializeField] TMP_Text kickConfirmText;
    [SerializeField] Button kickYesButton;
    [SerializeField] Button kickNoButton;

    bool editing;

    static NetworkManager Network => NetworkManager.Singleton;
    static bool InRoom => JobSession.IsCoop && Network != null && Network.IsListening;
    static bool IsHost => InRoom && Network.IsServer;

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
    static void ResetStatics()
    {
        KickedJustNow = false;
    }

    void Awake()
    {
        if (nameInput != null)
        {
            nameInput.characterLimit = 0;   // no hard stop: OnNameTyping trims it and says why
            MakeNameLookLikeText();
            nameInput.onEndEdit.AddListener(OnNameEdited);
            nameInput.onValueChanged.AddListener(OnNameTyping);
        }
        if (editNameButton != null)
        {
            editNameButton.gameObject.SetActive(!isPartner);
            editNameButton.onClick.AddListener(EditName);
        }
        if (kickButton != null) kickButton.onClick.AddListener(AskKick);
        if (kickYesButton != null) kickYesButton.onClick.AddListener(Kick);
        if (kickNoButton != null) kickNoButton.onClick.AddListener(CancelKick);
        if (kickConfirmPanel != null) kickConfirmPanel.SetActive(false);
        if (nameCounterText != null)
        {
            counterColour = nameCounterText.color;
            nameCounterText.gameObject.SetActive(false);
        }
    }

    Color counterColour = Color.white;

    void OnEnable()
    {
        PlayerProfileSync.ProfilesChanged += Refresh;
        PlayerProfileSync.PingChanged += RefreshPing;
        PlayerName.Changed += Refresh;
        Refresh();
    }

    void OnDisable()
    {
        PlayerProfileSync.ProfilesChanged -= Refresh;
        PlayerProfileSync.PingChanged -= RefreshPing;
        PlayerName.Changed -= Refresh;
        if (kickConfirmPanel != null) kickConfirmPanel.SetActive(false);
    }

    // ---------- SHOWING ----------

    void Refresh()
    {
        if (this == null) return;

        PlayerProfileSync partner = PlayerProfileSync.Partner;
        string name = isPartner ? (partner != null ? partner.Profile.Name : "") : PlayerName.Local;
        bool host = isPartner ? partner != null && partner.Profile.IsHost : IsHost;
        string role = !InRoom ? soloRole : host ? hostRole : guestRole;

        // "Bob (Host)": the role sits right after the name, in the same text.
        if (nameInput != null && !editing)
        {
            nameInput.SetTextWithoutNotify(string.IsNullOrEmpty(role) ? name : $"{name} {role}");
            nameInput.interactable = false;
        }

        // The X: only on the partner's slot, only for the host.
        if (kickButton != null)
            kickButton.gameObject.SetActive(isPartner && IsHost && partner != null);

        RefreshPing();
    }

    void RefreshPing()
    {
        if (this == null || pingText == null) return;

        bool show = InRoom && SomeoneElseConnected();
        pingText.gameObject.SetActive(show);
        if (!show) return;

        // Each player's own measured ping (shared through PlayerProfileSync). If that isn't
        // there yet, measure this connection directly so a number always shows.
        PlayerProfileSync who = isPartner ? PlayerProfileSync.Partner : PlayerProfileSync.Local;
        int ms = who != null && who.PingMs > 0 ? who.PingMs : MeasureHere();
        pingText.text = ms <= 0 ? "<1 ms" : $"{ms} ms";   // on the same Wi-Fi it can be under 1 ms
    }

    static bool SomeoneElseConnected()
    {
        if (Network.IsServer) return Network.ConnectedClientsIds.Count > 1;
        return Network.IsConnectedClient;
    }

    static int MeasureHere()
    {
        ulong other = NetworkManager.ServerClientId;
        if (Network.IsServer)
        {
            foreach (ulong id in Network.ConnectedClientsIds)
                if (id != Network.LocalClientId) { other = id; break; }
        }
        return (int)Network.NetworkConfig.NetworkTransport.GetCurrentRtt(other);
    }

    float nextPingCheck;
    bool warnedNoSync;

    // Also checks once a second, so the ping shows even if no change event arrives.
    void Update()
    {
        if (Time.unscaledTime < nextPingCheck) return;
        nextPingCheck = Time.unscaledTime + 1f;
        RefreshPing();

        if (!warnedNoSync && InRoom && SomeoneElseConnected() && PlayerProfileSync.Local == null)
        {
            warnedNoSync = true;
            Debug.LogWarning("[Lobby] PlayerProfileSync is not on the networked Player prefab, so names, " +
                             "loadouts and cosmetics can't be shared. Add it to the prefab.", this);
        }
    }

    // ---------- EDITING THE NAME (Player 1) ----------

    // Like the room name: no box, taps do nothing, only the pencil unlocks it.
    void MakeNameLookLikeText()
    {
        nameInput.transition = Selectable.Transition.None;
        nameInput.onDeselect.AddListener(_ => Lock());

        Image box = nameInput.GetComponent<Image>();
        if (box != null) box.enabled = false;
        foreach (Graphic graphic in nameInput.GetComponentsInChildren<Graphic>(true))
            graphic.raycastTarget = false;
        if (nameInput.placeholder != null)
            nameInput.placeholder.gameObject.SetActive(false);
        nameInput.interactable = false;
    }

    // Pencil button.
    public void EditName()
    {
        if (isPartner || nameInput == null)
            return;

        editing = true;
        nameInput.SetTextWithoutNotify(PlayerName.Local);   // just the name while typing
        ShowCounter(PlayerName.Local.Length);
        nameInput.interactable = true;
        nameInput.Select();
        nameInput.ActivateInputField();
        AudioManager.Instance?.PlayButtonClick();
    }

    // While typing: update the counter, and stop at the limit with an error sound and a log line.
    void OnNameTyping(string typed)
    {
        if (!editing)
            return;

        if (typed.Length > PlayerName.MaxLength)
        {
            typed = typed.Substring(0, PlayerName.MaxLength);
            nameInput.SetTextWithoutNotify(typed);
            nameInput.caretPosition = nameInput.stringPosition = typed.Length;

            if (Time.unscaledTime >= nextLimitWarning)   // not on every extra key press
            {
                nextLimitWarning = Time.unscaledTime + 1.5f;
                GameServerLogs.AddError($"Names can be up to {PlayerName.MaxLength} letters");   // also plays the error sound
            }
        }
        ShowCounter(typed.Length);
    }

    float nextLimitWarning;

    void ShowCounter(int length)
    {
        if (nameCounterText == null) return;
        nameCounterText.gameObject.SetActive(editing);
        nameCounterText.text = $"{length}/{PlayerName.MaxLength}";
        nameCounterText.color = length >= PlayerName.MaxLength ? new Color(0.85f, 0.2f, 0.2f) : counterColour;   // red at the limit
    }

    void OnNameEdited(string typed)
    {
        if (isPartner || !editing)
            return;

        PlayerName.Local = typed;   // saved, and sent to the partner
        Lock();
    }

    void Lock()
    {
        if (!editing) return;
        editing = false;
        StartCoroutine(LockNextFrame());   // locking while Unity is still deselecting causes an error
    }

    IEnumerator LockNextFrame()
    {
        yield return null;
        if (editing) yield break;
        if (nameCounterText != null) nameCounterText.gameObject.SetActive(false);
        Refresh();   // puts the role back after the name
    }

    // ---------- REMOVING THE PARTNER (host) ----------

    void AskKick()
    {
        PlayerProfileSync partner = PlayerProfileSync.Partner;
        if (!IsHost || partner == null)
            return;

        if (kickConfirmPanel == null)
        {
            Kick();
            return;
        }

        if (kickConfirmText != null)
            kickConfirmText.text = $"Remove {partner.Profile.Name} from the room?";
        PanelFade.Show(kickConfirmPanel);
        AudioManager.Instance?.PlayButtonClick();
    }

    void CancelKick()
    {
        PanelFade.Hide(kickConfirmPanel);
        AudioManager.Instance?.PlayButtonClick();
    }

    void Kick()
    {
        if (kickConfirmPanel != null) kickConfirmPanel.SetActive(false);

        PlayerProfileSync partner = PlayerProfileSync.Partner;
        if (!IsHost || partner == null)
            return;

        KickedJustNow = true;
        GameServerLogs.Add($"You removed {partner.Profile.Name} from the room");
        Network.DisconnectClient(partner.OwnerClientId, KickReason);
        AudioManager.Instance?.PlayButtonClick();
    }
}