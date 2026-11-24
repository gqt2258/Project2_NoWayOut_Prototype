using NoWayOut.Maze;
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

    [Header("Drop")]
    [Tooltip("The Drop button. Only shown while an item is selected. Leave its On Click empty.")]
    [SerializeField] Button dropButton;
    [Tooltip("How far in front of the player the item lands. 0 = at their feet (never inside a wall).")]
    [SerializeField, Min(0f)] float dropDistance = 0f;

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

    // The selected job item's ID, or null when nothing or a tool is selected.
    public string SelectedJobItemId => selectedIndex >= 0 && contents[selectedIndex] != null ? contents[selectedIndex].jobItemId : null;

    // Takes the selected job item out of its slot. If a new item is given, it goes into the
    // same slot (used for swapping with the Deposit). Returns false if no job item is selected.
    public bool SwapSelectedJobItem(string newId, string newName, Sprite newIcon,
                                    out string oldId, out string oldName, out Sprite oldIcon)
    {
        oldId = null; oldName = null; oldIcon = null;
        if (SelectedJobItemId == null)
            return false;

        SlotContent old = contents[selectedIndex];
        oldId = old.jobItemId;
        oldName = old.jobItemName;
        oldIcon = old.jobItemIcon;

        if (string.IsNullOrEmpty(newId))
        {
            ClearSlot(selectedIndex);
        }
        else
        {
            contents[selectedIndex] = new SlotContent { jobItemId = newId, jobItemName = newName, jobItemIcon = newIcon };
            RefreshSlot(selectedIndex);
        }

        AfterSelectionChange();
        return true;
    }

    void Awake()
    {
        if (GetComponent<RadarController>() == null)
            gameObject.AddComponent<RadarController>();

        if (dropButton != null)
        {
            if (dropButton.onClick.GetPersistentEventCount() == 0)
                dropButton.onClick.AddListener(DropSelected);
            dropButton.gameObject.SetActive(false);   // nothing selected yet
        }
    }

    // Drop button: puts the selected tool or job item on the floor in front of the player.
    // It can be picked up again (in co-op, by either player).
    public void DropSelected()
    {
        if (selectedIndex < 0 || selectedIndex >= contents.Count || contents[selectedIndex] == null)
            return;

        MazeGenerator maze = FindAnyObjectByType<MazeGenerator>();
        if (maze == null)
        {
            Debug.LogWarning("No MazeGenerator in the scene, so the item can't be dropped.", this);
            return;
        }

        PlayerMovement movement = playerMovement != null ? playerMovement : GetComponent<PlayerMovement>();
        Vector2 facing = movement != null ? movement.Facing : Vector2.down;
        Vector3 spot = transform.position + (Vector3)(facing.normalized * dropDistance);

        SlotContent content = contents[selectedIndex];
        if (content.tool != null)
        {
            maze.DropTool(content.tool, spot);
            Debug.Log($"Dropped {content.tool.displayName}.", this);
        }
        else if (content.jobItemId != null)
        {
            GetComponent<PlayerJobScript>()?.DropCarriedItem(content.jobItemId);
            maze.DropJobItem(content.jobItemId, spot);
            Debug.Log($"Dropped {content.jobItemName}.", this);
        }

        int dropped = selectedIndex;
        ClearSlot(dropped);
        selectedIndex = -1;
        RefreshSlot(dropped);
        AfterSelectionChange();

        if (AudioManager.Instance != null)
            AudioManager.Instance.PlaySFX(AudioManager.Instance.Player.Drop);
        NetworkJobSync.ShareSound(PlayerSound.Drop);
    }

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
        int paid = 0;
        foreach (string itemId in wallet.TakeEquipmentForMatch())
        {
            ShopItem tool = database.items.FirstOrDefault(entry => entry != null && entry.itemId == itemId);
            if (tool != null)
                paid += tool.price;   // refunded in coins if the match ends by a disconnect
            if (tool != null && contents.Count < slotCount)
                contents.Add(new SlotContent { tool = tool });
        }
        wallet.SetMatchEquipmentValue(paid);

        while (contents.Count < slotCount)
            contents.Add(null);

        var brought = contents.Where(content => content != null).Select(content => content.tool.displayName).ToList();
        Debug.Log(brought.Count > 0
            ? $"Brought into the match ({brought.Count}/{slotCount} slots): {string.Join(", ", brought)}"
            : $"No equipment brought into the match ({slotCount} slots). The loadout was empty.", this);

        BuildHotbar();
        RefreshSelectedText();
    }

    // Puts a picked-up tool into the first empty slot. False when the inventory is full.
    public bool TryAddItem(ShopItem tool)
    {
        return tool != null && TryAdd(new SlotContent { tool = tool });
    }

    public ShopItem FindTool(string id)
    {
        return database != null ? database.items.Find(item => item != null && item.itemId == id) : null;
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
        bool hadItems = contents.Any(content => content != null);
        for (int i = 0; i < contents.Count; i++)
            ClearSlot(i);

        AfterSelectionChange();
        if (hadItems && AudioManager.Instance != null)
            AudioManager.Instance.PlaySFX(AudioManager.Instance.Player.Drop);
        if (hadItems) NetworkJobSync.ShareSound(PlayerSound.Drop);
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

        if (AudioManager.Instance != null)
            AudioManager.Instance.PlayButtonClick();
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
        PlayerMovement movement = playerMovement != null ? playerMovement : GetComponent<PlayerMovement>();
        Vector2 facing = movement != null ? movement.Facing : Vector2.down;

        // e.g. the Earth Wand with no shifting wall in front: keep the tool, error sound.
        if (!ToolEffects.Get().CanUse(tool, transform.position, facing))
        {
            Debug.Log($"{tool.displayName} can't be used here.", this);
            if (AudioManager.Instance != null)
                AudioManager.Instance.PlaySFX(AudioManager.Instance.UI.ErrorClick);
            return;
        }

        ClearSlot(slotIndex);
        AfterSelectionChange();

        Debug.Log($"Used {tool.displayName}.", this);
        if (AudioManager.Instance != null)
            AudioManager.Instance.PlayToolUse(tool.displayName, transform.position);
        GetComponent<RadarController>()?.RevealTool(tool);
        ToolEffects.Get().Use(tool, transform.position, facing);
        ItemUsed?.Invoke(tool);
    }

    bool TryAdd(SlotContent content)
    {
        int slotIndex = contents.IndexOf(null);
        if (slotIndex < 0)
            return false;

        contents[slotIndex] = content;
        RefreshSlot(slotIndex);

        // TryAdd is only used for picking things up in the maze.
        if (AudioManager.Instance != null)
            AudioManager.Instance.PlaySFX(AudioManager.Instance.Player.Grab);
        NetworkJobSync.ShareSound(PlayerSound.Grab);
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
        if (dropButton != null)
            dropButton.gameObject.SetActive(selectedIndex >= 0 && selectedIndex < contents.Count && contents[selectedIndex] != null);
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
            AddTapArea(slot);
            RefreshSlot(i);
        }
    }

    // An invisible box over the whole slot that always catches taps, whatever the prefab's
    // images are set to (Raycast Target off, or an image the slot hides when it's empty).
    static void AddTapArea(ShopItemSlot slot)
    {
        var area = new GameObject("Tap Area", typeof(RectTransform), typeof(CanvasRenderer), typeof(Image));
        area.transform.SetParent(slot.transform, false);
        area.transform.SetAsLastSibling();   // on top of the icon and text

        RectTransform rect = (RectTransform)area.transform;
        rect.anchorMin = Vector2.zero;
        rect.anchorMax = Vector2.one;
        rect.offsetMin = rect.offsetMax = Vector2.zero;

        var layout = area.AddComponent<LayoutElement>();
        layout.ignoreLayout = true;   // don't push the slot's own layout around

        Image image = area.GetComponent<Image>();
        image.color = new Color(1f, 1f, 1f, 0f);   // invisible
        image.raycastTarget = true;
    }

    void RefreshSlot(int index)
    {
        if (index < 0 || index >= slots.Count)
            return;

        SlotContent content = contents[index];
        if (content == null)
            slots[index].ShowIcon(null, "", clickable: false);
        else if (content.tool != null)
            slots[index].ShowIcon(content.tool.ShopIcon, content.tool.displayName, clickable: true);
        else
            slots[index].ShowIcon(content.jobItemIcon, content.jobItemName, clickable: true);

        var background = slots[index].GetComponent<Image>();
        if (background != null)
            background.color = index == selectedIndex ? selectedColor : slotColors[index];
    }

    bool warnedNoSelectedText;

    void RefreshSelectedText()
    {
        if (selectedItemText == null)
        {
            if (!warnedNoSelectedText && selectedIndex >= 0)
            {
                warnedNoSelectedText = true;
                Debug.LogWarning("PlayerLoadout: Selected Item Text is empty, so the selected item's name can't show. " +
                                 "Drag a TMP text (e.g. above the hotbar) into PlayerLoadout > Selected Item Text.", this);
            }
            return;
        }

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
        if (content != null)
        {
            selectedItemText.gameObject.SetActive(true);   // in case the text itself was left turned off
            popup.transform.SetAsLastSibling();            // drawn above the hotbar and other HUD
        }
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
        else if (speed > 0f || stamina > 0f)
            Debug.LogWarning("Upgrades: Player Movement is empty on PlayerLoadout, so walk speed and " +
                             "run stamina upgrades do nothing. Drag the Player in.", this);

        FlashlightCone cone = torchlightLayer != null ? torchlightLayer.GetComponent<FlashlightCone>() : null;
        if (cone != null)
            cone.SetUpgradeBonus(flashlight);          // the cone gets wider
        else if (torchlightLayer != null)
            torchlightLayer.localScale *= 1f + flashlight;   // old round light: it gets bigger
        else if (flashlight > 0f)
            Debug.LogWarning("Upgrades: Torchlight Layer is empty on PlayerLoadout, so the flashlight " +
                             "range upgrade does nothing. Drag the Torchlight Layer in.", this);

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