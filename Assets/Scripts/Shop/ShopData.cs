using System.Collections.Generic;
using System.Linq;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif

[CreateAssetMenu(menuName = "Shop/Shop Database")]
public class ShopData : ScriptableObject
{
    public List<ShopItem> items = new List<ShopItem>();

    [Header("Starter look (worn when nothing is equipped in that slot)")]
    [Tooltip("The starter shirt, e.g. the vest. Worn when no shirt is equipped.")]
    public CosmeticLook starterShirt;
    [Tooltip("The starter flashlight. Held when no flashlight skin is equipped.")]
    public CosmeticLook starterFlashlight;
    // No starter hat: with no hat equipped, the head is bare.

    public CosmeticLook StarterLook(CosmeticSlot slot) =>
        slot == CosmeticSlot.Shirt ? starterShirt :
        slot == CosmeticSlot.FlashlightSkin ? starterFlashlight : null;

    [Tooltip("Hats, shirts and flashlight skins with no Look yet stay out of the shop until they have art.")]
    public bool hideCosmeticsWithoutArt = true;

    // What the shop shows: skips items ticked Hide In Shop, and cosmetics that have no art yet.
    public IEnumerable<ShopItem> GetByShop(ShopType shop) =>
        items.Where(i => i != null && i.shop == shop && !i.hideInShop &&
                         !(hideCosmeticsWithoutArt && shop == ShopType.Cosmetics && i.look == null));

    // Pass null or "All" for the "no filter" case.
    public IEnumerable<ShopItem> GetFiltered(ShopType shop, string category)
    {
        var list = GetByShop(shop);
        if (string.IsNullOrEmpty(category) || category == "All") return list;
        return list.Where(i => i.category == category);
    }

    // Builds the filter buttons for a shop.
    public List<string> GetCategories(ShopType shop) =>
        GetByShop(shop).Select(i => i.category).Distinct().ToList();

#if UNITY_EDITOR
    [ContextMenu("Collect All Items In Project")]
    void CollectAll()
    {
        items = AssetDatabase.FindAssets("t:ShopItem")
            .Select(g => AssetDatabase.LoadAssetAtPath<ShopItem>(AssetDatabase.GUIDToAssetPath(g)))
            .OrderBy(i => i.shop).ThenBy(i => i.category).ThenBy(i => i.level)
            .ToList();
        EditorUtility.SetDirty(this);
        Debug.Log($"ShopDatabase now has {items.Count} items.");
    }
#endif
}