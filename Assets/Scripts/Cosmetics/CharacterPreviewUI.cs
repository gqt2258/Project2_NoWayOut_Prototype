using System.Linq;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// The player's character in the UI (Lobby Create, the lobby, the Cosmetics shop), wearing
// what the player has equipped. Plays one animation (idle facing front by default).
//
// Put it on a UI Image. That Image is just the box the character stands in (it's made invisible).
// The character is drawn inside it at whole-pixel size, standing on the bottom middle, so it is
// never stretched when it turns (the side frames are narrower than the front ones).
//
// In the Cosmetics shop, ShopUI can show the selected item on it to try on (ShopUI > Preview).
//
// Turning around (for the shop):
//   Drag To Turn  swipe left / right on the character to turn it (front, left, back, right)
//   Buttons       optional: point a button's On Click at TurnLeft / TurnRight
// Lobby Create: Drag To Turn off, so it just stands facing front.
[RequireComponent(typeof(Image))]
public class CharacterPreviewUI : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    public enum Facing { Front, Right, Back, Left }

    [Tooltip("The Player Body Cosmetic Look (the 6 player sheets).")]
    [SerializeField] CosmeticLook bodyLook;
    [Tooltip("The same Shop Data as the shops.")]
    [SerializeField] ShopData database;
    [Tooltip("Off: this player. On: the co-op partner (Player 2 in the lobby), live as they change.")]
    [SerializeField] bool showPartner;
    [Tooltip("The direction it faces at the start.")]
    [SerializeField] Facing facing = Facing.Front;
    [Tooltip("Animation speed. The player's idle in Gameplay is about 36.")]
    [SerializeField, Min(1f)] float framesPerSecond = 36f;

    [Header("Turning")]
    [Tooltip("Swipe left / right on the character to turn it.")]
    [SerializeField] bool dragToTurn = true;
    [Tooltip("How far (pixels) a swipe must go to turn once.")]
    [SerializeField, Min(10f)] float dragDistance = 60f;

    Image box;          // this object's Image: the area, and catches swipes
    RectTransform character;   // holds the body, shirt, flashlight and hat, sized per frame
    Image body;
    float pixelScale = 1f;
    Image shirt;
    Image flashlight;
    Image hat;
    CosmeticLook shirtLook;
    CosmeticLook flashlightLook;
    CosmeticLook hatLook;
    ShopItem tryOn;   // shown instead of what's worn in its slot (shop preview)
    float dragStartX;

    CharacterPose Pose
    {
        get
        {
            switch (facing)
            {
                case Facing.Back: return CharacterPose.IdleBack;
                case Facing.Left:
                case Facing.Right: return CharacterPose.IdleSide;
                default: return CharacterPose.IdleFront;
            }
        }
    }

    void Awake()
    {
        box = GetComponent<Image>();
        box.sprite = null;
        box.color = new Color(1f, 1f, 1f, 0f);   // invisible
        box.raycastTarget = dragToTurn;          // needed to catch swipes

        character = new GameObject("Character", typeof(RectTransform)).GetComponent<RectTransform>();
        character.SetParent(transform, false);
        character.anchorMin = character.anchorMax = new Vector2(0.5f, 0f);   // bottom middle of the box
        character.pivot = new Vector2(0.5f, 0f);
        character.anchoredPosition = Vector2.zero;

        body = MakeLayer("Body");
        shirt = MakeLayer("Shirt");
        flashlight = MakeLayer("Flashlight");
        hat = MakeLayer("Hat");
    }

    Image MakeLayer(string layerName)
    {
        var layer = new GameObject(layerName, typeof(RectTransform), typeof(CanvasRenderer), typeof(Image));
        layer.transform.SetParent(character, false);
        // Centred on the body, sized per frame: a cosmetic frame can be bigger than the body's
        // (drawn past the body, e.g. a long flashlight) as long as it has the same centre.
        RectTransform rect = (RectTransform)layer.transform;
        rect.anchorMin = rect.anchorMax = rect.pivot = new Vector2(0.5f, 0.5f);
        rect.anchoredPosition = Vector2.zero;

        Image image = layer.GetComponent<Image>();
        image.raycastTarget = false;
        return image;
    }

    void OnEnable()
    {
        if (PlayerWallet.Instance != null) PlayerWallet.Instance.Changed += RefreshLooks;
        PlayerProfileSync.ProfilesChanged += RefreshLooks;
        RefreshLooks();
    }

    // ---------- TURNING ----------

    // Clockwise as seen from above: front -> left -> back -> right (like spinning to his right).
    public void TurnRight() => Turn(1);
    public void TurnLeft() => Turn(-1);

    public void SetFacing(Facing newFacing)
    {
        facing = newFacing;
    }

    void Turn(int step)
    {
        Facing[] order = { Facing.Front, Facing.Left, Facing.Back, Facing.Right };
        int index = System.Array.IndexOf(order, facing);
        facing = order[(index + step + order.Length) % order.Length];
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        dragStartX = eventData.position.x;
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (!dragToTurn) return;
        float moved = eventData.position.x - dragStartX;
        if (Mathf.Abs(moved) < dragDistance) return;
        Turn(moved > 0f ? -1 : 1);   // swipe right = spin him to his left, like turning a model
        dragStartX = eventData.position.x;
    }

    public void OnEndDrag(PointerEventData eventData) { }

    void OnDisable()
    {
        if (PlayerWallet.Instance != null) PlayerWallet.Instance.Changed -= RefreshLooks;
        PlayerProfileSync.ProfilesChanged -= RefreshLooks;
    }

    // Shop: show this cosmetic on the character without buying it. null = back to what's worn.
    public void TryOn(ShopItem item)
    {
        tryOn = item != null && item.Slot != CosmeticSlot.None ? item : null;
        RefreshLooks();
    }

    void RefreshLooks()
    {
        if (this == null) return;
        shirtLook = LookFor(CosmeticSlot.Shirt);
        hatLook = LookFor(CosmeticSlot.Hat);
        flashlightLook = LookFor(CosmeticSlot.FlashlightSkin);
    }

    CosmeticLook LookFor(CosmeticSlot slot)
    {
        if (tryOn != null && tryOn.Slot == slot)
            return tryOn.look;
        if (database == null)
            return null;
        string itemId;
        if (showPartner)
            itemId = PlayerProfileSync.Partner != null ? PlayerProfileSync.Partner.Profile.WornCosmetic(slot) : null;
        else if (PlayerWallet.Instance != null)
            itemId = PlayerWallet.Instance.WornCosmetic(slot);
        else
            return null;
        ShopItem item = itemId != null ? database.items.FirstOrDefault(i => i != null && i.itemId == itemId) : null;
        if (item != null && item.look != null)
            return item.look;
        return database.StarterLook(slot);   // nothing worn (or no art yet): the starter vest / flashlight
    }

    void Update()
    {
        // The side frames face right. Facing left = the same frames mirrored (like the game).
        character.localScale = new Vector3(facing == Facing.Left ? -1f : 1f, 1f, 1f);

        CharacterPose pose = Pose;
        Sprite[] frames = bodyLook != null ? bodyLook.Get(pose) : null;
        if (frames == null || frames.Length == 0)
            return;

        int index = Mathf.FloorToInt(Time.unscaledTime * framesPerSecond) % frames.Length;
        body.sprite = frames[index];
        FitCharacter(frames[index]);
        Show(body, frames[index]);
        Show(shirt, shirtLook != null ? shirtLook.Frame(pose, index) : null);
        Show(flashlight, flashlightLook != null ? flashlightLook.Frame(pose, index) : null);
        Show(hat, hatLook != null ? hatLook.Frame(pose, index) : null);
    }

    // Each frame at its real pixel size, scaled by a whole number so pixels stay square and sharp.
    // The scale fits the tallest frame (48 px) in the box, so it stays the same in every direction.
    void FitCharacter(Sprite frame)
    {
        Rect area = ((RectTransform)transform).rect;
        const float tallestFrame = 48f, widestFrame = 32f;
        float scale = Mathf.Min(area.height / tallestFrame, area.width / widestFrame);
        if (scale >= 1f) scale = Mathf.Floor(scale);
        character.sizeDelta = frame.rect.size * scale;
        pixelScale = scale;
    }

    void Show(Image layer, Sprite frame)
    {
        layer.sprite = frame;
        layer.enabled = frame != null;
        if (frame != null)
            layer.rectTransform.sizeDelta = frame.rect.size * pixelScale;
    }
}