using System.Collections.Generic;
using NavMeshPlus.Components;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Tilemaps;

namespace NoWayOut.Maze
{
    /// <summary>
    /// Builds the maze at the grid size of the selected job's tier, then hands the grid
    /// to MazeShiftController. Floor, border, posts and fixed walls are painted onto
    /// tilemaps. Shifting walls are built as objects from your wall sprites, so the
    /// existing shift and navmesh code toggles them as before.
    /// Put this on the same object as MazeShiftController and leave its Wall Root empty.
    /// The maze is built above the Safe Base, with a gap in the bottom border as its entrance.
    /// The base floor goes on its own tilemap, marked Not Walkable, so the monster cannot enter.
    /// If anything required is missing, nothing is generated and the old scene walls are used.
    /// </summary>
    [DefaultExecutionOrder(-100)]   // runs before MazeShiftController reads the walls
    [RequireComponent(typeof(MazeShiftController))]
    public sealed class MazeGenerator : MonoBehaviour
    {
        const int NotWalkableArea = 1;

        [Header("Tilemaps: under the same Grid, outside Walls")]
        [SerializeField] private Tilemap floorTilemap;
        [SerializeField] private Tilemap wallTilemap;
        [SerializeField] private Tilemap outerWallTilemap;
        [Tooltip("Floor inside the safe base. Give this tilemap a NavMesh Modifier set to Not Walkable.")]
        [SerializeField] private Tilemap safeBaseFloorTilemap;

        [Header("Art: one is picked at random from each list")]
        [SerializeField] private TileBase[] floorTiles;
        [Tooltip("The top and side outer walls, and the sides of the safe base.")]
        [SerializeField] private TileBase[] borderTiles;
        [Tooltip("Optional. The bottom outer wall, its two corners and the bottom of the safe base. Left empty, Border Tiles are used.")]
        [SerializeField] private TileBase[] bottomBorderTiles;
        [Tooltip("The 1-tile pillars where walls meet, plus any fixed wall segments.")]
        [SerializeField] private TileBase[] fixedWallTiles;
        [Tooltip("The moving walls. Use the same pivot as your wall tiles.")]
        [SerializeField] private Sprite[] shiftingWallSprites;
        [Tooltip("Optional. Left empty, Floor Tiles are used inside the safe base.")]
        [SerializeField] private TileBase[] safeBaseFloorTiles;

        [Header("Layout")]
        [Tooltip("Floor tiles across each maze cell. This is also the length of each shifting wall.")]
        [SerializeField, Min(1)] private int roomTiles = 2;

        [Header("Safe base")]
        [Tooltip("An empty object, outside Walls, at the centre of the safe base. The maze is built above it. Put the deposit zone and player spawn under it.")]
        [SerializeField] private Transform safeBase;

        [Header("Grid")]
        [Tooltip("Tiles inside the border when no job is selected, such as when you press Play in the Gameplay scene.")]
        [SerializeField, Min(2)] private int fallbackInsideTiles = 17;
        [Tooltip("The largest Maze Grid Size on any tier, in tiles. Tiles in that area are cleared before painting.")]
        [SerializeField, Min(2)] private int maxInsideTiles = 17;
        [Tooltip("Chance for a wall segment to be fixed instead of shifting. 0 makes every segment shift.")]
        [SerializeField, Range(0f, 1f)] private float fixedWallChance;
        [Tooltip("Random rewires per cell before the game starts.")]
        [SerializeField, Min(0)] private int shufflesPerCell = 2;
        [Tooltip("Removes the old hand-placed walls under this object when Play starts. The scene file keeps them.")]
        [SerializeField] private bool removeExistingChildren = true;

        [Header("Enemy (optional)")]
        [Tooltip("Moved to the cell farthest from the Safe Base.")]
        [SerializeField] private Transform enemy;

        [Header("Dropped items")]
        [Tooltip("Size of dropped tools on the floor, in units.")]
        [SerializeField, Min(0.1f)] private float droppedToolSize = 0.75f;

        [Header("Mini map")]
        [SerializeField] private Transform miniMapCamera;

        [Header("Items (order: H01-H08, P01-P08, M01-M08)")]
        [SerializeField] private GameObject[] hospitalItems;
        [SerializeField] private GameObject[] prisonItems;
        [SerializeField] private GameObject[] mansionItems;

        private Vector3Int origin;   // tile at the bottom-left corner of the border
        private Vector2 tileSize;
        private int pitch;           // tiles from one cell to the next: room plus one wall
        private int doorColumn;
        private Sprite footprintSprite;
        private MazeShiftController shiftController;

        public int GridSize { get; private set; }

        private void Awake()
        {
            if (!CanGenerate())
                return;

            pitch = roomTiles + 1;
            GridSize = GetGridSize();
            PositionMiniMapCamera();
            tileSize = wallTilemap.layoutGrid.cellSize;
            doorColumn = GridSize / 2;
            origin = GetOrigin(GridSize);

            if (removeExistingChildren)
                RemoveChildren();

            ClearTiles();
            PaintFloor();
            PaintBorderAndPosts();
            BuildInteriorWalls();
            PaintSafeBase();

            // Keeps the enemy's agent off until the navmesh exists, so it does not
            // fail to attach while the maze is still being built.
            NavMeshAgent enemyAgent = enemy != null ? enemy.GetComponent<NavMeshAgent>() : null;
            if (enemyAgent != null)
                enemyAgent.enabled = false;

            Vector3 firstCellCenter = transform.InverseTransformPoint(GetCellWorldPosition(0, 0));
            shiftController = GetComponent<MazeShiftController>();
            shiftController.MazeChanged += OnFirstNavMeshReady;
            shiftController.ConfigureGrid(transform, GridSize, GridSize, firstCellCenter,
                                                              new Vector2(pitch * tileSize.x, pitch * tileSize.y),
                                                              GridSize * GridSize * shufflesPerCell);
            PlaceEnemy();
            SpawnItems();

            Debug.Log($"MazeGenerator built a {GridSize}x{GridSize} maze: {InsideTiles(GridSize)} tiles inside the border.", this);
        }

        /// <summary>World position of a cell's centre. Row 0 is next to the Safe Base.</summary>
        public Vector3 GetCellWorldPosition(int row, int column)
        {
            float centre = 1 + roomTiles / 2f;
            return TileToWorld(column * pitch + centre, row * pitch + centre);
        }

        private void SpawnItems()
        {
            var cells = new List<int>();
            var nearEdgeCells = new List<int>();
            int firstDistantRow = Mathf.Max(1, GridSize / 2 - 1);
            for (int row = firstDistantRow; row < GridSize; row++)
            {
                for (int column = 0; column < GridSize; column++)
                {
                    if (row == GridSize - 1 && column == doorColumn)
                        continue; // leave the enemy start clear

                    int cell = row * GridSize + column;
                    if (row == GridSize - 1 || column == 0 || column == GridSize - 1)
                        cells.Add(cell);
                    else if (row == GridSize - 2 || column == 1 || column == GridSize - 2)
                        nearEdgeCells.Add(cell);
                }
            }

            int outerEdgeCount = cells.Count;
            cells.AddRange(nearEdgeCells);
            if (cells.Count < 13)
            {
                Debug.LogError("The maze needs at least 13 distant edge cells for item spawn points.", this);
                return;
            }

            var spawnPoints = new List<Transform>(13);
            for (int i = 0; i < 13; i++)
            {
                int randomIndex = Random.Range(i, i < outerEdgeCount ? outerEdgeCount : cells.Count);
                int chosenCell = cells[randomIndex];
                cells[randomIndex] = cells[i];
                cells[i] = chosenCell;

                int cell = cells[i];
                var point = new GameObject($"Item Spawn Point {i + 1}").transform;
                point.SetParent(transform);
                point.position = GetCellWorldPosition(cell / GridSize, cell % GridSize);
                spawnPoints.Add(point);
            }

            Jobs job = JobSession.SelectedJob;
            JobLocation location = job != null ? job.Location : JobLocation.Hospital;
            GameObject[] items = location == JobLocation.Prison ? prisonItems
                               : location == JobLocation.Mansion ? mansionItems : hospitalItems;
            string prefix = location == JobLocation.Prison ? "P" : location == JobLocation.Mansion ? "M" : "H";

            if (items == null || items.Length != 8 || new HashSet<GameObject>(items).Count != 8)
            {
                Debug.LogError($"Assign eight different {location} item prefabs in MazeGenerator.", this);
                return;
            }

            foreach (GameObject item in items)
            {
                if (item == null)
                {
                    Debug.LogError($"A {location} item prefab is missing in MazeGenerator.", this);
                    return;
                }
            }

            if (job != null && job.TierSettings == null)
            {
                Debug.LogError("The selected job needs tier settings to spawn its items.", this);
                return;
            }

            int decoyCount = job != null ? job.TierSettings.DecoyCount : 2;
            if (decoyCount < 0 || decoyCount >= items.Length || decoyCount + 1 > spawnPoints.Count)
            {
                Debug.LogError($"Invalid decoy count {decoyCount} for {location}.", this);
                return;
            }

            int correctNumber = 0;
            if (job != null && (string.IsNullOrEmpty(job.CorrectItemId) || job.CorrectItemId.Length != 3 ||
                                !int.TryParse(job.CorrectItemId.Substring(1), out correctNumber) ||
                                job.CorrectItemId != $"{prefix}{correctNumber:00}" ||
                                correctNumber < 1 || correctNumber > items.Length))
            {
                Debug.LogError($"The correct item ID must be {prefix}01 to {prefix}08.", this);
                return;
            }

            int correctIndex = job != null ? correctNumber - 1 : Random.Range(0, items.Length);
            var decoyIndexes = new List<int>();
            for (int i = 0; i < items.Length; i++)
                if (i != correctIndex)
                    decoyIndexes.Add(i);

            var chosenIndexes = new List<int> { correctIndex };
            for (int i = 0; i < decoyCount; i++)
            {
                int randomIndex = Random.Range(i, decoyIndexes.Count);
                int chosenDecoy = decoyIndexes[randomIndex];
                decoyIndexes[randomIndex] = decoyIndexes[i];
                decoyIndexes[i] = chosenDecoy;
                chosenIndexes.Add(chosenDecoy);
            }

            TilemapRenderer wallRenderer = wallTilemap.GetComponent<TilemapRenderer>();
            for (int i = 0; i < chosenIndexes.Count; i++)
            {
                int randomIndex = Random.Range(i, spawnPoints.Count);
                Transform chosenPoint = spawnPoints[randomIndex];
                spawnPoints[randomIndex] = spawnPoints[i];
                spawnPoints[i] = chosenPoint;

                int itemIndex = chosenIndexes[i];
                GameObject item = Instantiate(items[itemIndex], spawnPoints[i].position, Quaternion.identity, spawnPoints[i]);
                item.name = items[itemIndex].name;
                var pickup = item.AddComponent<MazeItemPickup>();
                pickup.Initialize($"{prefix}{itemIndex + 1:00}");
                item.AddComponent<CircleCollider2D>().isTrigger = true;

                if (item.TryGetComponent(out SpriteRenderer sprite))
                {
                    sprite.color = itemIndex == correctIndex ? Color.green : Color.white;
                    if (wallRenderer != null)
                    {
                        sprite.sortingLayerID = wallRenderer.sortingLayerID;
                        sprite.sortingOrder = wallRenderer.sortingOrder;
                    }
                }
            }
        }

        // Drops a job item on the floor, such as when the player is revived.
        public void DropJobItem(string itemId, Vector3 position)
        {
            GameObject prefab = GetItemPrefab(itemId);
            if (prefab == null)
            {
                Debug.LogWarning($"No item prefab found for {itemId}, so it could not be dropped.", this);
                return;
            }

            GameObject item = Instantiate(prefab, position, Quaternion.identity, transform);
            item.name = prefab.name;
            item.AddComponent<MazeItemPickup>().Initialize(itemId);
            item.AddComponent<CircleCollider2D>().isTrigger = true;
            MatchWallSorting(item);
            if (item.TryGetComponent(out SpriteRenderer sprite))
                sprite.color = JobSession.SelectedJob != null && itemId == JobSession.SelectedJob.CorrectItemId
                             ? Color.green : Color.white;
        }

        // Drops a hotbar tool on the floor, shown with its shop icon.
        public void DropTool(ShopItem tool, Vector3 position)
        {
            if (tool == null)
                return;

            var item = new GameObject($"Dropped {tool.displayName}");
            item.transform.SetParent(transform, false);
            item.transform.position = position;

            var sprite = item.AddComponent<SpriteRenderer>();
            sprite.sprite = tool.icon;
            if (tool.icon != null)
            {
                float largestSide = Mathf.Max(tool.icon.bounds.size.x, tool.icon.bounds.size.y);
                if (largestSide > 0f)
                    item.transform.localScale = Vector3.one * (droppedToolSize / largestSide);
            }

            item.AddComponent<MazeItemPickup>().InitializeTool(tool);
            item.AddComponent<CircleCollider2D>().isTrigger = true;
            MatchWallSorting(item);
        }

        private GameObject GetItemPrefab(string itemId)
        {
            if (string.IsNullOrEmpty(itemId) || itemId.Length < 2 || !int.TryParse(itemId.Substring(1), out int number))
                return null;

            GameObject[] items = itemId[0] == 'P' ? prisonItems : itemId[0] == 'M' ? mansionItems : hospitalItems;
            int index = number - 1;
            return items != null && index >= 0 && index < items.Length ? items[index] : null;
        }

        private void MatchWallSorting(GameObject item)
        {
            TilemapRenderer wallRenderer = wallTilemap.GetComponent<TilemapRenderer>();
            if (wallRenderer != null && item.TryGetComponent(out SpriteRenderer sprite))
            {
                sprite.sortingLayerID = wallRenderer.sortingLayerID;
                sprite.sortingOrder = wallRenderer.sortingOrder;
            }
        }

        private bool CanGenerate()
        {
            string problem = null;
            if (floorTilemap == null || wallTilemap == null || outerWallTilemap == null)
                problem = "Assign the Floor, Inner Walls and Outer Walls tilemaps.";
            else if (IsEmpty(floorTiles) || IsEmpty(borderTiles) || IsEmpty(fixedWallTiles) || IsEmpty(shiftingWallSprites))
                problem = "Add at least one Floor, Border and Fixed Wall tile and one Shifting Wall Sprite, with no empty slots.";
            else if (safeBase != null && safeBaseFloorTilemap == null)
                problem = "Assign the Safe Base Floor tilemap.";
            else if (floorTilemap.transform.IsChildOf(transform) || wallTilemap.transform.IsChildOf(transform) ||
                     outerWallTilemap.transform.IsChildOf(transform))
                problem = "Move the tilemaps out of Walls, or they would be removed.";
            else if (safeBase != null && safeBase.IsChildOf(transform))
                problem = "Move the Safe Base out of Walls, or it would be removed.";

            if (problem != null)
            {
                Debug.LogError($"MazeGenerator: {problem} Using the old scene walls.", this);
                return false;
            }

            if (transform.rotation != Quaternion.identity || transform.lossyScale != Vector3.one)
                Debug.LogWarning("MazeGenerator: Walls should have rotation 0 and scale 1, or walls may not line up.", this);

            return true;
        }

        // Maze Grid Size counts the tiles inside the border. Each cell adds Room Tiles
        // plus one wall tile, so with 2-tile rooms the valid sizes are 5, 8, 11, 14, 17, 20...
        private int GetGridSize()
        {
            Jobs job = JobSession.SelectedJob;
            int tiles = job != null && job.TierSettings != null ? job.TierSettings.MazeGridSize : fallbackInsideTiles;
            return TilesToCells(tiles);
        }

        private int TilesToCells(int tiles)
        {
            int cells = Mathf.Max(2, (tiles + 1) / pitch);
            if (InsideTiles(cells) != tiles)
                Debug.LogWarning($"Maze Grid Size {tiles} does not fit the wall pattern, so {InsideTiles(cells)} was used.", this);

            return cells;
        }

        private int InsideTiles(int cells) => cells * pitch - 1;

        private void PositionMiniMapCamera()
        {
            if (miniMapCamera == null)
                return;

            switch (InsideTiles(GridSize))
            {
                case 17:
                    miniMapCamera.position = new Vector3(-1.4f, 9.41f, -25.5f);
                    break;
                case 23:
                    miniMapCamera.position = new Vector3(-1.4f, 12.2f, -32f);
                    break;
                case 29:
                    miniMapCamera.position = new Vector3(-1.4f, 15.5f, -39f);
                    break;
            }
        }

        // Puts the safe base just below the bottom border, under the middle cell's gap.
        private Vector3Int GetOrigin(int size)
        {
            if (safeBase != null)
            {
                Vector3 baseLocal = wallTilemap.WorldToLocal(safeBase.position);
                float gapCentre = (size / 2) * pitch + 1 + roomTiles / 2f;
                return new Vector3Int(Mathf.RoundToInt(baseLocal.x / tileSize.x - gapCentre),
                                      Mathf.RoundToInt(baseLocal.y / tileSize.y + roomTiles / 2f), 0);
            }

            Vector3Int centreTile = wallTilemap.WorldToCell(transform.position);
            int half = size * pitch / 2;
            return new Vector3Int(centreTile.x - half, centreTile.y - half, 0);
        }

        private Vector3 TileToWorld(float x, float y)
        {
            return wallTilemap.CellToWorld(origin) + new Vector3(x * tileSize.x, y * tileSize.y, 0f);
        }

        private void RemoveChildren()
        {
            for (int i = transform.childCount - 1; i >= 0; i--)
            {
                Transform child = transform.GetChild(i);
                child.gameObject.SetActive(false);
                child.SetParent(null);   // leaves the hierarchy now, so MazeShiftController cannot map it
                Destroy(child.gameObject);
            }
        }

        // Clears the area of the largest maze, so a smaller maze leaves nothing behind.
        private void ClearTiles()
        {
            int largest = Mathf.Max((maxInsideTiles + 1) / pitch, GridSize);
            Vector3Int start = GetOrigin(largest);
            int total = largest * pitch;

            for (int x = 0; x <= total; x++)
            {
                for (int y = 0; y <= total; y++)
                {
                    Vector3Int tile = start + new Vector3Int(x, y, 0);
                    floorTilemap.SetTile(tile, null);
                    wallTilemap.SetTile(tile, null);
                    outerWallTilemap.SetTile(tile, null);
                }
            }
        }

        // Floor goes under the walls too. Not Walkable on the walls still wins in the navmesh.
        private void PaintFloor()
        {
            int total = GridSize * pitch;
            for (int x = 0; x <= total; x++)
            {
                for (int y = 0; y <= total; y++)
                    floorTilemap.SetTile(origin + new Vector3Int(x, y, 0), Pick(floorTiles));
            }
        }

        private void PaintBorderAndPosts()
        {
            int total = GridSize * pitch;
            for (int i = 0; i <= total; i++)
            {
                PaintOuterTile(i, total, borderTiles);
                PaintOuterTile(0, i, borderTiles);
                PaintOuterTile(total, i, borderTiles);
            }

            // Painted last, so the bottom corners use the bottom border tiles.
            for (int i = 0; i <= total; i++)
            {
                if (!IsDoorGap(i))
                    PaintOuterTile(i, 0, BottomTiles);
            }

            for (int row = 0; row <= GridSize; row++)
            {
                for (int column = 0; column <= GridSize; column++)
                {
                    if (row == 0 || row == GridSize || column == 0 || column == GridSize)
                        continue;   // border posts are already painted

                    PaintTile(column * pitch, row * pitch, fixedWallTiles);
                }
            }
        }

        private bool IsDoorGap(int x)
        {
            int gapStart = doorColumn * pitch + 1;
            return safeBase != null && x >= gapStart && x < gapStart + roomTiles;
        }

        // A room-sized floor below the gap, closed in by border walls on the other three sides.
        private void PaintSafeBase()
        {
            if (safeBase == null)
                return;

            TileBase[] baseFloor = IsEmpty(safeBaseFloorTiles) ? floorTiles : safeBaseFloorTiles;
            int gapStart = doorColumn * pitch + 1;
            int left = gapStart - 1;
            int right = gapStart + roomTiles;
            int bottom = -roomTiles - 1;

            for (int x = gapStart; x < right; x++)
            {
                for (int y = -roomTiles; y < 0; y++)
                {
                    Vector3Int tile = origin + new Vector3Int(x, y, 0);
                    floorTilemap.SetTile(tile, null);
                    wallTilemap.SetTile(tile, null);
                    outerWallTilemap.SetTile(tile, null);
                    safeBaseFloorTilemap.SetTile(tile, Pick(baseFloor));
                }
            }

            for (int y = bottom; y < 0; y++)
            {
                PaintOuterTile(left, y, borderTiles);
                PaintOuterTile(right, y, borderTiles);
            }

            for (int x = left; x <= right; x++)
                PaintOuterTile(x, bottom, BottomTiles);
        }

        // Shows the largest maze and the safe base in the Scene view when Walls is selected.
        private void OnDrawGizmosSelected()
        {
            if (wallTilemap == null)
                return;

            pitch = roomTiles + 1;
            tileSize = wallTilemap.layoutGrid.cellSize;
            int cells = Mathf.Max(2, (maxInsideTiles + 1) / pitch);
            origin = GetOrigin(cells);
            int total = cells * pitch + 1;

            Gizmos.color = Color.yellow;
            Vector3 corner = TileToWorld(0f, 0f);
            Gizmos.DrawWireCube(corner + new Vector3(total * tileSize.x, total * tileSize.y, 0f) / 2f,
                                new Vector3(total * tileSize.x, total * tileSize.y, 0f));

            if (safeBase == null)
                return;

            int gapStart = (cells / 2) * pitch + 1;
            Gizmos.color = Color.green;
            Gizmos.DrawWireCube(TileToWorld(gapStart + roomTiles / 2f, -roomTiles / 2f),
                                new Vector3(roomTiles * tileSize.x, roomTiles * tileSize.y, 0f));
        }

        private TileBase[] BottomTiles => IsEmpty(bottomBorderTiles) ? borderTiles : bottomBorderTiles;

        private void PaintTile(int x, int y, TileBase[] options)
        {
            wallTilemap.SetTile(origin + new Vector3Int(x, y, 0), Pick(options));
        }

        private void PaintOuterTile(int x, int y, TileBase[] options)
        {
            outerWallTilemap.SetTile(origin + new Vector3Int(x, y, 0), Pick(options));
        }

        private void BuildInteriorWalls()
        {
            int last = GridSize - 1;

            // Walls between left and right neighbours. The starting maze opens all of
            // these, so they must all be able to shift.
            for (int row = 0; row < GridSize; row++)
            {
                for (int column = 0; column < last; column++)
                    BuildShiftingWall((column + 1) * pitch, row * pitch + 1, true, $"Wall R{row} C{column} Right");
            }

            // Walls between up and down neighbours. The rightmost column joins the rows
            // at the start, so it must shift. Any other one can be fixed.
            for (int row = 0; row < last; row++)
            {
                for (int column = 0; column < GridSize; column++)
                {
                    int x = column * pitch + 1;
                    int y = (row + 1) * pitch;
                    if (column != last && Random.value < fixedWallChance)
                    {
                        for (int i = 0; i < roomTiles; i++)
                            PaintTile(x + i, y, fixedWallTiles);
                    }
                    else
                    {
                        BuildShiftingWall(x, y, false, $"Wall R{row} C{column} Up");
                    }
                }
            }
        }

        // One moving wall: a collider and an invisible navmesh footprint that cover
        // the full wall sprites, plus one visible sprite per tile.
        private void BuildShiftingWall(int startX, int startY, bool vertical, string objectName)
        {
            Vector2 size = vertical ? new Vector2(tileSize.x, roomTiles * tileSize.y)
                                    : new Vector2(roomTiles * tileSize.x, tileSize.y);
            Vector3 centre = vertical ? TileToWorld(startX + 0.5f, startY + roomTiles / 2f)
                                      : TileToWorld(startX + roomTiles / 2f, startY + 0.5f);

            var wall = new GameObject(objectName) { tag = "Shifting", layer = wallTilemap.gameObject.layer };
            wall.transform.SetParent(transform, false);
            wall.transform.position = centre;
            // The wall sprites extend half a tile above their base tile.
            Vector2 colliderSize = new Vector2(size.x, size.y + tileSize.y * 0.5f);
            Vector2 colliderOffset = new Vector2(0f, tileSize.y * 0.25f);
            BoxCollider2D wallCollider = wall.AddComponent<BoxCollider2D>();
            wallCollider.size = colliderSize;
            wallCollider.offset = colliderOffset;

            var footprint = new GameObject("NavMesh Footprint") { layer = wall.layer };
            footprint.transform.SetParent(wall.transform, false);
            footprint.transform.localPosition = colliderOffset;
            footprint.transform.localScale = new Vector3(colliderSize.x, colliderSize.y, 1f);
            var footprintRenderer = footprint.AddComponent<SpriteRenderer>();
            footprintRenderer.sprite = GetFootprintSprite();
            footprintRenderer.color = Color.clear;   // invisible, but still read by the navmesh
            AddModifier(footprint, ignore: false);

            TilemapRenderer wallRenderer = wallTilemap.GetComponent<TilemapRenderer>();
            for (int i = 0; i < roomTiles; i++)
            {
                int x = vertical ? startX : startX + i;
                int y = vertical ? startY + i : startY;

                var art = new GameObject($"Tile {i}") { layer = wall.layer };
                art.transform.SetParent(wall.transform, false);
                art.transform.position = TileToWorld(x + 0.5f, y + 0.5f);

                var renderer = art.AddComponent<SpriteRenderer>();
                renderer.sprite = Pick(shiftingWallSprites);
                renderer.spriteSortPoint = SpriteSortPoint.Pivot;   // sorts like the wall tiles
                if (wallRenderer != null)
                {
                    renderer.sortingLayerID = wallRenderer.sortingLayerID;
                    renderer.sortingOrder = wallRenderer.sortingOrder;
                    renderer.sharedMaterial = wallRenderer.sharedMaterial;
                }

                AddModifier(art, ignore: true);
            }
        }

        private static void AddModifier(GameObject target, bool ignore)
        {
            NavMeshModifier modifier = target.AddComponent<NavMeshModifier>();
            modifier.ignoreFromBuild = ignore;
            modifier.overrideArea = !ignore;
            modifier.area = NotWalkableArea;
        }

        private Sprite GetFootprintSprite()
        {
            if (footprintSprite == null)
            {
                Texture2D texture = Texture2D.whiteTexture;
                footprintSprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height),
                                                new Vector2(0.5f, 0.5f), texture.width);   // exactly 1 unit
            }

            return footprintSprite;
        }

        private void PlaceEnemy()
        {
            if (enemy == null)
                return;

            Vector3 target = GetCellWorldPosition(GridSize - 1, doorColumn);
            target.z = enemy.position.z;

            enemy.position = target;   // the agent is turned on later, once the navmesh exists
        }

        // The navmesh is built a moment after Play starts. An agent that started before
        // then is not attached to it, so it is placed onto the navmesh once it exists.
        private void OnFirstNavMeshReady()
        {
            shiftController.MazeChanged -= OnFirstNavMeshReady;

            NavMeshAgent agent = enemy != null ? enemy.GetComponent<NavMeshAgent>() : null;
            if (agent == null)
                return;

            var filter = new NavMeshQueryFilter { agentTypeID = agent.agentTypeID, areaMask = agent.areaMask };
            if (!NavMesh.SamplePosition(enemy.position, out NavMeshHit hit, 2f, filter))
            {
                Debug.LogWarning("No walkable navmesh near the enemy. Check the floor tilemap has a Navigation Modifier set to Walkable.", enemy);
                return;
            }

            enemy.position = new Vector3(hit.position.x, hit.position.y, enemy.position.z);
            agent.enabled = true;
            agent.Warp(enemy.position);
        }

        private void OnDestroy()
        {
            if (shiftController != null)
                shiftController.MazeChanged -= OnFirstNavMeshReady;
        }

        private static T Pick<T>(T[] options) where T : Object
        {
            return options[Random.Range(0, options.Length)];
        }

        private static bool IsEmpty<T>(T[] options) where T : Object
        {
            if (options == null)
                return true;

            foreach (T option in options)
            {
                if (option == null)
                    return true;   // an empty slot in the list would paint a hole
            }

            return options.Length == 0;
        }
    }
}
