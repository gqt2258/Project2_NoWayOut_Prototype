using System;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

// Goes on each player's Loadout panel. Updates each time the panel opens and whenever
// the wallet changes. Shows the equipment taken into the next job: 6 to 8 boxes
// (the Inventory upgrade adds boxes). Upgrades are seen in the Upgrades shop, not here.
// Click an equipment box once to see its sell price, and click it again to sell it.
// Player 2's panel (Is Local Player off) shows the co-op partner's loadout, live, read only.
//
// Cancelling a sell: tap an empty box or the panel's background
// (the panel needs an Image with Raycast Target on for the background).
public class LoadoutUI : MonoBehaviour, IPointerClickHandler
{
    [SerializeField] ShopData database;
    [Tooltip("The equipment box. Give it an Image for the icon and drag that into the box's Icon slot.")]
    [SerializeField] ShopItemSlot slotPrefab;
    [SerializeField] Transform equipmentContainer;

    [Tooltip("Tick for this player's own panel. Untick for Player 2 (the co-op partner).")]
    [SerializeField] bool isLocalPlayer = true;
    [Tooltip("Optional. Shows e.g. \"Player 1: Bob (Host)\".")]
    [SerializeField] TMP_Text titleText;

    readonly List<ShopItemSlot> equipmentBoxes = new List<ShopItemSlot>();
    int sellIndex = -1;   // box waiting for the second click
    bool warnedNoSellPanel;

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
        SetBoxCount(equipmentBoxes, equipmentContainer, slotCount, OnEquipmentClicked, slotPrefab);

        for (int i = 0; i < slotCount; i++)
        {
            ShopItem item = GetEquipment(shown, i);
            bool selling = item != null && i == sellIndex;
            ShopItemSlot box = equipmentBoxes[i];

            if (box.HasSellPanel)
            {
                // The question goes on the panel over the box.
                box.ShowLoadout(item, "", isLocalPlayer);
                box.ShowSellPanel(selling ? $"Sell for {PlayerWallet.Instance.SellPrice(item)} coins?" : null);
            }
            else
            {
                if (selling && !warnedNoSellPanel)
                {
                    warnedNoSellPanel = true;
                    Debug.LogWarning("Loadout: the box has no Sell Panel, so the sell price shows in Price Text instead. " +
                                     "Open the Loadout Slot prefab and drag the panel into ShopItemSlot > Sell Panel.", box);
                }
                box.ShowLoadout(item, selling ? $"Sell +{PlayerWallet.Instance.SellPrice(item)}?" : "", isLocalPlayer);
            }
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
        if (item == null)
        {
            CancelSell();   // tapped an empty box
            return;
        }

        if (sellIndex == index)
        {
            sellIndex = -1;
            PlayerWallet.Instance.SellEquipment(item);   // fires Changed, which refreshes the boxes
            return;
        }

        sellIndex = index;
        AudioManager.Instance?.PlayButtonClick();   // first tap: "Sell for … coins?"
        Refresh();
    }

    // A tap on an empty box or the background.
    void CancelSell()
    {
        if (sellIndex < 0) return;   // nothing waiting to be sold
        sellIndex = -1;
        AudioManager.Instance?.PlayButtonClick();
        Refresh();
    }

    // A tap on the panel's background (not on a box).
    public void OnPointerClick(PointerEventData eventData)
    {
        CancelSell();
    }

    // Creates boxes the first time, then hides any extras.
    void SetBoxCount(List<ShopItemSlot> boxes, Transform container, int count, Action<int> onClick, ShopItemSlot prefab)
    {
        while (boxes.Count < count)
        {
            int index = boxes.Count;
            ShopItemSlot box = Instantiate(prefab, container);
            if (onClick != null)
            {
                box.OnBoxClicked += () => onClick(index);   // every tap, empty boxes too (tap again = sell)
            }


            boxes.Add(box);
        }

        for (int i = count; i < boxes.Count; i++)
            boxes[i].Hide();
    }
}