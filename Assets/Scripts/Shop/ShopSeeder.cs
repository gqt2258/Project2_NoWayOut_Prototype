#if UNITY_EDITOR
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

// Put in an "Editor" folder. Run ONCE: Tools > Shop > Generate Default Items.
// Creates all ScriptableObject assets with your doc's data. Existing assets are skipped,
// so it never overwrites edits you made in the Inspector.
public static class ShopSeeder
{
    const string Root = "Assets/ShopData";
    const string ItemsFolder = Root + "/Items";
    const string DatabasePath = Root + "/ShopDatabase.asset";

    [MenuItem("Tools/Shop/Generate Default Items")]
    public static void Generate()
    {
        EnsureFolder(Root);
        EnsureFolder(ItemsFolder);

        var db = AssetDatabase.LoadAssetAtPath<ShopData>(DatabasePath);
        if (db == null)
        {
            db = ScriptableObject.CreateInstance<ShopData>();
            AssetDatabase.CreateAsset(db, DatabasePath);
        }

        int created = 0;
        void Make(string id, ShopType shop, string cat, string line, string name, int level, string desc, int price)
        {
            string path = $"{ItemsFolder}/{id}.asset";
            var item = AssetDatabase.LoadAssetAtPath<ShopItem>(path);
            if (item == null)
            {
                item = ScriptableObject.CreateInstance<ShopItem>();
                item.itemId = id; item.shop = shop; item.category = cat; item.upgradeLine = line;
                item.displayName = name; item.level = level; item.description = desc; item.price = price;
                AssetDatabase.CreateAsset(item, path);
                created++;
            }
            if (!db.items.Contains(item)) db.items.Add(item);
        }

        const ShopType U = ShopType.Upgrade, E = ShopType.Equipment, C = ShopType.Cosmetics;

        // ---- Upgrades ----
        const string fl = "Player Flashlight Upgrade", mv = "Player Movement Upgrade", inv = "Player Inventory Upgrade";
        Make("upg_flashlight_1", U, fl, "Flashlight Range", "Flashlight Range", 1, "+10% light radius", 300);
        Make("upg_flashlight_2", U, fl, "Flashlight Range", "Flashlight Range", 2, "+20% light radius", 600);
        Make("upg_flashlight_3", U, fl, "Flashlight Range", "Flashlight Range", 3, "+35% light radius", 1000);
        Make("upg_walkspeed_1", U, mv, "Player Walkspeed", "Player Walkspeed", 1, "+5% movement speed", 400);
        Make("upg_walkspeed_2", U, mv, "Player Walkspeed", "Player Walkspeed", 2, "+10% movement speed", 700);
        Make("upg_walkspeed_3", U, mv, "Player Walkspeed", "Player Walkspeed", 3, "+15% movement speed", 1000);
        Make("upg_walkspeed_4", U, mv, "Player Walkspeed", "Player Walkspeed", 4, "+25% movement speed", 1400);
        Make("upg_stamina_1", U, mv, "Player Run Stamina", "Player Run Stamina", 1, "+10% sprint time", 400);
        Make("upg_stamina_2", U, mv, "Player Run Stamina", "Player Run Stamina", 2, "+20% sprint time", 700);
        Make("upg_stamina_3", U, mv, "Player Run Stamina", "Player Run Stamina", 3, "+40% sprint time", 1100);
        Make("upg_inventory_1", U, inv, "Player Inventory Slot Expansion", "Player Inventory Slot Expansion", 1, "+1 inventory slot", 500);
        Make("upg_inventory_2", U, inv, "Player Inventory Slot Expansion", "Player Inventory Slot Expansion", 2, "+2 inventory slots", 1000);

        // ---- Equipment ----
        Make("eq_noisemaker", E, "Hunter Tools", "", "Noise Maker", 0, "Distracts the monster for a few seconds.", 40);
        Make("eq_smokebomb", E, "Hunter Tools", "", "Smoke Bomb", 0, "Breaks the monster's line of sight.", 60);
        Make("eq_beartrap", E, "Hunter Tools", "", "Bear Trap", 0, "Immobilises the monster for a few seconds.", 80);
        Make("eq_flashbang", E, "Hunter Tools", "", "Flashbang", 0, "Stuns the monster and resets it to loitering from any state.", 100);
        Make("eq_freezegun", E, "Wall Tools", "", "Freeze Gun", 0, "Locks a wall for a few seconds.", 50);
        Make("eq_gridscanner", E, "Wall Tools", "", "Grid Scanner", 0, "Reveals nearby walls for the next shift.", 60);
        Make("eq_earthwand", E, "Wall Tools", "", "Earth Wand", 0, "Forces a wall open or closed.", 80);
        Make("eq_clueloc", E, "Others (Minimap)", "", "Clue Locator", 0, "Shows direction of the nearest clue.", 70);
        Make("eq_itemloc", E, "Others (Minimap)", "", "Item Locator", 0, "Shows direction of the nearest item.", 90);
        Make("eq_monsterloc", E, "Others (Minimap)", "", "Monster Locator", 0, "Shows the monster's direction for a few seconds.", 120);

        // ---- Cosmetics ----
        const string hat = "Player Hats", shirt = "Player Shirts", fs = "Flashlight Skins";
        Make("cos_hat_beanie", C, hat, "", "Beanie", 0, "", 100);
        Make("cos_hat_baseballcap", C, hat, "", "Baseball Cap", 0, "", 120);
        Make("cos_hat_sunglasses", C, hat, "", "Sunglasses", 0, "", 150);
        Make("cos_hat_cowboy", C, hat, "", "Cowboy Hat", 0, "", 250);
        Make("cos_hat_camoberet", C, hat, "", "Camo Beret", 0, "", 300);
        Make("cos_hat_detective", C, hat, "", "Detective Hat", 0, "", 300);
        Make("cos_hat_canvas", C, hat, "", "Canvas Hat", 0, "", 350);
        Make("cos_shirt_singlet", C, shirt, "", "Singlet Shirt", 0, "", 80);
        Make("cos_shirt_hoodie", C, shirt, "", "Hoodie", 0, "", 100);
        Make("cos_shirt_overalls", C, shirt, "", "Farmer Overalls", 0, "", 180);
        Make("cos_shirt_tuxedo", C, shirt, "", "Tuxedo", 0, "", 220);
        Make("cos_shirt_camo", C, shirt, "", "Camo Shirt", 0, "", 280);
        Make("cos_shirt_investigator", C, shirt, "", "Investigator Suit", 0, "", 350);
        Make("cos_shirt_hunter", C, shirt, "", "Hunter Suit", 0, "", 450);
        Make("cos_flash_rustylantern", C, fs, "", "Rusty Lantern", 0, "", 350);
        Make("cos_flash_modernled", C, fs, "", "Modern LED", 0, "", 400);
        Make("cos_flash_cursedflame", C, fs, "", "Cursed Flame", 0, "", 450);
        Make("cos_flash_slimelight", C, fs, "", "Slime Light", 0, "", 550);

        EditorUtility.SetDirty(db);
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
        Debug.Log($"Shop seeder done: {created} new items created, {db.items.Count} in database.");
        Selection.activeObject = db;
    }

    static void EnsureFolder(string folder)
    {
        if (AssetDatabase.IsValidFolder(folder)) return;
        AssetDatabase.CreateFolder(Path.GetDirectoryName(folder).Replace('\\', '/'), Path.GetFileName(folder));
    }
}
#endif