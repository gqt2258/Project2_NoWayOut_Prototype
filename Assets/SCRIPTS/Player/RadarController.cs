using TMPro;
using UnityEngine;
using NoWayOut.Maze;

// Controls the player-centred radar. The existing icons are kept hidden until a locator is used.
public sealed class RadarController : MonoBehaviour
{
    [Tooltip("Item Locator: how long the nearest item shows on the radar.")]
    [SerializeField, Min(0.1f)] private float revealSeconds = 2f;
    [Tooltip("Monster Locator: how long the monster shows on the radar.")]
    [SerializeField, Min(0.1f)] private float monsterRevealSeconds = 4f;
    [SerializeField, Range(0.02f, 0.2f)] private float edgeMargin = 0.08f;

    [Header("Marker art (optional)")]
    [Tooltip("Item Locator marker. Empty = the found item's own radar icon.")]
    [SerializeField] private Sprite itemMarkerIcon;
    [Tooltip("Monster Locator marker. Empty = the monster's Enemy Minimap Icon picture.")]
    [SerializeField] private Sprite monsterMarkerIcon;
    [Tooltip("How big the item, monster and partner markers are on the radar, in maze tiles.")]
    [SerializeField, Min(0.2f)] private float markerSize = 1.5f;

    [Header("Co-op partner")]
    [Tooltip("Always show the other player on the radar (pinned to the edge when far away).")]
    [SerializeField] private bool showPartner = true;
    [Tooltip("Optional. The partner's radar icon. Empty = the Player Minimap Icon's picture, tinted.")]
    [SerializeField] private Sprite partnerIcon;
    [SerializeField] private Color partnerColour = new Color(0.3f, 0.85f, 1f);

    private Camera radarCamera;
    private Transform baseIndicator;
    private Transform safeBase;
    private Transform enemy;
    private SpriteRenderer itemMarker;
    private SpriteRenderer monsterMarker;
    private SpriteRenderer partnerMarker;
    private SpriteRenderer playerIconSource;
    private Transform partner;
    private TextMeshProUGUI distanceText;
    private float tileSize = 1f;
    private float itemHideTime;
    private float monsterHideTime;
    private Transform revealedItem;
    private JobTier tier;

    private void Awake()
    {
        Transform cameraObject = transform.Find("MiniMap Camera");
        radarCamera = cameraObject != null ? cameraObject.GetComponent<Camera>() : null;
        baseIndicator = transform.Find("Base Indicator");

        Transform playerIcon = transform.Find("Player Minimap Icon");
        if (playerIcon != null && playerIcon.TryGetComponent(out SpriteRenderer playerSprite))
        {
            playerSprite.enabled = false;
            playerIconSource = playerSprite;
        }

        GameObject baseObject = GameObject.Find("Safe Base");
        safeBase = baseObject != null ? baseObject.transform : null;

        Grid grid = FindAnyObjectByType<Grid>();
        if (grid != null)
            tileSize = Mathf.Max(0.01f, grid.cellSize.x);

        Jobs job = JobSession.SelectedJob;
        tier = job != null ? job.Tier : JobTier.Low;

        EnemyMovement enemyMovement = FindAnyObjectByType<EnemyMovement>();
        if (enemyMovement != null)
        {
            enemy = enemyMovement.transform;
            Transform enemyIcon = enemy.Find("Enemy Minimap Icon");
            if (enemyIcon != null && enemyIcon.TryGetComponent(out SpriteRenderer sprite))
            {
                sprite.enabled = false;
                monsterMarker = MakeMarker("Monster Radar Marker", sprite);
                if (monsterMarkerIcon != null)
                {
                    monsterMarker.sprite = monsterMarkerIcon;
                    monsterMarker.color = Color.white;
                    SizeMarker(monsterMarker);
                }
            }
        }

        foreach (MazeItemPickup pickup in FindObjectsByType<MazeItemPickup>())
            pickup.SetRadarVisible(false);

        if (radarCamera == null || baseIndicator == null || safeBase == null)
            Debug.LogWarning("Radar needs a MiniMap Camera, Base Indicator, and Safe Base.", this);
        else
            radarCamera.cullingMask = 1 << baseIndicator.gameObject.layer;

        if (tier == JobTier.Low)
            CreateDistanceText();
    }

    private void LateUpdate()
    {
        if (radarCamera == null || safeBase == null || baseIndicator == null)
            return;

        float baseDistance = Vector2.Distance(transform.position, safeBase.position);
        bool showBase = tier != JobTier.High || baseDistance <= 6f * tileSize;
        baseIndicator.gameObject.SetActive(showBase);
        if (showBase)
            PlaceOnEdge(baseIndicator, safeBase.position);

        if (distanceText != null)
            distanceText.text = $"{Mathf.CeilToInt(baseDistance / tileSize)} tiles";

        UpdateMarker(itemMarker, revealedItem, itemHideTime);
        UpdateMarker(monsterMarker, enemy, monsterHideTime);
        UpdatePartnerMarker();
    }

    // Co-op: the other player's dot, always shown.
    private void UpdatePartnerMarker()
    {
        if (!showPartner || !JobSession.IsCoop)
            return;

        if (partner == null)
            partner = NetworkPlayerAvatar.PartnerTransform;

        if (partner != null && partnerMarker == null)
        {
            Sprite sprite = partnerIcon != null ? partnerIcon : playerIconSource != null ? playerIconSource.sprite : null;
            if (sprite == null || baseIndicator == null)
                return;   // nothing to draw it with

            GameObject marker = new GameObject("Partner Radar Marker");
            marker.transform.SetParent(transform);
            partnerMarker = marker.AddComponent<SpriteRenderer>();
            partnerMarker.sprite = sprite;
            partnerMarker.color = partnerColour;
            partnerMarker.sortingOrder = playerIconSource != null ? playerIconSource.sortingOrder + 1 : 10;
            UseRadarLook(partnerMarker);
        }

        if (partnerMarker == null)
            return;
        NetworkPlayerAvatar partnerAvatar = partner != null ? partner.GetComponent<NetworkPlayerAvatar>() : null;
        PlayerHealth myHealth = GetComponentInParent<PlayerHealth>();
        // Hidden when the partner is out, or when this player is out (they're watching the partner).
        partnerMarker.enabled = partner != null && (partnerAvatar == null || !partnerAvatar.IsOut) &&
                                (myHealth == null || !myHealth.IsOut);
        if (partner != null)
            partnerMarker.transform.position = ClampToRadar(partner.position);
    }

    public void RevealTool(ShopItem tool)
    {
        if (tool == null || radarCamera == null)
            return;

        if (tool.itemId == "eq_itemloc")   // Item Locator
        {
            MazeItemPickup nearest = null;
            float nearestDistance = float.PositiveInfinity;
            foreach (MazeItemPickup pickup in FindObjectsByType<MazeItemPickup>())
            {
                if (!pickup.IsJobItem)
                    continue;

                float distance = (pickup.transform.position - transform.position).sqrMagnitude;
                if (distance < nearestDistance)
                {
                    nearest = pickup;
                    nearestDistance = distance;
                }
            }

            if (nearest == null)
                return;

            revealedItem = nearest.transform;
            SpriteRenderer icon = nearest.GetRadarIcon();
            if (icon != null)
            {
                if (itemMarker == null)
                    itemMarker = MakeMarker("Item Radar Marker", icon);
                itemMarker.sprite = itemMarkerIcon != null ? itemMarkerIcon : icon.sprite;
                itemMarker.color = itemMarkerIcon != null ? Color.white : icon.color;
                SizeMarker(itemMarker);
            }
            itemHideTime = Time.time + revealSeconds;
        }
        else if (tool.itemId == "eq_monsterloc" && enemy != null)
        {
            monsterHideTime = Time.time + monsterRevealSeconds;
        }
    }

    private SpriteRenderer MakeMarker(string markerName, SpriteRenderer source)
    {
        GameObject marker = new GameObject(markerName);
        marker.transform.SetParent(transform);
        SpriteRenderer sprite = marker.AddComponent<SpriteRenderer>();
        sprite.sprite = source.sprite;
        sprite.color = source.color;
        sprite.sortingOrder = source.sortingOrder + 5;
        UseRadarLook(sprite);
        sprite.enabled = false;
        return sprite;
    }

    // Drawn by the radar camera (same layer as the Base Indicator), unlit so the 2D lights
    // don't darken it, and sized in maze tiles whatever the sprite's own size.
    private void UseRadarLook(SpriteRenderer sprite)
    {
        if (baseIndicator != null)
        {
            sprite.gameObject.layer = baseIndicator.gameObject.layer;
            if (baseIndicator.TryGetComponent(out SpriteRenderer baseSprite))
            {
                sprite.sharedMaterial = baseSprite.sharedMaterial;
                sprite.sortingLayerID = baseSprite.sortingLayerID;
            }
        }
        SizeMarker(sprite);
    }

    private void SizeMarker(SpriteRenderer sprite)
    {
        if (sprite == null || sprite.sprite == null)
            return;
        float spriteSize = Mathf.Max(sprite.sprite.bounds.size.x, sprite.sprite.bounds.size.y);
        float parentScale = Mathf.Max(0.01f, transform.lossyScale.x);
        sprite.transform.localScale = Vector3.one * (markerSize * tileSize / Mathf.Max(0.01f, spriteSize) / parentScale);
    }

    private void UpdateMarker(SpriteRenderer marker, Transform target, float hideTime)
    {
        if (marker == null)
            return;

        marker.enabled = target != null && Time.time < hideTime;
        if (marker.enabled)
            marker.transform.position = ClampToRadar(target.position);
    }

    private void PlaceOnEdge(Transform indicator, Vector3 target)
    {
        Vector3 view = radarCamera.WorldToViewportPoint(target);
        Vector2 direction = new Vector2(view.x - 0.5f, view.y - 0.5f);
        if (direction.sqrMagnitude < 0.0001f)
            direction = Vector2.down;

        indicator.rotation = Quaternion.Euler(0f, 0f,
            Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg - 90f);

        float iconRadius = 0f;
        if (indicator.TryGetComponent(out SpriteRenderer icon))
        {
            Vector3 centre = radarCamera.WorldToViewportPoint(icon.bounds.center);
            Vector3 corner = radarCamera.WorldToViewportPoint(icon.bounds.center + icon.bounds.extents);
            iconRadius = Vector2.Distance(centre, corner);
        }

        float radius = Mathf.Max(0f, 0.5f - edgeMargin - iconRadius);
        direction = direction.normalized * radius;
        indicator.position = ViewportPosition(new Vector2(0.5f, 0.5f) + direction);
    }

    private Vector3 ClampToRadar(Vector3 target)
    {
        Vector3 view = radarCamera.WorldToViewportPoint(target);
        Vector2 direction = new Vector2(view.x - 0.5f, view.y - 0.5f);
        direction = Vector2.ClampMagnitude(direction, 0.5f - edgeMargin);
        return ViewportPosition(new Vector2(0.5f, 0.5f) + direction);
    }

    private Vector3 ViewportPosition(Vector2 viewport)
    {
        float depth = radarCamera.WorldToViewportPoint(transform.position).z;
        return radarCamera.ViewportToWorldPoint(new Vector3(viewport.x, viewport.y, depth));
    }

    private void CreateDistanceText()
    {
        GameObject miniMap = GameObject.Find("Mini Map");
        if (miniMap == null)
            return;

        GameObject label = new GameObject("Base Distance", typeof(RectTransform), typeof(TextMeshProUGUI));
        label.transform.SetParent(miniMap.transform, false);
        RectTransform rect = (RectTransform)label.transform;
        rect.anchorMin = new Vector2(0.5f, 0f);
        rect.anchorMax = new Vector2(0.5f, 0f);
        rect.anchoredPosition = new Vector2(0f, 15f);
        rect.sizeDelta = new Vector2(100f, 24f);
        distanceText = label.GetComponent<TextMeshProUGUI>();
        distanceText.fontSize = 16f;
        distanceText.alignment = TextAlignmentOptions.Center;
        distanceText.raycastTarget = false;
    }
}