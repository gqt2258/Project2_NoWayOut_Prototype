using System.Linq;
using UnityEngine;
using UnityEngine.UI;

// Turns the round torch light into a flashlight cone, plus a small dim circle around the player.
// Goes on the Torchlight Layer (the full-screen darkness overlay). Its old oval image is hidden and
// replaced by two images made in code:
//   Light Glow   the flashlight skin's colour, inside the light (under the darkness)
//   Darkness     dark everywhere except the cone and the small circle
//
// The cone points where the player last moved and stays that way when they stop.
// The Flashlight upgrade makes the cone wider (PlayerLoadout calls SetUpgradeBonus).
// The light colour comes from the worn flashlight skin (Shop item > Light Colour).
public class FlashlightCone : MonoBehaviour
{
    [Header("Shape (sizes are parts of the screen height)")]
    [Tooltip("How far the cone reaches. 0.5 = half the screen height.")]
    [SerializeField, Range(0.1f, 1.5f)] float coneLength = 0.55f;
    [Tooltip("How wide the cone opens, in degrees.")]
    [SerializeField, Range(10f, 160f)] float coneAngle = 60f;
    [Tooltip("The small circle around the player, so they can see themselves and the walls next to them.")]
    [SerializeField, Range(0f, 0.5f)] float circleRadius = 0.12f;
    [Tooltip("How see-through the small circle is. 1 = as bright as the cone.")]
    [SerializeField, Range(0f, 1f)] float circleBrightness = 0.7f;
    [Tooltip("How soft the edges are. 0 = sharp.")]
    [SerializeField, Range(0f, 0.9f)] float edgeSoftness = 0.3f;
    [Tooltip("How dark the dark is. 1 = black.")]
    [SerializeField, Range(0f, 1f)] float darkness = 0.93f;

    [Header("Turning")]
    [Tooltip("Degrees per second the cone turns to follow the player.")]
    [SerializeField, Min(30f)] float turnSpeed = 720f;

    [Header("Light colour")]
    [Tooltip("The same Shop Data as the shops. Used for the worn flashlight skin's Light Colour.")]
    [SerializeField] ShopData database;
    [Tooltip("Light colour with no skin worn. Alpha = how strong the tint is (0 = plain light).")]
    [SerializeField] Color defaultLightColour = new Color(1f, 0.95f, 0.8f, 0.12f);

    [Header("Quality")]
    [SerializeField, Range(128, 1024)] int textureSize = 512;

    RectTransform holder;      // follows the player and turns
    Image darknessImage;
    Image glowImage;
    Transform player;
    Canvas canvas;
    Vector3 lastPlayerPosition;
    float angle = -90f;        // facing down (the player starts facing the camera)
    float builtForSize;
    float upgradeBonus;        // e.g. 0.35 = the cone is 35% wider

    // Flashlight upgrade: widens the cone by this fraction (0.35 = +35%).
    public void SetUpgradeBonus(float bonus)
    {
        upgradeBonus = Mathf.Max(0f, bonus);
        if (darknessImage != null)
            BuildTextures();   // already built: redraw with the wider cone
    }

    float ConeAngle => Mathf.Min(170f, coneAngle * (1f + upgradeBonus));

    void Start()
    {
        canvas = GetComponentInParent<Canvas>();
        Image oldOval = GetComponent<Image>();
        if (oldOval != null) oldOval.enabled = false;   // replaced by the cone

        holder = new GameObject("Flashlight Cone", typeof(RectTransform)).GetComponent<RectTransform>();
        holder.SetParent(transform, false);
        holder.anchorMin = holder.anchorMax = holder.pivot = new Vector2(0.5f, 0.5f);

        glowImage = MakeImage("Light Glow");
        darknessImage = MakeImage("Darkness");
        BuildTextures();
        RefreshColour();

        if (PlayerWallet.Instance != null) PlayerWallet.Instance.Changed += RefreshColour;
    }

    void OnDestroy()
    {
        if (PlayerWallet.Instance != null) PlayerWallet.Instance.Changed -= RefreshColour;
    }

    Image MakeImage(string imageName)
    {
        var child = new GameObject(imageName, typeof(RectTransform), typeof(CanvasRenderer), typeof(Image));
        child.transform.SetParent(holder, false);
        RectTransform rect = (RectTransform)child.transform;
        rect.anchorMin = Vector2.zero;
        rect.anchorMax = Vector2.one;
        rect.offsetMin = rect.offsetMax = Vector2.zero;
        Image image = child.GetComponent<Image>();
        image.raycastTarget = false;
        return image;
    }

    // ---------- FOLLOWING THE PLAYER ----------

    void LateUpdate()
    {
        if (player == null)
        {
            GameObject found = GameObject.Find("Player");
            if (found == null) return;
            player = found.transform;
            lastPlayerPosition = player.position;
        }

        RectTransform area = (RectTransform)transform;

        // Big enough to cover the whole screen at any angle, even with the player at the edge.
        float size = Mathf.Max(area.rect.width, area.rect.height) * 2.6f;
        holder.sizeDelta = new Vector2(size, size);
        if (Mathf.Abs(size - builtForSize) > 1f)
            BuildTextures();

        // Sit on the player.
        Camera cam = Camera.main;
        if (cam != null)
        {
            Vector2 screenPoint = RectTransformUtility.WorldToScreenPoint(cam, player.position);
            Camera uiCamera = canvas != null && canvas.renderMode != RenderMode.ScreenSpaceOverlay ? canvas.worldCamera : null;
            if (RectTransformUtility.ScreenPointToLocalPointInRectangle(area, screenPoint, uiCamera, out Vector2 local))
                holder.anchoredPosition = local;
        }

        // Turn towards where the player moved. Standing still keeps the last direction.
        Vector3 moved = player.position - lastPlayerPosition;
        lastPlayerPosition = player.position;
        if (moved.sqrMagnitude > 0.0001f * 0.0001f && Time.deltaTime > 0f)
        {
            float target = Mathf.Atan2(moved.y, moved.x) * Mathf.Rad2Deg;
            angle = Mathf.MoveTowardsAngle(angle, target, turnSpeed * Time.deltaTime);
        }
        holder.localRotation = Quaternion.Euler(0f, 0f, angle - 90f);   // the cone is drawn pointing up
    }

    // ---------- COLOUR ----------

    void RefreshColour()
    {
        if (glowImage == null) return;

        Color colour = defaultLightColour;
        string itemId = PlayerWallet.Instance != null ? PlayerWallet.Instance.WornCosmetic(CosmeticSlot.FlashlightSkin) : null;
        ShopItem skin = itemId != null && database != null
            ? database.items.FirstOrDefault(i => i != null && i.itemId == itemId) : null;
        if (skin != null && skin.lightColour.a > 0f)
            colour = skin.lightColour;

        glowImage.color = colour;
        glowImage.enabled = colour.a > 0f;
    }

    // ---------- DRAWING THE LIGHT ----------

    // Two textures, drawn once: the darkness with a cone + circle hole, and the glow in that hole.
    void BuildTextures()
    {
        RectTransform area = (RectTransform)transform;
        float size = Mathf.Max(area.rect.width, area.rect.height) * 2.6f;
        if (size <= 1f) return;
        builtForSize = size;

        float screenHeight = Mathf.Max(1f, area.rect.height);
        float pixelsPerTexel = size / textureSize;
        float length = coneLength * screenHeight / pixelsPerTexel;
        float radius = circleRadius * screenHeight / pixelsPerTexel;
        float halfAngle = ConeAngle * 0.5f;
        float angleSoft = Mathf.Max(1f, halfAngle * edgeSoftness);

        var dark = new Texture2D(textureSize, textureSize, TextureFormat.RGBA32, false) { wrapMode = TextureWrapMode.Clamp };
        var glow = new Texture2D(textureSize, textureSize, TextureFormat.RGBA32, false) { wrapMode = TextureWrapMode.Clamp };
        var darkPixels = new Color32[textureSize * textureSize];
        var glowPixels = new Color32[textureSize * textureSize];
        float centre = (textureSize - 1) * 0.5f;

        for (int y = 0; y < textureSize; y++)
        {
            for (int x = 0; x < textureSize; x++)
            {
                float dx = x - centre, dy = y - centre;
                float distance = Mathf.Sqrt(dx * dx + dy * dy);

                // The cone points up (+y).
                float fromForward = Mathf.Abs(Mathf.Atan2(dx, dy) * Mathf.Rad2Deg);
                float cone = (1f - Smooth(length * (1f - edgeSoftness), length, distance))
                           * (1f - Smooth(halfAngle - angleSoft, halfAngle, fromForward));
                float circle = (1f - Smooth(radius * (1f - edgeSoftness), radius, distance)) * circleBrightness;
                float light = Mathf.Max(cone, circle);

                int i = y * textureSize + x;
                darkPixels[i] = new Color32(0, 0, 0, (byte)(255f * darkness * (1f - light)));
                glowPixels[i] = new Color32(255, 255, 255, (byte)(255f * cone));
            }
        }

        dark.SetPixels32(darkPixels);
        dark.Apply();
        glow.SetPixels32(glowPixels);
        glow.Apply();

        // Throw away the old ones (only rebuilt if the screen size changes).
        if (darknessImage.sprite != null) { Destroy(darknessImage.sprite.texture); Destroy(darknessImage.sprite); }
        if (glowImage.sprite != null) { Destroy(glowImage.sprite.texture); Destroy(glowImage.sprite); }

        Rect rect = new Rect(0, 0, textureSize, textureSize);
        darknessImage.sprite = Sprite.Create(dark, rect, new Vector2(0.5f, 0.5f));
        glowImage.sprite = Sprite.Create(glow, rect, new Vector2(0.5f, 0.5f));
    }

    static float Smooth(float from, float to, float value)
    {
        if (to <= from) return value >= to ? 1f : 0f;
        return Mathf.SmoothStep(0f, 1f, Mathf.InverseLerp(from, to, value));
    }
}