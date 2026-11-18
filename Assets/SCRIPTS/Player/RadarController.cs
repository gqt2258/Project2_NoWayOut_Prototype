using TMPro;
using UnityEngine;
using NoWayOut.Maze;

// Controls the player-centred radar. The existing icons are kept hidden until a locator is used.
public sealed class RadarController : MonoBehaviour
{
    [SerializeField, Min(0.1f)] private float revealSeconds = 2f;
    [SerializeField, Range(0.02f, 0.2f)] private float edgeMargin = 0.08f;

    private Camera radarCamera;
    private Transform baseIndicator;
    private Transform safeBase;
    private Transform enemy;
    private SpriteRenderer itemMarker;
    private SpriteRenderer monsterMarker;
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
            playerSprite.enabled = false;

        GameObject baseObject = GameObject.Find("Safe Base");
        safeBase = baseObject != null ? baseObject.transform : null;

        Grid grid = FindFirstObjectByType<Grid>();
        if (grid != null)
            tileSize = Mathf.Max(0.01f, grid.cellSize.x);

        Jobs job = JobSession.SelectedJob;
        tier = job != null ? job.Tier : JobTier.Low;

        EnemyMovement enemyMovement = FindFirstObjectByType<EnemyMovement>();
        if (enemyMovement != null)
        {
            enemy = enemyMovement.transform;
            Transform enemyIcon = enemy.Find("Enemy Minimap Icon");
            if (enemyIcon != null && enemyIcon.TryGetComponent(out SpriteRenderer sprite))
            {
                sprite.enabled = false;
                monsterMarker = MakeMarker("Monster Radar Marker", sprite);
            }
        }

        foreach (MazeItemPickup pickup in FindObjectsByType<MazeItemPickup>(FindObjectsSortMode.None))
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
    }

    public void RevealTool(ShopItem tool)
    {
        if (tool == null || radarCamera == null)
            return;

        if (tool.itemId == "eq_itemloc")
        {
            MazeItemPickup nearest = null;
            float nearestDistance = float.PositiveInfinity;
            foreach (MazeItemPickup pickup in FindObjectsByType<MazeItemPickup>(FindObjectsSortMode.None))
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
                itemMarker.sprite = icon.sprite;
                itemMarker.color = icon.color;
            }
            itemHideTime = Time.time + revealSeconds;
        }
        else if (tool.itemId == "eq_monsterloc" && enemy != null)
        {
            monsterHideTime = Time.time + revealSeconds;
        }
    }

    private SpriteRenderer MakeMarker(string markerName, SpriteRenderer source)
    {
        GameObject marker = new GameObject(markerName);
        marker.layer = source.gameObject.layer;
        marker.transform.SetParent(transform);
        marker.transform.localScale = Vector3.one / Mathf.Max(0.01f, transform.lossyScale.x);
        SpriteRenderer sprite = marker.AddComponent<SpriteRenderer>();
        sprite.sprite = source.sprite;
        sprite.color = source.color;
        sprite.sortingOrder = source.sortingOrder;
        sprite.enabled = false;
        return sprite;
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
