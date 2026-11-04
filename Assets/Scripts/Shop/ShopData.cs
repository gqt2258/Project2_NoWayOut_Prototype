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

    public IEnumerable<ShopItem> GetByShop(ShopType shop) =>
        items.Where(i => i.shop == shop);

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
