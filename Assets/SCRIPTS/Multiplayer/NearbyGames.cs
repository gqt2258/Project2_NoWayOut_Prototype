using System;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Text;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

// Finds co-op hosts on the same local network. Internet rooms can be added later.
public sealed class NearbyGames : MonoBehaviour
{
    private const int DiscoveryPort = 7778;
    private const string SearchMessage = "NOWAYOUT_SEARCH_1";
    private const string HostMessage = "NOWAYOUT_HOST_1";

    [SerializeField] private Button refreshButton;
    [SerializeField] private Button[] roomButtons;

    private readonly List<string> addresses = new List<string>();
    private readonly HashSet<string> roomIds = new HashSet<string>();
    private UdpClient socket;
    private bool hosting;
    private string roomId;
    private SceneLoader sceneLoader;

    private void Awake()
    {
        sceneLoader = GetComponent<SceneLoader>();
        refreshButton.onClick.AddListener(Refresh);

        for (int i = 0; i < roomButtons.Length; i++)
        {
            int slot = i;
            roomButtons[i].onClick.AddListener(() => JoinRoom(slot));
        }

        ShowRooms();
    }

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

    public void Refresh()
    {
        if (hosting)
            return;

        CloseSocket();
        addresses.Clear();
        roomIds.Clear();
        ShowRooms();

        try
        {
            socket = new UdpClient(0);
            socket.EnableBroadcast = true;
            socket.Client.Blocking = false;
            byte[] search = Encoding.UTF8.GetBytes(SearchMessage);
            socket.Send(search, search.Length, new IPEndPoint(IPAddress.Broadcast, DiscoveryPort));
            socket.Send(search, search.Length, new IPEndPoint(IPAddress.Loopback, DiscoveryPort));
        }
        catch (SocketException error)
        {
            Debug.LogWarning($"Nearby Games search failed: {error.Message}", this);
            CloseSocket();
        }
    }

    private void Update()
    {
        if (socket == null)
            return;

        try
        {
            while (socket.Available > 0)
            {
                IPEndPoint sender = new IPEndPoint(IPAddress.Any, 0);
                string message = Encoding.UTF8.GetString(socket.Receive(ref sender));

                if (hosting && message == SearchMessage)
                {
                    byte[] reply = Encoding.UTF8.GetBytes(HostMessage + "|" + roomId);
                    socket.Send(reply, reply.Length, sender);
                }
                else if (!hosting && message.StartsWith(HostMessage + "|", StringComparison.Ordinal))
                {
                    string id = message.Substring(HostMessage.Length + 1);
                    if (id.Length > 0 && addresses.Count < roomButtons.Length && roomIds.Add(id))
                    {
                        addresses.Add(sender.Address.ToString());
                        ShowRooms();
                    }
                }
            }
        }
        catch (SocketException error)
        {
            Debug.LogWarning($"Nearby Games stopped: {error.Message}", this);
            CloseSocket();
        }
    }

    private void ShowRooms()
    {
        for (int i = 0; i < roomButtons.Length; i++)
        {
            Button button = roomButtons[i];
            button.interactable = i < addresses.Count;
            TMP_Text label = button.GetComponentInChildren<TMP_Text>();
            if (label != null)
                label.text = i < addresses.Count ? $"Join {addresses[i]}" : "No nearby game";
        }
    }

    private void JoinRoom(int slot)
    {
        if (slot >= addresses.Count)
            return;

        string address = addresses[slot];
        CloseSocket();
        sceneLoader.JoinCoop(address);
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
