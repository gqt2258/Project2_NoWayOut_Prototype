using System;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Text;
using TMPro;
using Unity.Netcode;
using UnityEngine;
using UnityEngine.UI;

// Finds co-op hosts on the same local network (Wi-Fi) for the Host / Join screen.
//
// - Rooms are only searched for when Refresh is pressed.
// - Room buttons are hidden until a room is found. Up to 3 show at once (no scrolling).
// - Each room shows its name, status and players, e.g. "Bob's Room    In lobby 1/2".
//   A full room (2/2) is greyed out and can't be joined.
// - The search bar filters the found rooms by name as you type.
// - The room name is set by the host in the lobby (SceneLoader). Every new room starts with
//   the default name ("<phone name>'s Room"); it is not saved between rooms.
public sealed class NearbyGames : MonoBehaviour
{
    private const int DiscoveryPort = 7778;
    private const string SearchMessage = "NOWAYOUT_SEARCH_1";
    private const string HostMessage = "NOWAYOUT_HOST_1";
    public const int MaxPlayers = 2;
    public const int MaxRoomNameLength = 20;

    private sealed class Room
    {
        public string id;
        public string name;
        public string address;
        public int players;
    }

    [SerializeField] private Button refreshButton;
    [Tooltip("The room buttons, top to bottom. Hidden until a room is found (max 3, no scrolling).")]
    [SerializeField] private Button[] roomButtons;

    [Header("Optional")]
    [Tooltip("The search bar. Filters the found rooms by name as you type.")]
    [SerializeField] private TMP_InputField searchInput;
    [Tooltip("Shown when no rooms are listed, e.g. a text \"No nearby games\".")]
    [SerializeField] private GameObject emptyMessage;
    [Tooltip("The text inside Empty Message. Changes to \"No rooms match\" while searching.")]
    [SerializeField] private TMP_Text emptyMessageText;

    private readonly List<Room> rooms = new List<Room>();
    private readonly List<Room> shown = new List<Room>();
    private UdpClient socket;
    private bool hosting;
    private bool searchedOnce;
    private string roomId;
    private SceneLoader sceneLoader;

    // ---------- ROOM NAME ----------

    private static string roomName;

    // This device's room name for the current room, used when hosting.
    public static string RoomName
    {
        get => string.IsNullOrEmpty(roomName) ? DefaultRoomName() : roomName;
        set => roomName = CleanRoomName(value);
    }

    // A new room: back to the default name.
    public static void ResetRoomName()
    {
        roomName = null;
    }

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
    private static void ResetStatics()
    {
        roomName = null;
    }

    public static string CleanRoomName(string name)
    {
        string clean = (name ?? "").Replace("|", " ").Trim();
        if (clean.Length > MaxRoomNameLength)
            clean = clean.Substring(0, MaxRoomNameLength).Trim();
        return clean.Length > 0 ? clean : DefaultRoomName();
    }

    private static string DefaultRoomName()
    {
        string device = SystemInfo.deviceName;
        if (string.IsNullOrEmpty(device) || device == SystemInfo.unsupportedIdentifier || device == "<unknown>")
            device = SystemInfo.deviceModel;
        device = (device ?? "").Replace("|", " ").Trim();
        if (device.Length == 0)
            return "My Room";

        string name = device + "'s Room";
        return name.Length > MaxRoomNameLength ? name.Substring(0, MaxRoomNameLength).Trim() : name;
    }

    // ---------- SETUP ----------

    private void Awake()
    {
        sceneLoader = GetComponent<SceneLoader>();
        if (refreshButton != null)
            refreshButton.onClick.AddListener(Refresh);

        for (int i = 0; i < roomButtons.Length; i++)
        {
            int slot = i;
            roomButtons[i].onClick.AddListener(() => JoinRoom(slot));
        }

        if (searchInput != null)
            searchInput.onValueChanged.AddListener(_ => ShowRooms());

        ShowRooms();
    }

    // ---------- HOSTING ----------

    public void StartHosting()
    {
        CloseSocket();
        try
        {
            socket = new UdpClient(DiscoveryPort);
            socket.Client.Blocking = false;
            roomId = Guid.NewGuid().ToString("N");
            hosting = true;
        }
        catch (SocketException error)
        {
            Debug.LogWarning($"Nearby Games could not advertise this room: {error.Message}", this);
        }
    }

    public void StopDiscovery()
    {
        CloseSocket();
    }

    // ---------- SEARCHING (Refresh button only) ----------

    // Refresh button: clears the list and asks for rooms again.
    public void Refresh()
    {
        if (hosting)
            return;

        searchedOnce = true;
        rooms.Clear();
        ShowRooms();

        if (socket == null && !OpenSearchSocket())
            return;

        try
        {
            byte[] search = Encoding.UTF8.GetBytes(SearchMessage);
            socket.Send(search, search.Length, new IPEndPoint(IPAddress.Broadcast, DiscoveryPort));
            socket.Send(search, search.Length, new IPEndPoint(IPAddress.Loopback, DiscoveryPort));   // same device (testing)
        }
        catch (SocketException error)
        {
            Debug.LogWarning($"Nearby Games search failed: {error.Message}", this);
        }
    }

    // When the Host / Join screen opens: an empty list until Refresh is pressed.
    public void ClearRooms()
    {
        if (hosting)
            return;

        CloseSocket();
        searchedOnce = false;
        rooms.Clear();
        if (searchInput != null)
            searchInput.SetTextWithoutNotify("");
        ShowRooms();
    }

    private bool OpenSearchSocket()
    {
        try
        {
            socket = new UdpClient(0);
            socket.EnableBroadcast = true;
            socket.Client.Blocking = false;
            return true;
        }
        catch (SocketException error)
        {
            Debug.LogWarning($"Nearby Games search failed: {error.Message}", this);
            CloseSocket();
            return false;
        }
    }

    private void Update()
    {
        if (socket == null)
            return;

        try
        {
            while (socket != null && socket.Available > 0)
            {
                IPEndPoint sender = new IPEndPoint(IPAddress.Any, 0);
                string message = Encoding.UTF8.GetString(socket.Receive(ref sender));

                if (hosting && message == SearchMessage)
                {
                    // Reply: HOST|roomId|room name|players
                    byte[] reply = Encoding.UTF8.GetBytes(
                        $"{HostMessage}|{roomId}|{RoomName}|{PlayersInRoom()}");
                    socket.Send(reply, reply.Length, sender);
                }
                else if (!hosting && message.StartsWith(HostMessage + "|", StringComparison.Ordinal))
                {
                    RoomAnswered(message.Substring(HostMessage.Length + 1), sender.Address.ToString());
                }
            }
        }
        catch (SocketException error)
        {
            Debug.LogWarning($"Nearby Games stopped: {error.Message}", this);
            CloseSocket();
        }
    }

    private static int PlayersInRoom()
    {
        NetworkManager network = NetworkManager.Singleton;
        return network != null && network.IsServer ? Mathf.Max(1, network.ConnectedClientsIds.Count) : 1;
    }

    private void RoomAnswered(string data, string address)
    {
        string[] parts = data.Split('|');
        if (parts[0].Length == 0 || rooms.Exists(r => r.id == parts[0]))
            return;

        int players = 1;
        if (parts.Length > 2)
            int.TryParse(parts[2], out players);

        rooms.Add(new Room
        {
            id = parts[0],
            name = parts.Length > 1 && parts[1].Length > 0 ? parts[1] : "Room",
            address = address,
            players = Mathf.Clamp(players, 1, MaxPlayers),
        });
        ShowRooms();
    }

    // ---------- SHOWING ----------

    private void ShowRooms()
    {
        string filter = searchInput != null ? searchInput.text.Trim().ToLowerInvariant() : "";

        shown.Clear();
        foreach (Room room in rooms)
            if (filter.Length == 0 || room.name.ToLowerInvariant().Contains(filter))
                shown.Add(room);
        shown.Sort((a, b) => string.Compare(a.name, b.name, StringComparison.OrdinalIgnoreCase));

        for (int i = 0; i < roomButtons.Length; i++)
        {
            bool used = i < shown.Count;
            roomButtons[i].gameObject.SetActive(used);   // no room = no panel
            if (!used)
                continue;

            Room room = shown[i];
            bool full = room.players >= MaxPlayers;
            string status = $"In lobby {room.players}/{MaxPlayers}";

            // A child text named "Status" gets the status. Otherwise it goes on the right of the name.
            TMP_Text statusText = FindText(roomButtons[i].transform, "Status");
            TMP_Text nameText = FindNameText(roomButtons[i].transform, statusText);
            if (statusText != null)
            {
                statusText.text = status;
                if (nameText != null) nameText.text = room.name;
            }
            else if (nameText != null)
            {
                nameText.text = $"{room.name}<pos=62%>{status}";
            }

            roomButtons[i].interactable = !full;
            DisabledButtonFeedback.SetMessage(roomButtons[i], "");   // full room: error sound only
        }

        bool none = shown.Count == 0;
        if (emptyMessage != null)
            emptyMessage.SetActive(none && searchedOnce);
        if (emptyMessageText != null)
            emptyMessageText.text = rooms.Count > 0 && filter.Length > 0 ? "No rooms match" : "No nearby games";
    }

    private static TMP_Text FindText(Transform root, string childName)
    {
        foreach (TMP_Text text in root.GetComponentsInChildren<TMP_Text>(true))
            if (text.name == childName)
                return text;
        return null;
    }

    private static TMP_Text FindNameText(Transform root, TMP_Text skip)
    {
        foreach (TMP_Text text in root.GetComponentsInChildren<TMP_Text>(true))
            if (text != skip)
                return text;
        return null;
    }

    private void JoinRoom(int slot)
    {
        if (slot >= shown.Count || shown[slot].players >= MaxPlayers)
            return;

        Room room = shown[slot];
        CoopSession.HostRoomName = room.name;   // shown in the lobby until the host sends updates
        CloseSocket();
        sceneLoader.JoinCoop(room.address);
    }

    private void CloseSocket()
    {
        socket?.Close();
        socket = null;
        hosting = false;
    }

    private void OnDestroy()
    {
        CloseSocket();
    }
}