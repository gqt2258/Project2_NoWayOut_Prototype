using System.Linq;
using UnityEngine;

// Goes on the Player in Gameplay (the object with the body's SpriteRenderer and Animator).
// Draws the worn shirt, flashlight and hat on top of the body, always on the same frame as the body,
// so they walk, idle and turn with it. Nothing to animate for each cosmetic.
//
// Body Look: the "Player Body" Cosmetic Look (the player's own 6 sheets).
// Database:  the same Shop Data as the shops.
public class CharacterLayers : MonoBehaviour
{
    [Tooltip("The body's SpriteRenderer. Found on this object if left empty.")]
    [SerializeField] SpriteRenderer body;
    [Tooltip("The Player Body Cosmetic Look (the 6 player sheets).")]
    [SerializeField] CosmeticLook bodyLook;
    [Tooltip("The same Shop Data as the shops.")]
    [SerializeField] ShopData database;

    SpriteRenderer shirtLayer;
    SpriteRenderer flashlightLayer;
    SpriteRenderer hatLayer;
    CosmeticLook shirtLook;
    CosmeticLook flashlightLook;
    CosmeticLook hatLook;

    void Awake()
    {
        if (body == null) body = GetComponent<SpriteRenderer>();
        if (body == null) body = GetComponentInChildren<SpriteRenderer>();
        if (body == null)
        {
            Debug.LogWarning("CharacterLayers: no body SpriteRenderer found.", this);
            enabled = false;
            return;
        }

        shirtLayer = MakeLayer("Shirt Layer", 1);
        flashlightLayer = MakeLayer("Flashlight Layer", 2);
        hatLayer = MakeLayer("Hat Layer", 3);
    }

    SpriteRenderer MakeLayer(string layerName, int above)
    {
        var layer = new GameObject(layerName).AddComponent<SpriteRenderer>();
        layer.transform.SetParent(body.transform, false);
        layer.sharedMaterial = body.sharedMaterial;   // same lighting as the body
        layer.sortingLayerID = body.sortingLayerID;
        layer.sortingOrder = body.sortingOrder + above;
        return layer;
    }

    void OnEnable()
    {
        if (PlayerWallet.Instance != null) PlayerWallet.Instance.Changed += RefreshLooks;
        RefreshLooks();
    }

    void OnDisable()
    {
        if (PlayerWallet.Instance != null) PlayerWallet.Instance.Changed -= RefreshLooks;
    }

    // What the player is wearing, from the wallet.
    void RefreshLooks()
    {
        shirtLook = LookFor(CosmeticSlot.Shirt);
        hatLook = LookFor(CosmeticSlot.Hat);
        flashlightLook = LookFor(CosmeticSlot.FlashlightSkin);
        checkedFrames = false;
    }

    bool checkedFrames;

    // Says once in the Console why a worn cosmetic can't show, so it's easy to fix.
    void CheckSetup(bool bodyFrameFound)
    {
        if (checkedFrames) return;
        checkedFrames = true;

        string hatId = PlayerWallet.Instance != null ? PlayerWallet.Instance.WornCosmetic(CosmeticSlot.Hat) : null;
        string shirtId = PlayerWallet.Instance != null ? PlayerWallet.Instance.WornCosmetic(CosmeticSlot.Shirt) : null;
        string flashId = PlayerWallet.Instance != null ? PlayerWallet.Instance.WornCosmetic(CosmeticSlot.FlashlightSkin) : null;
        Debug.Log($"[Cosmetics] Wearing hat: {hatId ?? "none"}, shirt: {shirtId ?? "none"}, flashlight: {flashId ?? "default"}.", this);
        if (flashId != null && !HasLook(flashId))
            Debug.LogWarning($"[Cosmetics] {flashId} has no Look. Drag its Cosmetic Look into the shop item's Look slot.", this);

        if (database == null)
            Debug.LogWarning("[Cosmetics] Database is empty on CharacterLayers. Drag in your Shop Data.", this);
        if (bodyLook == null)
            Debug.LogWarning("[Cosmetics] Body Look is empty on CharacterLayers. Drag in Player Body.", this);
        else if (!bodyFrameFound)
            Debug.LogWarning($"[Cosmetics] The body's sprite '{(body.sprite != null ? body.sprite.name : "none")}' is not in " +
                             $"{bodyLook.name}. Fill Player Body with Fill Frames From Sheets.", this);
        if (hatId != null && !HasLook(hatId))
            Debug.LogWarning($"[Cosmetics] {hatId} has no Look. Drag its Cosmetic Look into the shop item's Look slot.", this);
        if (shirtId != null && !HasLook(shirtId))
            Debug.LogWarning($"[Cosmetics] {shirtId} has no Look. Drag its Cosmetic Look into the shop item's Look slot.", this);
    }

    CosmeticLook LookFor(CosmeticSlot slot)
    {
        if (PlayerWallet.Instance == null || database == null)
            return null;
        string itemId = PlayerWallet.Instance.WornCosmetic(slot);
        ShopItem item = itemId != null ? database.items.FirstOrDefault(i => i != null && i.itemId == itemId) : null;
        if (item != null && item.look != null)
            return item.look;
        return database.StarterLook(slot);   // nothing worn (or no art yet): the starter vest / flashlight
    }

    bool HasLook(string itemId)
    {
        ShopItem item = database != null ? database.items.FirstOrDefault(i => i != null && i.itemId == itemId) : null;
        return item != null && item.look != null;
    }

    // After the Animator has picked this frame's body sprite: match the cosmetics to it.
    void LateUpdate()
    {
        CharacterPose pose = CharacterPose.IdleFront;
        int index = 0;
        bool found = bodyLook != null && bodyLook.TryFind(body.sprite, out pose, out index);
        if (body.sprite != null) CheckSetup(found);

        Apply(shirtLayer, shirtLook, found, pose, index);
        Apply(flashlightLayer, flashlightLook, found, pose, index);
        Apply(hatLayer, hatLook, found, pose, index);
    }

    void Apply(SpriteRenderer layer, CosmeticLook look, bool found, CharacterPose pose, int index)
    {
        Sprite frame = found && look != null ? look.Frame(pose, index) : null;
        layer.sprite = frame;
        layer.enabled = frame != null && body.enabled;
        layer.flipX = body.flipX;
        layer.color = body.color;
        layer.sortingOrder = body.sortingOrder + (layer == hatLayer ? 3 : layer == flashlightLayer ? 2 : 1);
    }
}