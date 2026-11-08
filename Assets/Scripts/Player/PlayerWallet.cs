using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

// The one wallet for the whole game. It creates itself before the first scene loads,
// stays loaded across scenes, and saves coins and owned items on this device.
// You do not need to place this in a scene.
// To show coins, name any TextMeshPro text "CoinDisplay". The wallet updates it in every scene.
// Put {0} in the text to choose the format, such as "Coins: {0}".
// To show gains and losses, name any TextMeshPro text "CoinLogs". Coins added or
// removed pop up there as +500 or -50, including shop purchases.
public class PlayerWallet : MonoBehaviour
{
    const string CoinTextName = "CoinDisplay";
    const string CoinChangeTextName = "CoinLogs";
    const float ScanIntervalSeconds = 0.5f;
    const float ChangePopSeconds = 0.2f;
    const float ChangeHoldSeconds = 3f;
    const float ChangeFadeSeconds = 0.5f;
    const int StartingCoins = 1000;   // test amount for a new save
    const string CoinsKey = "PlayerWallet.Coins";
    const string OwnedItemsKey = "PlayerWallet.OwnedItems";
    const string EquipmentKey = "PlayerWallet.Equipment";
    public const int BaseEquipmentSlots = 6;

#if UNITY_EDITOR
    // true: every Play in the Unity Editor starts fresh. false: test saving in the Editor.
    // Builds of the game always keep their save.
    static readonly bool ResetProgressOnPlay = true;
#endif

    public static PlayerWallet Instance { get; private set; }

    readonly HashSet<string> ownedItems = new HashSet<string>();
    readonly List<string> equipment = new List<string>();   // item ids, one per filled slot
    readonly Dictionary<TMP_Text, string> coinTexts = new Dictionary<TMP_Text, string>();
    readonly List<TMP_Text> coinChangeTexts = new List<TMP_Text>();
    int coins;
    int pendingChange;   // waits here until a CoinLogs text is on screen
    Coroutine changeRoutine;
    float nextScanTime;

    public event Action Changed;
    public int Coins => coins;
    public IReadOnlyList<string> Equipment => equipment;
    public bool IsEquipmentFull => equipment.Count >= EquipmentSlots;

    // 6 slots, plus 1 or 2 from the inventory upgrades, so 8 at most.
    public int EquipmentSlots
    {
        get
        {
            if (ownedItems.Contains("upg_inventory_2")) return BaseEquipmentSlots + 2;
            if (ownedItems.Contains("upg_inventory_1")) return BaseEquipmentSlots + 1;
            return BaseEquipmentSlots;
        }
    }

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
    static void CreateWallet()
    {
        if (Instance == null)
            new GameObject("PlayerWallet").AddComponent<PlayerWallet>();
    }

    void Awake()
    {
        // Removes any old PlayerWallet component left in a scene.
        if (Instance != null && Instance != this)
        {
            Destroy(this);
            return;
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);
        Load();
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    void OnDestroy()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;
    }

    // Finds the texts as soon as a scene loads. Update also checks regularly.
    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        FindCoinTexts();
    }

    // Finds every CoinDisplay and CoinLogs, including ones on hidden panels,
    // ones spawned from prefabs, and ones under DontDestroyOnLoad.
    public void FindCoinTexts()
    {
        nextScanTime = Time.unscaledTime + ScanIntervalSeconds;

        var foundTexts = new Dictionary<TMP_Text, string>();
        var foundChangeTexts = new List<TMP_Text>();

        foreach (TMP_Text text in Resources.FindObjectsOfTypeAll<TMP_Text>())
        {
            Scene scene = text.gameObject.scene;
            if (!scene.IsValid() || !scene.isLoaded) continue;   // skips prefab assets

            if (IsCoinChangeName(text.name))
            {
                foundChangeTexts.Add(text);
                if (!coinChangeTexts.Contains(text))
                    text.text = "";   // only clear new texts, so a playing pop-up is not wiped
            }
            else if (text.name.StartsWith(CoinTextName))
            {
                if (coinTexts.TryGetValue(text, out string knownFormat))
                    foundTexts[text] = knownFormat;
                else
                    foundTexts[text] = text.text.Contains("{0}") ? text.text : "{0}";
            }
        }

        bool countsChanged = foundTexts.Count != coinTexts.Count
            || foundChangeTexts.Count != coinChangeTexts.Count;

        coinTexts.Clear();
        foreach (var pair in foundTexts)
            coinTexts[pair.Key] = pair.Value;

        coinChangeTexts.Clear();
        coinChangeTexts.AddRange(foundChangeTexts);

        RefreshCoinTexts();

        if (countsChanged)
            Debug.Log($"PlayerWallet found {coinTexts.Count} CoinDisplay and {coinChangeTexts.Count} CoinLogs.");
    }

    // Copies like "CoinLogs (1)" also count.
    static bool IsCoinChangeName(string objectName) => objectName.StartsWith(CoinChangeTextName);

    void RefreshCoinTexts()
    {
        foreach (var pair in coinTexts)
        {
            if (pair.Key != null)
                pair.Key.text = string.Format(pair.Value, coins);
        }
    }

    // Shows the waiting change once a CoinLogs text is on screen, such as when the result panel opens.
    void Update()
    {
        if (Time.unscaledTime >= nextScanTime)
            FindCoinTexts();

        if (pendingChange == 0) return;

        var visibleTexts = new List<TMP_Text>();
        foreach (TMP_Text text in coinChangeTexts)
        {
            if (text != null && text.gameObject.activeInHierarchy)
                visibleTexts.Add(text);
        }

        if (visibleTexts.Count == 0) return;

        if (changeRoutine != null)
            StopCoroutine(changeRoutine);

        changeRoutine = StartCoroutine(ShowCoinChange(visibleTexts, pendingChange));
        pendingChange = 0;
    }

    bool HasVisibleChangeText()
    {
        foreach (TMP_Text text in coinChangeTexts)
        {
            if (text != null && text.gameObject.activeInHierarchy)
                return true;
        }

        return false;
    }

    IEnumerator ShowCoinChange(List<TMP_Text> texts, int amount)
    {
        Color color = amount > 0 ? new Color(0.3f, 1f, 0.42f) : new Color(1f, 0.25f, 0.25f);
        string message = amount > 0 ? $"+{amount}" : amount.ToString();

        Debug.Log($"PlayerWallet showing {message} on {texts.Count} CoinLogs.");

        foreach (TMP_Text text in texts)
        {
            if (text == null) continue;
            text.text = message;
            text.color = color;
        }

        // Uses unscaled time so it still plays if the result screen pauses the game.
        for (float time = 0f; time < ChangePopSeconds; time += Time.unscaledDeltaTime)
        {
            SetChangeLook(texts, time / ChangePopSeconds, Mathf.Lerp(0.7f, 1f, time / ChangePopSeconds));
            yield return null;
        }
        SetChangeLook(texts, 1f, 1f);

        yield return new WaitForSecondsRealtime(ChangeHoldSeconds);

        for (float time = 0f; time < ChangeFadeSeconds; time += Time.unscaledDeltaTime)
        {
            SetChangeLook(texts, 1f - time / ChangeFadeSeconds, 1f);
            yield return null;
        }

        foreach (TMP_Text text in texts)
        {
            if (text != null)
                text.text = "";
        }

        changeRoutine = null;
    }

    void SetChangeLook(List<TMP_Text> texts, float alpha, float scale)
    {
        foreach (TMP_Text text in texts)
        {
            if (text == null) continue;
            text.alpha = alpha;
            text.transform.localScale = Vector3.one * scale;
        }
    }

    // Upgrades and cosmetics are kept. Equipment can be bought again.
    public bool Owns(ShopItem item) =>
        item.shop != ShopType.Equipment && ownedItems.Contains(item.itemId);

    public bool CanAfford(ShopItem item) => coins >= item.price;

    public bool TryPurchase(ShopItem item)
    {
        if (item == null) return false;

        if (Owns(item))
        {
            Debug.Log($"Purchase refused: {item.displayName} is already owned.");
            return false;
        }

        if (!CanAfford(item))
        {
            Debug.Log($"Purchase refused: {item.displayName} costs {item.price}, but you have {coins}.");
            return false;
        }

        if (item.shop == ShopType.Equipment && IsEquipmentFull)
        {
            Debug.Log($"Purchase refused: equipment is full ({equipment.Count}/{EquipmentSlots}).");
            return false;
        }

        coins -= item.price;
        if (HasVisibleChangeText())
            pendingChange -= item.price;   // no pop-up here means no late pop-up on another screen
        else
            Debug.LogWarning("PlayerWallet: no CoinLogs text is active, so this purchase has no pop-up.");
        if (item.shop == ShopType.Equipment) equipment.Add(item.itemId);
        else ownedItems.Add(item.itemId);
        Debug.Log($"Purchased {item.displayName} for {item.price}. Coins left: {coins}. Equipment: {equipment.Count}/{EquipmentSlots}.");
        SaveAndNotify();
        return true;
    }

    public void AddCoins(int amount)
    {
        if (amount <= 0) return;

        coins += amount;
        pendingChange += amount;
        SaveAndNotify();
    }

    // Coins cannot go below 0.
    public void RemoveCoins(int amount)
    {
        if (amount <= 0) return;

        int removed = Mathf.Min(coins, amount);
        coins -= removed;
        pendingChange -= removed;
        SaveAndNotify();
    }

    // Equipment sells for half its price.
    public int SellPrice(ShopItem item) => item.price / 2;

    // Removes one copy and refunds the player.
    public bool SellEquipment(ShopItem item)
    {
        if (item == null || !equipment.Remove(item.itemId)) return false;

        int refund = SellPrice(item);
        coins += refund;
        if (HasVisibleChangeText())
            pendingChange += refund;

        SaveAndNotify();
        return true;
    }

    // Moves all equipment into the match and empties the loadout, so anything
    // not used during the match is lost when it ends.
    public List<string> TakeEquipmentForMatch()
    {
        var taken = new List<string>(equipment);
        if (taken.Count > 0)
        {
            equipment.Clear();
            SaveAndNotify();
        }

        return taken;
    }

    // Call this when the player uses up a piece of equipment. Removes one copy.
    public void RemoveEquipment(string itemId)
    {
        if (equipment.Remove(itemId))
            SaveAndNotify();
    }

    // Called when the player leaves the lobby. Only equipment is cleared:
    // coins, upgrades and cosmetics are kept.
    public void ResetRun()
    {
        if (equipment.Count == 0) return;

        equipment.Clear();
        SaveAndNotify();
    }

    // Use for a New Game option, or from this component's menu during Play mode.
    [ContextMenu("Reset Saved Progress")]
    public void ResetProgress()
    {
        coins = StartingCoins;
        pendingChange = 0;
        ownedItems.Clear();
        equipment.Clear();
        SaveAndNotify();
    }

    void Load()
    {
#if UNITY_EDITOR
        if (ResetProgressOnPlay)
        {
            PlayerPrefs.DeleteKey(CoinsKey);
            PlayerPrefs.DeleteKey(OwnedItemsKey);
            PlayerPrefs.DeleteKey(EquipmentKey);
        }
#endif

        coins = PlayerPrefs.GetInt(CoinsKey, StartingCoins);

        ownedItems.Clear();
        string saved = PlayerPrefs.GetString(OwnedItemsKey, "");
        foreach (string itemId in saved.Split(new[] { ',' }, StringSplitOptions.RemoveEmptyEntries))
            ownedItems.Add(itemId);

        equipment.Clear();
        saved = PlayerPrefs.GetString(EquipmentKey, "");
        equipment.AddRange(saved.Split(new[] { ',' }, StringSplitOptions.RemoveEmptyEntries));
    }

    void SaveAndNotify()
    {
        PlayerPrefs.SetInt(CoinsKey, coins);
        PlayerPrefs.SetString(OwnedItemsKey, string.Join(",", ownedItems));
        PlayerPrefs.SetString(EquipmentKey, string.Join(",", equipment));
        PlayerPrefs.Save();
        RefreshCoinTexts();
        Changed?.Invoke();
    }
}