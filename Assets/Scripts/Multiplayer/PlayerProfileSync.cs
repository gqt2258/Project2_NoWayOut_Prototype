using System;
using System.Collections.Generic;
using System.Linq;
using Unity.Collections;
using Unity.Netcode;
using UnityEngine;

// Shares each player's lobby info with the other player in co-op: name, equipment, upgrades
// and worn cosmetics. Each player sends their own whenever their wallet changes, so the lobby,
// the Loadout screen and the character previews show the partner live.
//
// Put it on the networked Player prefab (the one with NetworkObject and NetworkJobSync).
public sealed class PlayerProfileSync : NetworkBehaviour
{
    // Fires when either player's info changes, or a player joins or leaves.
    public static event Action ProfilesChanged;

    static readonly List<PlayerProfileSync> all = new List<PlayerProfileSync>();

    // The other player in the room, or null.
    public static PlayerProfileSync Partner => all.FirstOrDefault(p => p != null && p.IsSpawned && !p.IsOwner);
    public static bool HasPartner => Partner != null;

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
    static void ResetStatics()
    {
        all.Clear();
        ProfilesChanged = null;
        PingChanged = null;
    }

    readonly NetworkVariable<FixedString4096Bytes> data = new NetworkVariable<FixedString4096Bytes>(
        default, NetworkVariableReadPermission.Everyone, NetworkVariableWritePermission.Owner);

    // Each player measures their own connection and shares it, so both see each other's ping.
    readonly NetworkVariable<ushort> ping = new NetworkVariable<ushort>(
        0, NetworkVariableReadPermission.Everyone, NetworkVariableWritePermission.Owner);
    float nextPing;

    public int PingMs => ping.Value;

    // This device's own entry, or null.
    public static PlayerProfileSync Local => all.FirstOrDefault(p => p != null && p.IsSpawned && p.IsOwner);

    PlayerProfile cached;
    string cachedFrom;

    // What this player has, as last sent.
    public PlayerProfile Profile
    {
        get
        {
            string raw = data.Value.ToString();
            if (cached == null || raw != cachedFrom)
            {
                cached = PlayerProfile.Parse(raw);
                cached.IsHost = OwnerClientId == NetworkManager.ServerClientId;
                cachedFrom = raw;
            }
            return cached;
        }
    }

    public override void OnNetworkSpawn()
    {
        all.Add(this);
        data.OnValueChanged += OnDataChanged;
        ping.OnValueChanged += OnPingChanged;
        if (IsOwner)
        {
            if (PlayerWallet.Instance != null) PlayerWallet.Instance.Changed += Send;
            PlayerName.Changed += Send;
            Send();
        }
        ProfilesChanged?.Invoke();
    }

    public override void OnNetworkDespawn()
    {
        all.Remove(this);
        data.OnValueChanged -= OnDataChanged;
        ping.OnValueChanged -= OnPingChanged;
        if (PlayerWallet.Instance != null) PlayerWallet.Instance.Changed -= Send;
        PlayerName.Changed -= Send;
        ProfilesChanged?.Invoke();
    }

    public override void OnDestroy()
    {
        all.Remove(this);
        if (PlayerWallet.Instance != null) PlayerWallet.Instance.Changed -= Send;
        PlayerName.Changed -= Send;
        base.OnDestroy();
    }

    void OnDataChanged(FixedString4096Bytes before, FixedString4096Bytes after)
    {
        ProfilesChanged?.Invoke();
    }

    void OnPingChanged(ushort before, ushort after)
    {
        PingChanged?.Invoke();
    }

    // Fires when either player's ping changes (about once a second).
    public static event Action PingChanged;

    // Owner: measure this device's round trip to the other phone once a second.
    void Update()
    {
        if (!IsSpawned || !IsOwner || Time.unscaledTime < nextPing)
            return;
        nextPing = Time.unscaledTime + 1f;

        NetworkManager network = NetworkManager;
        ulong other;
        if (network.IsServer)
        {
            PlayerProfileSync partner = Partner;
            if (partner == null) { ping.Value = 0; return; }
            other = partner.OwnerClientId;
        }
        else
        {
            other = NetworkManager.ServerClientId;
        }
        ulong rtt = network.NetworkConfig.NetworkTransport.GetCurrentRtt(other);
        ping.Value = (ushort)Mathf.Min(rtt, 9999);
    }

    // Owner only: sends this device's name, equipment, upgrades and worn cosmetics.
    void Send()
    {
        if (!IsSpawned || !IsOwner || PlayerWallet.Instance == null)
            return;

        string text = PlayerProfile.FromLocalWallet().ToText();
        if (text.Length > 4000) text = text.Substring(0, 4000);   // never happens with normal saves
        data.Value = new FixedString4096Bytes(text);
    }
}

// One player's lobby info. Also used for this device (PlayerProfile.FromLocalWallet).
public sealed class PlayerProfile
{
    public string Name = "Player";
    public bool IsHost;
    public bool HasData;   // false until the first info arrives from the other device
    public List<string> Equipment = new List<string>();
    public HashSet<string> Owned = new HashSet<string>();   // upgrades and cosmetics
    public Dictionary<CosmeticSlot, string> Worn = new Dictionary<CosmeticSlot, string>();

    public int EquipmentSlots =>
        Owned.Contains("upg_inventory_2") ? PlayerWallet.BaseEquipmentSlots + 2 :
        Owned.Contains("upg_inventory_1") ? PlayerWallet.BaseEquipmentSlots + 1 :
        PlayerWallet.BaseEquipmentSlots;

    public string WornCosmetic(CosmeticSlot slot) => Worn.TryGetValue(slot, out string id) ? id : null;

    public static PlayerProfile FromLocalWallet()
    {
        var profile = new PlayerProfile { Name = PlayerName.Local, HasData = true };
        PlayerWallet wallet = PlayerWallet.Instance;
        if (wallet == null)
            return profile;

        profile.Equipment.AddRange(wallet.Equipment);
        foreach (string id in wallet.OwnedItems) profile.Owned.Add(id);
        foreach (CosmeticSlot slot in Enum.GetValues(typeof(CosmeticSlot)))
        {
            string worn = wallet.WornCosmetic(slot);
            if (worn != null) profile.Worn[slot] = worn;
        }
        return profile;
    }

    // name|equipment,equipment|owned,owned|Hat=id,Shirt=id
    public string ToText()
    {
        return string.Join("|",
            Name.Replace("|", " "),
            string.Join(",", Equipment),
            string.Join(",", Owned),
            string.Join(",", Worn.Select(pair => $"{pair.Key}={pair.Value}")));
    }

    public static PlayerProfile Parse(string text)
    {
        var profile = new PlayerProfile();
        if (string.IsNullOrEmpty(text))
            return profile;
        profile.HasData = true;

        string[] parts = text.Split('|');
        if (parts.Length > 0 && parts[0].Length > 0) profile.Name = parts[0];
        if (parts.Length > 1) profile.Equipment.AddRange(Split(parts[1]));
        if (parts.Length > 2) foreach (string id in Split(parts[2])) profile.Owned.Add(id);
        if (parts.Length > 3)
        {
            foreach (string pair in Split(parts[3]))
            {
                string[] kv = pair.Split('=');
                if (kv.Length == 2 && Enum.TryParse(kv[0], out CosmeticSlot slot))
                    profile.Worn[slot] = kv[1];
            }
        }
        return profile;
    }

    static string[] Split(string list) => list.Split(new[] { ',' }, StringSplitOptions.RemoveEmptyEntries);
}

// This device's player name. Starts as the phone's name, and the player can change it in the
// lobby (the pencil above their character). Saved on the phone.
public static class PlayerName
{
    public const int MaxLength = 10;
    const string SaveKey = "PlayerName";

    // Fires when this device's name is changed (the lobby sends it to the partner).
    public static event Action Changed;

    public static string Local
    {
        get
        {
            string saved = PlayerPrefs.GetString(SaveKey, "");
            return saved.Length > 0 ? Clean(saved) : DeviceName();   // Clean: a name saved before the limit changed is shortened
        }
        set
        {
            string clean = Clean(value);
            if (clean == Local) return;
            PlayerPrefs.SetString(SaveKey, clean);
            PlayerPrefs.Save();
            Changed?.Invoke();
        }
    }

    public static string Clean(string name)
    {
        string clean = (name ?? "").Replace("|", " ").Trim();
        if (clean.Length > MaxLength) clean = clean.Substring(0, MaxLength).Trim();
        return clean.Length > 0 ? clean : DeviceName();
    }

    static string DeviceName()
    {
        string device = SystemInfo.deviceName;
        if (string.IsNullOrEmpty(device) || device == SystemInfo.unsupportedIdentifier || device == "<unknown>")
            device = SystemInfo.deviceModel;
        device = (device ?? "").Replace("|", " ").Trim();
        if (device.Length == 0) device = "Player";
        return device.Length > MaxLength ? device.Substring(0, MaxLength).Trim() : device;
    }

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
    static void ResetStatics()
    {
        Changed = null;
    }
}