using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text.RegularExpressions;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

// Goes on the Player in the Gameplay scene. The player's inventory for the match:
// - at the start it takes the equipment out of the loadout (anything not used is lost when the match ends)
// - tools and picked-up job items share the same slots, so a full inventory blocks pickups
// - tapping a slot selects it and shows its name and description; the USE button uses a selected tool
// - applies the owned upgrades to movement, stamina and the flashlight
// Upgrade amounts come from the number before % in each upgrade's description,
// such as "+20% light radius".
public class PlayerLoadout : MonoBehaviour
{
    // What one inventory slot holds: a tool, a job item, or nothing.
    class SlotContent
    {
        public ShopItem tool;
        public string jobItemId;
        public string jobItemName;
        public Sprite jobItemIcon;
    }

    [Header("Data")]
    [SerializeField] ShopData database;

    [Header("Hotbar")]
    [Tooltip("A slot prefab with ShopItemSlot. Only Icon needs assigning.")]
    [SerializeField] ShopItemSlot slotPrefab;
    [Tooltip("The object the slots are created under, such as a panel with a Horizontal Layout Group.")]
    [SerializeField] Transform hotbarContainer;
    [Tooltip("Tint for the selected slot's background.")]
    [SerializeField] Color selectedColor = new Color(1f, 0.85f, 0.4f);
    [Tooltip("Shows the selected item's name and short description, such as just above the hotbar.")]
    [SerializeField] TMP_Text selectedItemText;
    [Tooltip("Optional. A panel behind the text, shown and hidden with it. Left empty, only the text is shown and hidden.")]
    [SerializeField] GameObject selectedItemPopup;
    [Tooltip("Shown under a selected job item's name.")]
    [SerializeField] string jobItemDescription = "Bring this to the Deposit.";

    [Header("Upgrades")]
    [SerializeField] PlayerMovement playerMovement;
    [Tooltip("The darkness overlay with the torch hole. The flashlight upgrade scales it up, widening the light.")]
    [SerializeField] RectTransform torchlightLayer;
    [Tooltip("These must match the Upgrade Line on the upgrade items.")]
    [SerializeField] string flashlightLine = "Flashlight Range";
    [SerializeField] string walkSpeedLine = "Player Walkspeed";
    [SerializeField] string staminaLine = "Player Run Stamina";

    readonly List<SlotContent> contents = new List<SlotContent>();   // null = empty slot
    readonly List<ShopItemSlot> slots = new List<ShopItemSlot>();
    readonly List<Color> slotColors = new List<Color>();
    int selectedIndex = -1;

    // Fires when the player uses a tool. Hook tool effects in here later.
    public event Action<ShopItem> ItemUsed;

    // Fires when the selection changes, so the USE button can update.
    public event Action SelectionChanged;

    // The selected tool, or null when nothing or a job item is selected.
    public ShopItem SelectedItem => selectedIndex >= 0 && contents[selectedIndex] != null ? contents[selectedIndex].tool : null;

    public bool HasFreeSlot => contents.IndexOf(null) >= 0;

    void Start()
    {
        PlayerWallet wallet = PlayerWallet.Instance;
        if (wallet == null || database == null)
        {
            Debug.LogError("PlayerLoadout needs the Shop Database assigned.", this);
            return;
        }

        ApplyUpgrades();

        int slotCount = wallet.EquipmentSlots;
        foreach (string itemId in wallet.TakeEquipmentForMatch())
        {
            ShopItem tool = database.items.FirstOrDefault(entry => entry != null && entry.itemId == itemId);
            if (tool != null && contents.Count < slotCount)
                contents.Add(new SlotContent { tool = tool });
        }

        while (contents.Count < slotCount)
            contents.Add(null);

        BuildHotbar();
        RefreshSelectedText();
    }

    // Puts a picked-up tool into the first empty slot. False when the inventory is full.
    public bool TryAddItem(ShopItem tool)
    {
        return tool != null && TryAdd(new SlotContent { tool = tool });
    }

    // Puts a picked-up job item into the first empty slot. False when the inventory is full.
    public bool TryAddJobItem(string itemId, string itemName, Sprite icon)
    {
        return !string.IsNullOrEmpty(itemId) &&
               TryAdd(new SlotContent { jobItemId = itemId, jobItemName = itemName, jobItemIcon = icon });
    }

    // Frees the slots used by job items, such as after depositing them.
    public void RemoveJobItems()
    {
        for (int i = 0; i < contents.Count; i++)
        {
            if (contents[i] != null && contents[i].jobItemId != null)
                ClearSlot(i);
        }

        AfterSelectionChange();
    }

    // Empties the inventory, for dropping everything on the floor. Returns only the tools,
    // because PlayerJobScript keeps track of the job items being dropped.
    public List<ShopItem> DropAllItems()
    {
        var droppedTools = contents.Where(content => content != null && content.tool != null)
                                   .Select(content => content.tool).ToList();
        for (int i = 0; i < contents.Count; i++)
            ClearSlot(i);

        AfterSelectionChange();
        return droppedTools;
    }

    // Tapping a slot selects it. Tapping it again clears the selection.
    public void SelectSlot(int slotIndex)
    {
        if (slotIndex < 0 || slotIndex >= contents.Count || contents[slotIndex] == null)
            return;

        int previous = selectedIndex;
        selectedIndex = selectedIndex == slotIndex ? -1 : slotIndex;

        RefreshSlot(previous);
        RefreshSlot(selectedIndex);
        AfterSelectionChange();
    }

    // Called by the USE button. Only tools can be used.
    public void UseSelectedItem()
    {
        UseItem(selectedIndex);
    }

    // Slots are counted from 0.
    public void UseItem(int slotIndex)
    {
        if (slotIndex < 0 || slotIndex >= contents.Count || contents[slotIndex] == null ||
            contents[slotIndex].tool == null)
            return;

        ShopItem tool = contents[slotIndex].tool;
        ClearSlot(slotIndex);
        AfterSelectionChange();

        Debug.Log($"Used {tool.displayName}.", this);
        ItemUsed?.Invoke(tool);
    }

    bool TryAdd(SlotContent content)
    {
        int slotIndex = contents.IndexOf(null);
        if (slotIndex < 0)
            return false;

        contents[slotIndex] = content;
        RefreshSlot(slotIndex);
        return true;
    }

    void ClearSlot(int slotIndex)
    {
        contents[slotIndex] = null;
        if (selectedIndex == slotIndex)
            selectedIndex = -1;

        RefreshSlot(slotIndex);
    }

    void AfterSelectionChange()
    {
        RefreshSelectedText();
        SelectionChanged?.Invoke();
    }

    void BuildHotbar()
    {
        if (slotPrefab == null || hotbarContainer == null)
        {
            Debug.LogWarning("PlayerLoadout: assign Slot Prefab and Hotbar Container to show the hotbar.", this);
            return;
        }

        for (int i = 0; i < contents.Count; i++)
        {
            int index = i;
            ShopItemSlot slot = Instantiate(slotPrefab, hotbarContainer);
            slot.OnSlotClicked += () => SelectSlot(index);
            slots.Add(slot);

            var background = slot.GetComponent<Image>();
            slotColors.Add(background != null ? background.color : Color.white);
            RefreshSlot(i);
        }
    }

    void RefreshSlot(int index)
    {
        if (index < 0 || index >= slots.Count)
            return;

        SlotContent content = contents[index];
        if (content == null)
            slots[index].ShowIcon(null, "", clickable: false);
        else if (content.tool != null)
            slots[index].ShowIcon(content.tool.icon, content.tool.displayName, clickable: true);
        else
            slots[index].ShowIcon(content.jobItemIcon, content.jobItemName, clickable: true);

        var background = slots[index].GetComponent<Image>();
        if (background != null)
            background.color = index == selectedIndex ? selectedColor : slotColors[index];
    }

    void RefreshSelectedText()
    {
        if (selectedItemText == null)
            return;

        SlotContent content = selectedIndex >= 0 ? contents[selectedIndex] : null;
        if (content == null)
            selectedItemText.text = "";
        else if (content.tool != null)
            selectedItemText.text = $"<b>{content.tool.displayName}</b>\n{content.tool.description}";
        else
            selectedItemText.text = $"<b>{content.jobItemName}</b>\n{jobItemDescription}";

        // Pops up only while something is selected.
        GameObject popup = selectedItemPopup != null ? selectedItemPopup : selectedItemText.gameObject;
        popup.SetActive(content != null);
    }

    void ApplyUpgrades()
    {
        float flashlight = GetUpgradeBonus(flashlightLine);
        float speed = GetUpgradeBonus(walkSpeedLine);
        float stamina = GetUpgradeBonus(staminaLine);

        if (playerMovement == null)
            playerMovement = GetComponent<PlayerMovement>();
        if (playerMovement != null)
            playerMovement.ApplyUpgrades(speed, stamina);

        if (torchlightLayer != null)
            torchlightLayer.localScale *= 1f + flashlight;

        Debug.Log($"Upgrades applied: flashlight +{flashlight:P0}, speed +{speed:P0}, stamina +{stamina:P0}.", this);
    }

    // The highest owned level of an upgrade, as a fraction: "+20% light radius" gives 0.2.
    float GetUpgradeBonus(string upgradeLine)
    {
        ShopItem best = database.items
            .Where(item => item != null && item.shop == ShopType.Upgrade && item.upgradeLine == upgradeLine
                           && PlayerWallet.Instance.Owns(item))
            .OrderByDescending(item => item.level)
            .FirstOrDefault();

        if (best == null)
            return 0f;

        Match match = Regex.Match(best.description ?? "", @"([0-9]+(?:\.[0-9]+)?)\s*%");
        if (!match.Success)
        {
            Debug.LogWarning($"No % found in the description of {best.displayName}, so it gives no bonus.", best);
            return 0f;
        }

        return float.Parse(match.Groups[1].Value, CultureInfo.InvariantCulture) / 100f;
    }
}