using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

// Goes on each player's Loadout panel. Updates each time the panel opens and whenever
// the wallet changes. Equipment shows 6 to 8 boxes. Upgrades shows one box per upgrade.
// Click an equipment box once to see its sell price, and click it again to sell it.
public class LoadoutUI : MonoBehaviour
{
    [SerializeField] ShopData database;
    [SerializeField] ShopItemSlot slotPrefab;
    [SerializeField] Transform equipmentContainer;
    [SerializeField] Transform upgradeContainer;

    [Tooltip("Tick for this player's own panel. Untick for Player 2 until co-op data is connected.")]
    [SerializeField] bool isLocalPlayer = true;

    readonly List<ShopItemSlot> equipmentBoxes = new List<ShopItemSlot>();
    readonly List<ShopItemSlot> upgradeBoxes = new List<ShopItemSlot>();
    int sellIndex = -1;   // box waiting for the second click

    void OnEnable()
    {
        sellIndex = -1;
        if (PlayerWallet.Instance == null) return;

        PlayerWallet.Instance.Changed += Refresh;
        Refresh();
    }

    void OnDisable()
    {
        if (PlayerWallet.Instance != null)
            PlayerWallet.Instance.Changed -= Refresh;
    }

    void Refresh()
    {
        RefreshEquipment();
        RefreshUpgrades();
    }

    void RefreshEquipment()
    {
        int slotCount = isLocalPlayer ? PlayerWallet.Instance.EquipmentSlots : PlayerWallet.BaseEquipmentSlots;
        SetBoxCount(equipmentBoxes, equipmentContainer, slotCount, OnEquipmentClicked);

        for (int i = 0; i < slotCount; i++)
        {
            ShopItem item = GetEquipment(i);
            string detail = item != null && i == sellIndex
                ? $"Sell +{PlayerWallet.Instance.SellPrice(item)}?"
                : "";

            equipmentBoxes[i].ShowLoadout(item, detail, isLocalPlayer);
        }
    }

    void RefreshUpgrades()
    {
        var upgrades = database.GetFiltered(ShopType.Upgrade, "")
            .GroupBy(item => item.upgradeLine)
            .Select(line => line.OrderBy(item => item.level).ToList())
            .ToList();

        SetBoxCount(upgradeBoxes, upgradeContainer, upgrades.Count, null);

        for (int i = 0; i < upgrades.Count; i++)
        {
            ShopItem current = isLocalPlayer
                ? upgrades[i].LastOrDefault(item => PlayerWallet.Instance.Owns(item))
                : null;

            if (current != null)
                upgradeBoxes[i].ShowLoadout(current, $"Level {current.level}: {current.description}");
            else
                upgradeBoxes[i].ShowLoadout(upgrades[i][0], "Not upgraded");
        }
    }

    ShopItem GetEquipment(int index)
    {
        if (!isLocalPlayer || index >= PlayerWallet.Instance.Equipment.Count)
            return null;

        string itemId = PlayerWallet.Instance.Equipment[index];
        return database.items.FirstOrDefault(entry => entry.itemId == itemId);
    }

    void OnEquipmentClicked(int index)
    {
        ShopItem item = GetEquipment(index);
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