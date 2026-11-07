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

    [Header("Visuals")]
    public Sprite icon;
    public GameObject prefab;       // hat / shirt model, optional
    public Material material;       // flashlight skin, optional
}
