using System;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;

// Goes on each player's Loadout panel. Updates each time the panel opens and whenever
// the wallet changes. Equipment shows 6 to 8 boxes. Upgrades shows one box per upgrade.
// Click an equipment box once to see its sell price, and click it again to sell it.
// Player 2's panel (Is Local Player off) shows the co-op partner's loadout, live, read only.
public class LoadoutUI : MonoBehaviour
{
    [SerializeField] ShopData database;
    [SerializeField] ShopItemSlot slotPrefab;
    [SerializeField] Transform equipmentContainer;
    [SerializeField] Transform upgradeContainer;

    [Tooltip("Tick for this player's own panel. Untick for Player 2 (the co-op partner).")]
    [SerializeField] bool isLocalPlayer = true;
    [Tooltip("Optional. Shows e.g. \"Player 1: Bob (Host)\".")]
    [SerializeField] TMP_Text titleText;

    readonly List<ShopItemSlot> equipmentBoxes = new List<ShopItemSlot>();
    readonly List<ShopItemSlot> upgradeBoxes = new List<ShopItemSlot>();
    int sellIndex = -1;   // box waiting for the second click

    void OnEnable()
    {
        sellIndex = -1;
        if (PlayerWallet.Instance == null) return;

        PlayerWallet.Instance.Changed += Refresh;
        PlayerProfileSync.ProfilesChanged += Refresh;
        Refresh();
    }

    void OnDisable()
    {
        if (PlayerWallet.Instance != null)
            PlayerWallet.Instance.Changed -= Refresh;
        PlayerProfileSync.ProfilesChanged -= Refresh;
    }

    // This panel's player: this device, or the co-op partner.
    PlayerProfile Shown => isLocalPlayer ? PlayerProfile.FromLocalWallet()
                         : PlayerProfileSync.Partner != null ? PlayerProfileSync.Partner.Profile : new PlayerProfile();

    void Refresh()
    {
        if (this == null) return;
        PlayerProfile shown = Shown;
        RefreshTitle(shown);
        RefreshEquipment(shown);
        RefreshUpgrades(shown);
    }

    void RefreshTitle(PlayerProfile shown)
    {
        if (titleText == null) return;
        bool coop = JobSession.IsCoop && Unity.Netcode.NetworkManager.Singleton != null &&
                    Unity.Netcode.NetworkManager.Singleton.IsListening;
        bool host = isLocalPlayer ? coop && Unity.Netcode.NetworkManager.Singleton.IsServer : shown.IsHost;
        string role = coop ? (host ? " (Host)" : " (Guest)") : "";
        titleText.text = $"Player {(isLocalPlayer ? 1 : 2)}: {shown.Name}{role}";
    }

    void RefreshEquipment(PlayerProfile shown)
    {
        int slotCount = shown.EquipmentSlots;
        SetBoxCount(equipmentBoxes, equipmentContainer, slotCount, OnEquipmentClicked);

        for (int i = 0; i < slotCount; i++)
        {
            ShopItem item = GetEquipment(shown, i);
            string detail = item != null && i == sellIndex
                ? $"Sell +{PlayerWallet.Instance.SellPrice(item)}?"
                : "";

            equipmentBoxes[i].ShowLoadout(item, detail, isLocalPlayer);
        }
    }

    void RefreshUpgrades(PlayerProfile shown)
    {
        var upgrades = database.GetFiltered(ShopType.Upgrade, "")
            .GroupBy(item => item.upgradeLine)
            .Select(line => line.OrderBy(item => item.level).ToList())
            .ToList();

        SetBoxCount(upgradeBoxes, upgradeContainer, upgrades.Count, null);

        for (int i = 0; i < upgrades.Count; i++)
        {
            ShopItem current = upgrades[i].LastOrDefault(item => shown.Owned.Contains(item.itemId));

            if (current != null)
                upgradeBoxes[i].ShowLoadout(current, $"Level {current.level}: \n {current.description}");
            else
                upgradeBoxes[i].ShowLoadout(upgrades[i][0], "Level 0 : \n No upgrades");
        }
    }

    ShopItem GetEquipment(PlayerProfile shown, int index)
    {
        if (index >= shown.Equipment.Count)
            return null;

        string itemId = shown.Equipment[index];
        return database.items.FirstOrDefault(entry => entry != null && entry.itemId == itemId);
    }

    void OnEquipmentClicked(int index)
    {
        if (!isLocalPlayer) return;   // the partner's loadout can't be sold from here
        ShopItem item = GetEquipment(Shown, index);
        if (item == null) return;

        if (sellIndex == index)
        {
            sellIndex = -1;
            PlayerWallet.Instance.SellEquipment(item);   // fires Changed, which refreshes the boxes
            return;
        }

        sellIndex = index;
        Refresh();
    }

    // Creates boxes the first time, then hides any extras.
    void SetBoxCount(List<ShopItemSlot> boxes, Transform container, int count, Action<int> onClick)
    {
        while (boxes.Count < count)
        {
            int index = boxes.Count;
            ShopItemSlot box = Instantiate(slotPrefab, container);
            if (onClick != null)
                box.OnItemClicked += _ => onClick(index);

            boxes.Add(box);
        }

        for (int i = count; i < boxes.Count; i++)
            boxes[i].Hide();
    }
}