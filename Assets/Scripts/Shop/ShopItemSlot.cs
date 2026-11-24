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
    [Tooltip("Shown when an item has no icon yet, so the layout keeps its shape. " +
             "Empty = a plain grey square.")]
    [SerializeField] private Sprite missingIcon;
    [SerializeField] private Color missingIconColour = new Color(0.5f, 0.5f, 0.5f, 0.6f);
    [SerializeField] private TMP_Text nameText;
    [SerializeField] private TMP_Text priceText;

    [Header("Loadout: sell panel (optional)")]
    [Tooltip("A panel covering this box, shown when the player taps to sell. Tap it again to sell. " +
             "Turned off at the start.")]
    [SerializeField] private GameObject sellPanel;
    [Tooltip("Text on the sell panel, e.g. \"Sell for 29 coins?\". Empty = the first text inside the panel.")]
    [SerializeField] private TMP_Text sellPanelText;
    [Tooltip("The hint under the price.")]
    [SerializeField] private string sellHint = "Tap again to sell";
    [Tooltip("Optional. A separate text for the hint. Empty = it goes under the price, a bit smaller.")]
    [SerializeField] private TMP_Text sellHintText;

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

    public bool HasSellPanel => sellPanel != null;

    // Any tap on this box, even an empty one (the Loadout uses it to cancel a sell).
    public event Action OnBoxClicked;

    void Awake()
    {
        if (sellPanel != null)
        {
            if (sellPanelText == null) sellPanelText = sellPanel.GetComponentInChildren<TMP_Text>(true);
            sellPanel.SetActive(false);
        }

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
        OnBoxClicked?.Invoke();

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

        SetIcon(iconSprite, iconSprite != null || !string.IsNullOrEmpty(label));
    }

    // The icon is optional on a slot. An item with no picture yet shows the Missing Icon
    // (or a grey square), so the layout looks the same. No item at all = no icon.
    void SetIcon(Sprite sprite, bool hasItem = true)
    {
        if (icon == null) return;
        if (iconColour == null) iconColour = icon.color;

        if (sprite != null)
        {
            icon.sprite = sprite;
            icon.color = iconColour.Value;
            icon.enabled = true;
        }
        else if (hasItem)
        {
            icon.sprite = missingIcon;
            icon.color = missingIcon != null ? iconColour.Value : missingIconColour;
            icon.enabled = true;
        }
        else
        {
            icon.enabled = false;
        }
    }

    Color? iconColour;   // the Icon's own colour, from the prefab

    public void Show(ShopItem newItem, bool owned)
    {
        item = newItem;
        gameObject.SetActive(true);

        nameText.text = item.displayName;
        bool worn = owned && PlayerWallet.Instance != null && PlayerWallet.Instance.IsWearing(item);
        priceText.text = worn ? "Equipped" : owned ? "Owned" : $"{item.price} Coins";

        SetIcon(item.ShopIcon);
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
        SetIcon(shown.ShopIcon);

        if (next == null)
        {
            levelText.text = $"Level {currentLevel} (Max)";
            effectText.text = current.description;
            priceText.text = "Max Level";
            upgradeButton.interactable = false;
            DisabledButtonFeedback.SetMessage(upgradeButton, "Already at max level");
            return;
        }

        string currentEffect = current != null ? current.description : "No bonus";

        levelText.text = $"Level {currentLevel} -> Level {next.level}";
        effectText.text = $"{currentEffect} -> {next.description}";
        priceText.text = canAfford ? $"Upgrade : {next.price} Coins" : "Not enough coins";
        upgradeButton.interactable = canAfford;
        DisabledButtonFeedback.SetMessage(upgradeButton, "Not enough coins");
    }

    // Used by LoadoutUI. Pass null for an empty box.
    // clickable boxes send OnItemClicked when pressed.
    // The loadout's sell question, on the sell panel. null hides it.
    public void ShowSellPanel(string question)
    {
        if (sellPanel == null) return;
        bool show = !string.IsNullOrEmpty(question);
        if (!show)
        {
            sellPanel.SetActive(false);
            return;
        }

        sellPanel.transform.SetAsLastSibling();   // on top of the icon and texts
        sellPanel.SetActive(true);
        bool separateHint = sellHintText != null && sellHintText != sellPanelText;
        if (separateHint)
        {
            sellHintText.gameObject.SetActive(!string.IsNullOrEmpty(sellHint));
            sellHintText.text = sellHint;
        }

        if (sellPanelText != null)
        {
            sellPanelText.gameObject.SetActive(true);
            sellPanelText.text = separateHint || string.IsNullOrEmpty(sellHint)
                ? question
                : $"{question}\n<size=70%>{sellHint}</size>";
        }
        else
        {
            Debug.LogWarning("Loadout: the Sell Panel has no TextMeshPro text inside it, so the price can't show.", sellPanel);
        }
    }

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

        SetIcon(shown != null ? shown.ShopIcon : null, shown != null);   // an empty box has no icon
    }

    public void Hide()
    {
        item = null;
        slotClickable = false;
        gameObject.SetActive(false);
    }
}