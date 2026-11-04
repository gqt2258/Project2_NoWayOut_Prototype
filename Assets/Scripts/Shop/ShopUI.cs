using System;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

// Goes on each shop's root object. Reusable for all three shops
// by changing Shop Type, the slots and the filter list.
// For the Upgrades shop, assign 2 slots and leave Filters and Selected item empty.
public class ShopUI : MonoBehaviour
{
    [Serializable]
    public class FilterEntry
    {
        public Button button;
        public string category;   // must match the item category exactly. Leave empty for "All".
    }

    [Header("Data")]
    [SerializeField] ShopData database;
    [SerializeField] ShopType shopType = ShopType.Cosmetics;

    [Header("Item grid (6 panels, or 2 for Upgrades)")]
    [SerializeField] ShopItemSlot[] slots;
    [SerializeField] Button prevButton;
    [SerializeField] Button nextButton;
    [SerializeField] TMP_Text pageText;

    [Header("Filters")]
    [SerializeField] FilterEntry[] filters;

    [Header("Selected item")]
    [SerializeField] Image selectedIcon;
    [SerializeField] TMP_Text selectedName;
    [SerializeField] TMP_Text selecteddescription;
    [SerializeField] Button buyButton;
    [SerializeField] TMP_Text buyLabel;

    [Header("Coins")]
    [SerializeField] TMP_Text coinText;

    List<ShopItem> filtered = new List<ShopItem>();
    List<List<ShopItem>> upgradeLines = new List<List<ShopItem>>();   // each list is one upgrade, sorted by level
    string currentCategory = "";
    int page;
    ShopItem selected;

    bool IsUpgradeShop => shopType == ShopType.Upgrade;

    void Awake()
    {
        foreach (var slot in slots)
        {
            slot.OnItemClicked += OnItemClicked;
            slot.OnUpgradeClicked += OnUpgradeClicked;
        }

        foreach (var f in filters)
        {
            string cat = f.category;
            f.button.onClick.AddListener(() => SetFilter(cat));
        }

        prevButton.onClick.AddListener(() => ChangePage(-1));
        nextButton.onClick.AddListener(() => ChangePage(1));

        if (buyButton != null)
            buyButton.onClick.AddListener(OnBuyClicked);
    }

    void OnItemClicked(ShopItem item)
    {
        Select(item);
    }

    void OnUpgradeClicked(ShopItem item)
    {
        if (PlayerWallet.Instance == null) return;
        PlayerWallet.Instance.TryPurchase(item);   // fires Changed, which refreshes the UI
    }

    // Runs every time UIManager shows this panel.
    void OnEnable()
    {
        if (PlayerWallet.Instance != null) PlayerWallet.Instance.Changed += OnWalletChanged;
        SetFilter("");
        RefreshCoins();
    }

    void OnDisable()
    {
        if (PlayerWallet.Instance != null) PlayerWallet.Instance.Changed -= OnWalletChanged;
    }

    void OnWalletChanged()
    {
        RefreshCoins();
        RefreshPage();
        RefreshBuyButton();
    }

    void SetFilter(string category)
    {
        currentCategory = category;
        page = 0;
        filtered = database.GetFiltered(shopType, category).ToList();

        if (IsUpgradeShop)
        {
            upgradeLines = filtered
                .GroupBy(item => item.upgradeLine)
                .Select(line => line.OrderBy(item => item.level).ToList())
                .ToList();
        }
        else
        {
            Select(filtered.FirstOrDefault());
        }

        RefreshPage();
    }

    void ChangePage(int direction)
    {
        page += direction;
        RefreshPage();
    }

    void RefreshPage()
    {
        int perPage = slots.Length;
        int total = IsUpgradeShop ? upgradeLines.Count : filtered.Count;
        int pageCount = Mathf.Max(1, Mathf.CeilToInt(total / (float)perPage));
        page = Mathf.Clamp(page, 0, pageCount - 1);

        for (int i = 0; i < perPage; i++)
        {
            int index = page * perPage + i;
            if (index >= total)
                slots[i].Hide();
            else if (IsUpgradeShop)
                ShowUpgradeLine(slots[i], upgradeLines[index]);
            else
                slots[i].Show(filtered[index], IsOwned(filtered[index]));
        }

        pageText.text = $"{page + 1} / {pageCount}";
        prevButton.interactable = page > 0;
        nextButton.interactable = page < pageCount - 1;
    }

    void ShowUpgradeLine(ShopItemSlot slot, List<ShopItem> line)
    {
        ShopItem current = line.LastOrDefault(IsOwned);
        ShopItem next = line.FirstOrDefault(item => !IsOwned(item));
        slot.ShowUpgrade(current, next, next != null && CanAfford(next));
    }

    void Select(ShopItem item)
    {
        if (IsUpgradeShop) return;   // the Upgrades layout has no selected item panel

        selected = item;
        selectedName.text = item != null ? item.displayName : "";
        selecteddescription.text = item != null ? item.description : "";
        selectedIcon.sprite = item != null ? item.icon : null;
        selectedIcon.enabled = item != null && item.icon != null;
        RefreshBuyButton();
    }

    void RefreshBuyButton()
    {
        if (IsUpgradeShop) return;   // each upgrade panel handles its own button

        if (selected == null)
        {
            buyButton.interactable = false;
            buyLabel.text = "";
            return;
        }

        if (IsOwned(selected))
        {
            buyButton.interactable = false;
            buyLabel.text = "Owned";
        }
        else if (!CanAfford(selected))
        {
            buyButton.interactable = false;
            buyLabel.text = "Not enough coins";
        }
        else
        {
            buyButton.interactable = true;
            buyLabel.text = $"Buy : {selected.price} Coins";
        }
    }

    void RefreshCoins()
    {
        if (PlayerWallet.Instance != null && coinText != null)
            coinText.text = PlayerWallet.Instance.Coins.ToString();
    }

    void OnBuyClicked()
    {
        if (selected == null || PlayerWallet.Instance == null) return;
        PlayerWallet.Instance.TryPurchase(selected);   // fires Changed, which refreshes the UI
    }

    bool IsOwned(ShopItem item) => PlayerWallet.Instance != null && PlayerWallet.Instance.Owns(item);
    bool CanAfford(ShopItem item) => PlayerWallet.Instance != null && PlayerWallet.Instance.CanAfford(item);
}