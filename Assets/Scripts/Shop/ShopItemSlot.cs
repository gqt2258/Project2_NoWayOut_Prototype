using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using TMPro;
using System;

// Used by both layouts.
// Equipment/Cosmetics: assign Icon, Name Text and Price Text.
// Upgrades: also assign Level Text, Effect Text and Upgrade Button.
// For Upgrades, Price Text is the label on the Upgrade button.
public class ShopItemSlot : MonoBehaviour, IPointerClickHandler
{
    [SerializeField] private Image icon;
    [SerializeField] private TMP_Text nameText;
    [SerializeField] private TMP_Text priceText;

    [Header("Upgrades only")]
    [SerializeField] private TMP_Text levelText;
    [SerializeField] private TMP_Text effectText;
    [SerializeField] private Button upgradeButton;

    ShopItem item;
    bool slotClickable;   // used by ShowIcon, for the gameplay hotbar

    // Fires when a hotbar slot shown with ShowIcon is pressed.
    public event Action OnSlotClicked;

    // Event to notify ShopUI when this panel is clicked
    public event Action<ShopItem> OnItemClicked;

    // Event to notify ShopUI when this panel's Upgrade button is clicked
    public event Action<ShopItem> OnUpgradeClicked;

    void Awake()
    {
        if (upgradeButton != null)
        {
            upgradeButton.onClick.AddListener(() =>
            {
                if (item != null)
                    OnUpgradeClicked?.Invoke(item);
            });
        }
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        Debug.Log("Panel clicked!");

        if (item != null)
        {
            OnItemClicked?.Invoke(item);
        }

        if (slotClickable)
            OnSlotClicked?.Invoke();
    }

    // Used by the gameplay hotbar: just an icon, for a tool or a job item.
    public void ShowIcon(Sprite iconSprite, string label, bool clickable)
    {
        item = null;
        slotClickable = clickable;
        gameObject.SetActive(true);

        if (nameText != null)
            nameText.text = label;

        if (priceText != null)
        {
            priceText.text = "";
            priceText.gameObject.SetActive(false);
        }

        icon.sprite = iconSprite;
        icon.enabled = iconSprite != null;
    }

    public void Show(ShopItem newItem, bool owned)
    {
        item = newItem;
        gameObject.SetActive(true);

        nameText.text = item.displayName;
        priceText.text = owned ? "Owned" : $"{item.price} Coins";

        icon.sprite = item.icon;
        icon.enabled = item.icon != null;
    }

    // current = highest level owned (null if none owned)
    // next = next level to buy (null if the upgrade is maxed)
    public void ShowUpgrade(ShopItem current, ShopItem next, bool canAfford)
    {
        item = next;
        gameObject.SetActive(true);

        ShopItem shown = next != null ? next : current;
        int currentLevel = current != null ? current.level : 0;

        nameText.text = shown.displayName;
        icon.sprite = shown.icon;
        icon.enabled = shown.icon != null;

        if (next == null)
        {
            levelText.text = $"Level {currentLevel} (Max)";
            effectText.text = current.description;
            priceText.text = "Max Level";
            upgradeButton.interactable = false;
            return;
        }

        string currentEffect = current != null ? current.description : "No bonus";

        levelText.text = $"Level {currentLevel} -> Level {next.level}";
        effectText.text = $"{currentEffect} -> {next.description}";
        priceText.text = canAfford ? $"Upgrade : {next.price} Coins" : "Not enough coins";
        upgradeButton.interactable = canAfford;
    }

    // Used by LoadoutUI. Pass null for an empty box.
    // clickable boxes send OnItemClicked when pressed.
    public void ShowLoadout(ShopItem shown, string detail, bool clickable = false)
    {
        item = clickable ? shown : null;
        gameObject.SetActive(true);

        // Name Text and Price Text are optional here, so a slot can be icon only.
        if (nameText != null)
            nameText.text = shown != null ? shown.displayName : "Empty";

        if (priceText != null)
        {
            priceText.text = detail;
            priceText.gameObject.SetActive(!string.IsNullOrEmpty(detail));   // equipment has no detail
        }

        icon.sprite = shown != null ? shown.icon : null;
        icon.enabled = shown != null && shown.icon != null;
    }

    public void Hide()
    {
        item = null;
        slotClickable = false;
        gameObject.SetActive(false);
    }
}