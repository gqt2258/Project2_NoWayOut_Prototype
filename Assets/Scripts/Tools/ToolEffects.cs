using System.Collections;
using System.Collections.Generic;
using NoWayOut.Maze;
using Unity.Netcode;
using UnityEngine;
using UnityEngine.UI;

// What each piece of equipment actually does when used from the hotbar.
// Made automatically the first time a tool is used. To change the numbers, add this component to
// any object in the Gameplay scene and edit it there.
//
// Co-op: the player who uses a tool sends it to the other player, so both see it.
// The monster and the wall shifts are run by the host, so their effects are applied there.
//
//   Noise Maker   placed where you stand; the monster goes to it and ignores players for a while
//   Smoke Bomb    a smoke cloud where you stand; the monster can't see into or through it
//   Bear Trap     placed where you stand; the monster is stuck for a while when it steps in
//   Flashbang     goes off where you stand after a short fuse; a monster nearby is stunned and gives up
//   Freeze Gun    the walls in front of you can't shift for a while
//   Grid Scanner  the next wall shift is shown on nearby walls before it happens
//   Earth Wand    the wall in front of you opens (or a gap closes) for a while
//   Item Locator     shows the direction of the nearest job item on the radar
//   Monster Locator  shows the monster's direction on the radar for a few seconds
public class ToolEffects : MonoBehaviour
{
    public static ToolEffects Instance { get; private set; }

    [Header("Noise Maker")]
    [SerializeField, Min(1f)] float noiseSeconds = 6f;
    [Tooltip("The monster only hears it within this distance.")]
    [SerializeField, Min(1f)] float noiseHearingDistance = 20f;

    [Header("Smoke Bomb")]
    [SerializeField, Min(1f)] float smokeSeconds = 8f;
    [SerializeField, Min(0.5f)] float smokeRadius = 2.5f;

    [Header("Bear Trap")]
    [SerializeField, Min(0.5f)] float trapStunSeconds = 4f;
    [Tooltip("How long a trap waits in the maze before it disappears.")]
    [SerializeField, Min(5f)] float trapLifetime = 90f;
    [SerializeField, Min(0.2f)] float trapTriggerDistance = 0.7f;

    [Header("Flashbang")]
    [SerializeField, Min(0f)] float flashFuseSeconds = 1f;
    [SerializeField, Min(1f)] float flashRadius = 6f;
    [SerializeField, Min(0.5f)] float flashStunSeconds = 3f;

    [Header("Freeze Gun")]
    [SerializeField, Min(1f)] float freezeSeconds = 20f;

    [Header("Grid Scanner")]
    [Tooltip("How many cells around you show the coming shift.")]
    [SerializeField, Min(1)] int scannerRadiusCells = 4;

    [Header("Earth Wand")]
    [SerializeField, Min(1f)] float wandSeconds = 12f;

    [Header("Art (optional prefabs, placed where the tool is used)")]
    [Tooltip("The noise maker on the floor. Can have an Animator (e.g. shaking / speaker pulsing).")]
    [SerializeField] GameObject noiseMakerPrefab;
    [Tooltip("The smoke cloud. Draw it about Smoke Radius x 2 units across (5 units by default). " +
             "A Particle System works too. It is faded out and removed when the smoke ends.")]
    [SerializeField] GameObject smokePrefab;
    [Tooltip("The open bear trap on the floor.")]
    [SerializeField] GameObject bearTrapPrefab;
    [Tooltip("Optional. The closed trap, shown for a moment after it snaps.")]
    [SerializeField] GameObject bearTrapSnappedPrefab;
    [Tooltip("Optional. The flashbang lying on the floor during the fuse.")]
    [SerializeField] GameObject flashbangPrefab;
    [Tooltip("Optional. The burst when it goes off (e.g. a white starburst or particles). Removed after 1 second.")]
    [SerializeField] GameObject flashBurstPrefab;

    [Header("Placeholder look (used when a prefab above is empty)")]
    [SerializeField] Color smokeColour = new Color(0.75f, 0.75f, 0.75f, 0.85f);
    [SerializeField] Color trapColour = new Color(0.45f, 0.1f, 0.1f, 1f);
    [SerializeField] Color noiseColour = new Color(1f, 0.85f, 0.2f, 1f);

    static Sprite circleSprite;

    public static ToolEffects Get()
    {
        if (Instance == null)
            Instance = new GameObject("Tool Effects (made by code)").AddComponent<ToolEffects>();
        return Instance;
    }

    void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(this); return; }
        Instance = this;
        Debug.Log($"[Tools] Tool Effects ready on \"{name}\" in {gameObject.scene.name}. Art: " +
                  $"noise {Has(noiseMakerPrefab)}, smoke {Has(smokePrefab)}, trap {Has(bearTrapPrefab)}, " +
                  $"trap snapped {Has(bearTrapSnappedPrefab)}, flashbang {Has(flashbangPrefab)}, burst {Has(flashBurstPrefab)}" +
                  (name == "Tool Effects (made by code)" ? "  <- made by code, so no art. Add a Tool Effects object to the Gameplay scene." : ""), this);
    }

    static string Has(GameObject prefab) => prefab != null ? prefab.name : "EMPTY";

    void OnDestroy()
    {
        if (Instance == this) Instance = null;
        SmokeZones.Clear();
    }

    static MazeShiftController Maze => FindAnyObjectByType<MazeShiftController>();
    static EnemyMovement Enemy => FindAnyObjectByType<EnemyMovement>();

    // ---------- USING A TOOL ----------

    // Checked before the tool is used up. False = nothing happens and the tool is kept.
    public bool CanUse(ShopItem tool, Vector3 position, Vector2 facing)
    {
        if (tool == null) return false;
        if (tool.itemId == "eq_earthwand")
        {
            MazeShiftController maze = Maze;
            return maze != null && maze.EdgeInFront(position, facing) >= 0;
        }
        return true;
    }

    // Called by PlayerLoadout when this player uses a tool.
    public void Use(ShopItem tool, Vector3 position, Vector2 facing)
    {
        if (tool == null) return;

        // Only this player sees these.
        if (tool.itemId == "eq_gridscanner")
        {
            Maze?.ArmScanner(scannerRadiusCells);
            return;
        }
        if (IsLocator(tool.itemId))
            return;   // the radar shows it (RadarController.RevealTool)

        Apply(tool.itemId, position, facing);

        // Co-op: the other player sees it too (and the host runs the monster / walls part).
        NetworkManager network = NetworkManager.Singleton;
        if (JobSession.IsCoop && network != null && network.IsListening && network.LocalClient?.PlayerObject != null)
            network.LocalClient.PlayerObject.GetComponent<NetworkJobSync>()?.ShareToolUse(tool.itemId, position, facing);
    }

    // The other player used a tool (co-op).
    public void ApplyFromPartner(string itemId, Vector3 position, Vector2 facing, string toolName)
    {
        AudioManager.Instance?.PlayToolEffectAt(toolName, position);   // only the sound where it happened
        Apply(itemId, position, facing);
    }

    static bool IsLocator(string itemId) => itemId == "eq_itemloc" || itemId == "eq_monsterloc";

    void Apply(string itemId, Vector3 position, Vector2 facing)
    {
        switch (itemId)
        {
            case "eq_noisemaker": StartCoroutine(NoiseMaker(position)); break;
            case "eq_smokebomb": StartCoroutine(SmokeBomb(position)); break;
            case "eq_beartrap": StartCoroutine(BearTrap(position)); break;
            case "eq_flashbang": StartCoroutine(Flashbang(position)); break;
            case "eq_freezegun": StartCoroutine(FreezeGun(position, facing)); break;
            case "eq_earthwand": Maze?.ForceWallInFront(position, facing, wandSeconds); break;
            default: Debug.LogWarning($"ToolEffects: no effect for \"{itemId}\".", this); break;
        }
    }

    // ---------- HUNTER TOOLS ----------

    IEnumerator NoiseMaker(Vector3 position)
    {
        bool placeholder = noiseMakerPrefab == null;
        GameObject marker = placeholder ? MakeCircle("Noise Maker", position, 0.35f, noiseColour, 20)
                                        : Place(noiseMakerPrefab, position);
        yield return new WaitForSeconds(0.5f);

        EnemyMovement enemy = Enemy;
        if (enemy != null && Vector2.Distance(enemy.transform.position, position) <= noiseHearingDistance)
            enemy.Distract(position, noiseSeconds);

        // The placeholder pulses while the voice lines play (your prefab can animate itself).
        for (float t = 0f; t < noiseSeconds; t += Time.deltaTime)
        {
            if (placeholder)
                marker.transform.localScale = Vector3.one * 0.7f * (1f + 0.25f * Mathf.Sin(t * 8f));
            yield return null;
        }
        yield return FadeAll(marker, 0.4f);
        Destroy(marker);
    }

    IEnumerator SmokeBomb(Vector3 position)
    {
        yield return new WaitForSeconds(0.8f);   // matches the smoke sound

        SmokeZones.Add(position, smokeRadius, Time.time + smokeSeconds);
        Enemy?.ForgetIfHiddenBySmoke();

        GameObject cloud;
        if (smokePrefab != null)
        {
            cloud = Place(smokePrefab, position, true);
        }
        else
        {
            cloud = MakeCircle("Smoke", position, smokeRadius, smokeColour, 60);
            SpriteRenderer sprite = cloud.GetComponent<SpriteRenderer>();
            Color full = sprite.color;
            for (float t = 0f; t < 0.4f; t += Time.deltaTime)   // puff out
            {
                float k = t / 0.4f;
                cloud.transform.localScale = Vector3.one * smokeRadius * 2f * Mathf.Lerp(0.3f, 1f, k);
                sprite.color = new Color(full.r, full.g, full.b, full.a * k);
                yield return null;
            }
            cloud.transform.localScale = Vector3.one * smokeRadius * 2f;
            sprite.color = full;
        }

        yield return new WaitForSeconds(Mathf.Max(0f, smokeSeconds - 1.4f));
        foreach (ParticleSystem particles in cloud.GetComponentsInChildren<ParticleSystem>())
            particles.Stop();   // let the last puffs drift away
        yield return FadeAll(cloud, 1f);
        Destroy(cloud);
    }

    IEnumerator BearTrap(Vector3 position)
    {
        GameObject trap = bearTrapPrefab != null ? Place(bearTrapPrefab, position)
                                                 : MakeCircle("Bear Trap", position, 0.3f, trapColour, 5);
        float until = Time.time + trapLifetime;
        bool snapped = false;

        while (Time.time < until)
        {
            EnemyMovement enemy = Enemy;
            if (enemy != null && Vector2.Distance(enemy.transform.position, position) <= trapTriggerDistance)
            {
                AudioManager.Instance?.PlayBearTrapSnap(position);
                enemy.Stun(trapStunSeconds, false);   // stuck, then carries on (host / solo only)
                snapped = true;
                break;
            }
            yield return null;
        }
        Destroy(trap);

        // The closed trap stays while the monster is stuck in it.
        if (snapped && bearTrapSnappedPrefab != null)
        {
            GameObject closed = Place(bearTrapSnappedPrefab, position);
            yield return new WaitForSeconds(trapStunSeconds);
            yield return FadeAll(closed, 0.5f);
            Destroy(closed);
        }
    }

    IEnumerator Flashbang(Vector3 position)
    {
        GameObject grenade = flashbangPrefab != null ? Place(flashbangPrefab, position) : null;
        yield return new WaitForSeconds(flashFuseSeconds);   // matches the bang sound
        if (grenade != null) Destroy(grenade);
        if (flashBurstPrefab != null) Destroy(Place(flashBurstPrefab, position, true), 1f);

        EnemyMovement enemy = Enemy;
        if (enemy != null && Vector2.Distance(enemy.transform.position, position) <= flashRadius)
            enemy.Stun(flashStunSeconds, true);   // stunned, then back to loitering

        // A white flash for this device's player if they're close to it.
        GameObject player = GameObject.Find("Player");
        if (player != null)
        {
            float distance = Vector2.Distance(player.transform.position, position);
            if (distance <= flashRadius)
                StartCoroutine(ScreenFlash(Mathf.Lerp(0.9f, 0.3f, distance / flashRadius)));
        }
    }

    // ---------- WALL TOOLS ----------

    IEnumerator FreezeGun(Vector3 position, Vector2 facing)
    {
        yield return new WaitForSeconds(0.25f);   // matches the freeze sound
        Maze?.FreezeInFront(position, facing, freezeSeconds);
    }

    // ---------- LOOKS ----------

    // Your art, placed on the spot (at the prefab's own size).
    // overPlayer: smoke and the flash burst cover the player; everything else lies on the floor,
    // drawn like the items in the maze (above the floor, under the player).
    static GameObject Place(GameObject prefab, Vector3 position, bool overPlayer = false)
    {
        GameObject placed = Instantiate(prefab, new Vector3(position.x, position.y, 0f), Quaternion.identity);
        SpriteRenderer player = GameObject.Find("Player") != null ? GameObject.Find("Player").GetComponent<SpriteRenderer>() : null;
        if (player == null)
            return placed;

        int layer = player.sortingLayerID;
        int order = overPlayer ? player.sortingOrder + 20 : player.sortingOrder - 1;
        foreach (SpriteRenderer sprite in placed.GetComponentsInChildren<SpriteRenderer>(true))
        {
            sprite.sortingLayerID = layer;
            sprite.sortingOrder = order + sprite.sortingOrder;   // keeps the prefab's own order between its parts
        }
        foreach (ParticleSystemRenderer particles in placed.GetComponentsInChildren<ParticleSystemRenderer>(true))
        {
            particles.sortingLayerID = layer;
            particles.sortingOrder = order + particles.sortingOrder;
        }
        return placed;
    }

    // Fades every sprite in the object (your prefab or the placeholder).
    static IEnumerator FadeAll(GameObject target, float seconds)
    {
        if (target == null) yield break;
        SpriteRenderer[] sprites = target.GetComponentsInChildren<SpriteRenderer>();
        var start = new Color[sprites.Length];
        for (int i = 0; i < sprites.Length; i++) start[i] = sprites[i].color;

        for (float t = 0f; t < seconds && target != null; t += Time.deltaTime)
        {
            for (int i = 0; i < sprites.Length; i++)
                if (sprites[i] != null)
                    sprites[i].color = new Color(start[i].r, start[i].g, start[i].b, start[i].a * (1f - t / seconds));
            yield return null;
        }
    }

    static GameObject MakeCircle(string objectName, Vector3 position, float radius, Color colour, int sortingOrder)
    {
        var go = new GameObject(objectName);
        go.transform.position = new Vector3(position.x, position.y, 0f);
        go.transform.localScale = Vector3.one * radius * 2f;
        SpriteRenderer sprite = go.AddComponent<SpriteRenderer>();
        sprite.sprite = CircleSprite();
        sprite.color = colour;
        sprite.sortingOrder = sortingOrder;
        return go;
    }

    // A soft white circle, 1 unit across.
    static Sprite CircleSprite()
    {
        if (circleSprite != null) return circleSprite;
        const int size = 64;
        var texture = new Texture2D(size, size, TextureFormat.RGBA32, false) { wrapMode = TextureWrapMode.Clamp };
        float centre = (size - 1) * 0.5f;
        for (int y = 0; y < size; y++)
            for (int x = 0; x < size; x++)
            {
                float d = Mathf.Sqrt((x - centre) * (x - centre) + (y - centre) * (y - centre)) / centre;
                float a = Mathf.Clamp01((1f - d) / 0.25f);
                texture.SetPixel(x, y, new Color(1f, 1f, 1f, a));
            }
        texture.Apply();
        circleSprite = Sprite.Create(texture, new Rect(0, 0, size, size), new Vector2(0.5f, 0.5f), size);
        return circleSprite;
    }

    IEnumerator ScreenFlash(float strength)
    {
        var canvasObject = new GameObject("Flashbang Flash", typeof(Canvas));
        Canvas canvas = canvasObject.GetComponent<Canvas>();
        canvas.renderMode = RenderMode.ScreenSpaceOverlay;
        canvas.sortingOrder = 900;   // over the game, under the loading screen

        var imageObject = new GameObject("White", typeof(RectTransform), typeof(Image));
        imageObject.transform.SetParent(canvasObject.transform, false);
        RectTransform rect = (RectTransform)imageObject.transform;
        rect.anchorMin = Vector2.zero;
        rect.anchorMax = Vector2.one;
        rect.offsetMin = rect.offsetMax = Vector2.zero;
        Image image = imageObject.GetComponent<Image>();
        image.raycastTarget = false;

        const float seconds = 1.2f;
        for (float t = 0f; t < seconds; t += Time.unscaledDeltaTime)
        {
            image.color = new Color(1f, 1f, 1f, strength * (1f - t / seconds));
            yield return null;
        }
        Destroy(canvasObject);
    }
}

// Smoke clouds the monster can't see into or through.
public static class SmokeZones
{
    struct Zone { public Vector2 centre; public float radius; public float until; }
    static readonly List<Zone> zones = new List<Zone>();

    public static void Add(Vector2 centre, float radius, float until)
    {
        zones.Add(new Zone { centre = centre, radius = radius, until = until });
    }

    public static void Clear() => zones.Clear();

    // True if the target is inside smoke, or the line from the monster to it passes through smoke.
    public static bool Blocks(Vector2 from, Vector2 to)
    {
        zones.RemoveAll(z => Time.time >= z.until);
        foreach (Zone zone in zones)
        {
            if ((to - zone.centre).sqrMagnitude <= zone.radius * zone.radius)
                return true;

            Vector2 line = to - from;
            float length = line.sqrMagnitude;
            float t = length > 0f ? Mathf.Clamp01(Vector2.Dot(zone.centre - from, line) / length) : 0f;
            Vector2 closest = from + line * t;
            if ((closest - zone.centre).sqrMagnitude <= zone.radius * zone.radius)
                return true;
        }
        return false;
    }

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
    static void ResetStatics() => zones.Clear();
}