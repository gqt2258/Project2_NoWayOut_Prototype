using UnityEngine;

public enum ShopType { Equipment, Upgrade, Cosmetics }

[CreateAssetMenu(menuName = "Shop/Shop Item")]
public class ShopItem : ScriptableObject
{
    public string itemId;           // unique, e.g. "upg_flashlight_1". Used for saving, don't change later.
    public string displayName;
    public ShopType shop;
    public string category;         // filter tab, e.g. "Hunter Tools"
    public string upgradeLine;      // upgrades only, groups levels together
    public int level;               // upgrades only, 0 otherwise
    [TextArea] public string description;
    public int price;
    [Tooltip("Tick to keep this item out of the shop for now (e.g. no art yet). Players who already own it keep it.")]
    public bool hideInShop;

    [Header("Visuals")]
    [Tooltip("The shop picture. Empty on a cosmetic = its Look's first front frame is used.")]
    public Sprite icon;

    [Header("Cosmetics")]
    [Tooltip("Hats, shirts and flashlights: the frames drawn on the character (Create > Cosmetics > Cosmetic Look).")]
    public CosmeticLook look;
    [Tooltip("Flashlight skins only: the colour of the light. Alpha = how strong (0 = plain light).")]
    public Color lightColour = new Color(1f, 1f, 1f, 0f);

    // The picture shown in the shop: Icon, or for a cosmetic with no Icon, its first idle-front frame.
    public Sprite ShopIcon => icon != null ? icon : look != null ? look.Frame(CharacterPose.IdleFront, 0) : null;

    // Which slot a cosmetic goes in, from its category ("Player Hats", "Player Shirts", "Flashlight Skins").
    public CosmeticSlot Slot
    {
        get
        {
            if (shop != ShopType.Cosmetics || string.IsNullOrEmpty(category)) return CosmeticSlot.None;
            string c = category.ToLowerInvariant();
            if (c.Contains("hat")) return CosmeticSlot.Hat;
            if (c.Contains("shirt")) return CosmeticSlot.Shirt;
            if (c.Contains("flashlight")) return CosmeticSlot.FlashlightSkin;
            return CosmeticSlot.None;
        }
    }
}