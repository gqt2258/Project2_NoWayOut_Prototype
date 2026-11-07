using System;
using System.Collections;
using System.Collections.Generic;
using NavMeshPlus.Components;
using TMPro;
using UnityEngine;

namespace NoWayOut.Maze
{
    /// <summary>
    /// Scene adapter for the maze. Attach this component to the Walls object.
    /// Shifting wall objects are matched to the midpoint of adjacent maze cells.
    /// </summary>
    public sealed class MazeShiftController : MonoBehaviour
    {
        [Header("Scene references")]
        [SerializeField] private Transform wallRoot;
        [SerializeField] private Transform player;
        [SerializeField] private NavMeshSurface navMeshSurface;

        [Header("Maze grid")]
        [SerializeField, Min(1)] private int rows = 13;
        [SerializeField, Min(1)] private int columns = 13;
        [SerializeField] private Vector2 firstCellCenter = new Vector2(-19.2f, -9.09f);
        [SerializeField] private Vector2 cellSpacing = new Vector2(3.445f, 3.515f);
        [SerializeField, Min(0.01f)] private float wallPositionTolerance = 0.25f;
        [SerializeField, Min(0)] private int playerLockRadius = 1;

        [Header("Shift timing")]
        [SerializeField, Min(0f)] private float automaticShiftIntervalSeconds;
        [SerializeField] private bool updateNavMeshAfterShift = true;

        [Header("Shift batch")]
        [Tooltip("Each rewire changes two wall segments, so 3 rewires changes 6 walls.")]
        [SerializeField, Min(1)] private int rewiresPerBatch = 3;

        [Header("Start layout")]
        [Tooltip("Random rewires before the first frame, so the maze does not start as straight rows. MazeGenerator sets this. 0 keeps the old start.")]
        [SerializeField, Min(0)] private int initialShuffles;

        [Header("Wall animation")]
        [Tooltip("How long a shifting wall takes to rise or sink. 0 makes walls appear and disappear instantly.")]
        [SerializeField, Min(0f)] private float wallAnimationSeconds = 0.4f;
        [Tooltip("How far the wall art sinks while disappearing, in units. Not used when Wall Shrink Frames are assigned.")]
        [SerializeField, Min(0f)] private float wallSinkDistance = 0.5f;
        [Tooltip("Optional. Frames from the full wall to the smallest. Played forwards when a wall disappears, backwards when it appears.")]
        [SerializeField] private Sprite[] wallShrinkFrames;
        [Tooltip("Optional. A Particle System prefab played on each tile of a wall as it disappears or appears.")]
        [SerializeField] private ParticleSystem wallDustPrefab;

        [Header("Shift warning")]
        [SerializeField] private TMP_Text shiftWarningText;
        [SerializeField, Min(0f)] private float warningLeadSeconds = 5f;
        [SerializeField] private string warningMessage = "WARNING!! Walls shifting in";

        private MazeCell[] maze;
        private GameObject[,] horizontalWalls;
        private GameObject[,] verticalWalls;
        private bool navMeshDirty;
        private bool navMeshUpdateRunning;
        private bool navMeshNeedsRebuild;
        private bool initialized;
        private bool warningRoutineRunning;
        private readonly Dictionary<GameObject, bool> wallTargets = new Dictionary<GameObject, bool>();
        private readonly Dictionary<GameObject, Coroutine> wallAnimations = new Dictionary<GameObject, Coroutine>();
        private readonly Dictionary<Transform, Vector3> artStartPositions = new Dictionary<Transform, Vector3>();
        private readonly Dictionary<SpriteRenderer, Sprite> artStartSprites = new Dictionary<SpriteRenderer, Sprite>();

        public event Action MazeChanged;

        public int Rows => rows;
        public int Columns => columns;

        private void Awake()
        {
            if (wallRoot == null)
                wallRoot = transform;

            if (player == null)
            {
                GameObject playerObject = GameObject.Find("Player");
                if (playerObject != null)
                    player = playerObject.transform;
            }

            if (navMeshSurface == null)
                navMeshSurface = FindAnyObjectByType<NavMeshSurface>();

            if (shiftWarningText == null)
            {
                GameObject warningObject = GameObject.Find("Wall Shifting Warning Text");
                if (warningObject != null)
                    shiftWarningText = warningObject.GetComponent<TMP_Text>();
            }

            HideShiftWarning();

            initialized = BuildMazeFromScene();
        }

        /// <summary>
        /// Called by MazeGenerator before Awake, so the walls it spawned are mapped
        /// with the matching grid size and spacing.
        /// </summary>
        public void ConfigureGrid(Transform root, int gridRows, int gridColumns, Vector2 firstCenter, Vector2 spacing, int shuffles)
        {
            if (initialized)
            {
                Debug.LogWarning("ConfigureGrid was called after the maze was built, so it was ignored.", this);
                return;
            }

            wallRoot = root;
            rows = gridRows;
            columns = gridColumns;
            firstCellCenter = firstCenter;
            cellSpacing = spacing;
            initialShuffles = shuffles;
        }

        private void Start()
        {
            if (!initialized)
                return;

            ApplyJobTierShiftInterval();
            RefreshLocksFromPlayer();
            ScrambleMaze(initialShuffles);
            ApplyWallStates(false);

            if (updateNavMeshAfterShift)
                QueueNavMeshUpdate(forceRebuild: true);

            if (automaticShiftIntervalSeconds > 0f)
                StartCoroutine(AutomaticShiftLoop());
        }

        private void ApplyJobTierShiftInterval()
        {
            PlayerJobScript playerJob = player != null ? player.GetComponent<PlayerJobScript>() : null;
            Jobs selectedJob = playerJob != null ? playerJob.CurrentJob : JobSession.SelectedJob;
            if (selectedJob == null || selectedJob.TierSettings == null)
                return;

            float shiftInterval = selectedJob.TierSettings.ShiftIntervalSeconds;
            if (shiftInterval > 0f)
                automaticShiftIntervalSeconds = shiftInterval;
        }

        /// <summary>Call this from a timer, trigger, puzzle event, or other gameplay code.</summary>
        public bool TryShiftAtCell(int row, int column)
        {
            if (row < 0 || row >= rows || column < 0 || column >= columns)
                return false;

            return TryShiftAtIndex(row * columns + column);
        }

        /// <summary>Call this when a game event already has the flattened maze-cell index.</summary>
        public bool TryShiftAtIndex(int cellIndex)
        {
            // A rewire closes one edge and opens one edge (two wall objects total).
            // Wait for NavMeshPlus to finish before accepting another one so two
            // separate rewires cannot overlap while navigation is rebuilding.
            if (!initialized || navMeshUpdateRunning || cellIndex < 0 || cellIndex >= maze.Length)
                return false;

            RefreshLocksFromPlayer();
            MazeCell[] trialMaze = CloneMaze(maze);
            if (!MazeShiftCore.ShiftMaze(trialMaze, rows, columns, cellIndex) || !PreservesPlayerEscape(trialMaze))
                return false;

            maze = trialMaze;
            ApplyWallStates(true);
            if (updateNavMeshAfterShift)
                QueueNavMeshUpdate();
            else
                MazeChanged?.Invoke();

            return true;
        }

        /// <summary>Convenience entry point for timers or events that should pick a valid cell.</summary>
        public bool TryShiftRandomUnlockedCell()
        {
            if (!initialized || navMeshUpdateRunning)
                return false;

            RefreshLocksFromPlayer();
            var candidates = new List<int>(maze.Length);
            for (int i = 0; i < maze.Length; i++)
            {
                if (maze[i].unlocked && HasParentEdge(maze[i]))
                    candidates.Add(i);
            }

            // Randomize the candidate order, then stop at the first legal rewire.
            for (int i = candidates.Count - 1; i > 0; i--)
            {
                int swapIndex = UnityEngine.Random.Range(0, i + 1);
                int value = candidates[i];
                candidates[i] = candidates[swapIndex];
                candidates[swapIndex] = value;
            }

            foreach (int index in candidates)
            {
                MazeCell[] trialMaze = CloneMaze(maze);
                if (MazeShiftCore.ShiftMaze(trialMaze, rows, columns, index) && PreservesPlayerEscape(trialMaze))
                {
                    maze = trialMaze;
                    ApplyWallStates(true);
                    if (updateNavMeshAfterShift)
                        QueueNavMeshUpdate();
                    else
                        MazeChanged?.Invoke();
                    return true;
                }
            }

            return false;
        }

        /// <summary>
        /// Performs the configured number of independent rewires, applies their wall
        /// changes together, and schedules one NavMeshPlus update for the batch.
        /// If the full batch cannot be found, nothing is applied.
        /// </summary>
        public bool TryShiftThreeRandomUnlockedCells()
        {
            return TryShiftRandomUnlockedCells(rewiresPerBatch);
        }

        public bool TryShiftRandomUnlockedCells(int shiftCount)
        {
            const int expectedWallChangesPerShift = 2;

            if (!initialized || navMeshUpdateRunning || shiftCount < 1)
                return false;

            RefreshLocksFromPlayer();
            MazeCell[] workingMaze = CloneMaze(maze);
            var changedEdges = new HashSet<int>();
            var usedRoots = new HashSet<int>();

            for (int shift = 0; shift < shiftCount; shift++)
            {
                var candidates = new List<int>(workingMaze.Length);
                for (int i = 0; i < workingMaze.Length; i++)
                {
                    if (!usedRoots.Contains(i) && workingMaze[i].unlocked && HasParentEdge(workingMaze[i]))
                        candidates.Add(i);
                }

                Shuffle(candidates);
                bool foundShift = false;

                foreach (int candidate in candidates)
                {
                    MazeCell[] trialMaze = CloneMaze(workingMaze);
                    bool[] before = CaptureWallStates(trialMaze);
                    if (!MazeShiftCore.ShiftMaze(trialMaze, rows, columns, candidate) || !PreservesPlayerEscape(trialMaze))
                        continue;

                    bool[] after = CaptureWallStates(trialMaze);
                    var newlyChangedEdges = new List<int>(expectedWallChangesPerShift);
                    for (int edge = 0; edge < before.Length; edge++)
                    {
                        if (before[edge] != after[edge])
                            newlyChangedEdges.Add(edge);
                    }

                    if (newlyChangedEdges.Count != expectedWallChangesPerShift)
                        continue;

                    bool overlapsEarlierShift = false;
                    foreach (int edge in newlyChangedEdges)
                    {
                        if (changedEdges.Contains(edge))
                        {
                            overlapsEarlierShift = true;
                            break;
                        }
                    }

                    if (overlapsEarlierShift)
                        continue;

                    workingMaze = trialMaze;
                    usedRoots.Add(candidate);
                    foreach (int edge in newlyChangedEdges)
                        changedEdges.Add(edge);

                    foundShift = true;
                    break;
                }

                if (!foundShift)
                    return false;
            }

            maze = workingMaze;
            ApplyWallStates(true);
            if (updateNavMeshAfterShift)
                QueueNavMeshUpdate();
            else
                MazeChanged?.Invoke();

            return true;
        }

        /// <summary>UnityEvent entry point; performs the configured batch.</summary>
        public void ShiftRandomUnlockedCell()
        {
            RequestConfiguredShift();
        }

        public void ShiftThreeRandomCells()
        {
            RequestConfiguredShift();
        }

        /// <summary>UnityEvent or gameplay entry point for a warned configured batch.</summary>
        public void RequestThreeCellShift()
        {
            RequestConfiguredShift();
        }

        public void RequestConfiguredShift()
        {
            if (!initialized || navMeshUpdateRunning || warningRoutineRunning)
                return;

            StartCoroutine(ShowWarningThenShift());
        }

        private IEnumerator ShowWarningThenShift()
        {
            warningRoutineRunning = true;

            if (shiftWarningText != null)
                shiftWarningText.gameObject.SetActive(true);

            // 1. Warning sound, once, when the countdown starts
            if (AudioManager.Instance != null)
                AudioManager.Instance.PlaySFX(AudioManager.Instance.WallWarning);

            // 2. Countdown: 3, 2, 1
            int secondsLeft = Mathf.CeilToInt(warningLeadSeconds);
            while (secondsLeft > 0)
            {
                if (shiftWarningText != null)
                    shiftWarningText.text = $"{warningMessage}{secondsLeft}";

                yield return new WaitForSeconds(1f);
                secondsLeft--;
            }

            // 3. Shift the walls, then play the shift sound only if walls actually changed
            bool shifted = TryShiftRandomUnlockedCells(rewiresPerBatch);
            if (shifted && AudioManager.Instance != null)
                AudioManager.Instance.PlaySFX(AudioManager.Instance.WallShift);

            HideShiftWarning();
            warningRoutineRunning = false;
        }

        private void HideShiftWarning()
        {
            if (shiftWarningText != null)
                shiftWarningText.gameObject.SetActive(false);
        }

        private IEnumerator AutomaticShiftLoop()
        {
            var wait = new WaitForSeconds(automaticShiftIntervalSeconds);
            while (true)
            {
                yield return wait;
                RequestConfiguredShift();
            }
        }

        // Uses the same rewire rules as wall shifts, so the maze always stays one connected tree.
        private void ScrambleMaze(int shuffleCount)
        {
            int done = 0;
            for (int attempt = 0; attempt < shuffleCount * 4 && done < shuffleCount; attempt++)
            {
                int index = UnityEngine.Random.Range(0, maze.Length);
                if (!maze[index].unlocked || !HasParentEdge(maze[index]))
                    continue;

                MazeCell[] trialMaze = CloneMaze(maze);
                if (MazeShiftCore.ShiftMaze(trialMaze, rows, columns, index) && PreservesPlayerEscape(trialMaze))
                {
                    maze = trialMaze;
                    done++;
                }
            }
        }

        private static void Shuffle(List<int> values)
        {
            for (int i = values.Count - 1; i > 0; i--)
            {
                int swapIndex = UnityEngine.Random.Range(0, i + 1);
                int value = values[i];
                values[i] = values[swapIndex];
                values[swapIndex] = value;
            }
        }

        private static MazeCell[] CloneMaze(MazeCell[] source)
        {
            var clone = new MazeCell[source.Length];
            for (int i = 0; i < source.Length; i++)
            {
                MazeCell original = source[i];
                clone[i] = new MazeCell(original.x, original.y)
                {
                    unlocked = original.unlocked,
                    up = original.up,
                    down = original.down,
                    left = original.left,
                    right = original.right,
                    shiftableUp = original.shiftableUp,
                    shiftableDown = original.shiftableDown,
                    shiftableLeft = original.shiftableLeft,
                    shiftableRight = original.shiftableRight
                };
            }
            return clone;
        }

        private bool[] CaptureWallStates(MazeCell[] source)
        {
            int edgeCount = rows * (columns - 1) + (rows - 1) * columns;
            var states = new bool[edgeCount];
            int index = 0;

            for (int row = 0; row < rows; row++)
            {
                for (int column = 0; column < columns - 1; column++)
                    states[index++] = source[row * columns + column].right == EdgeState.Wall;
            }

            for (int row = 0; row < rows - 1; row++)
            {
                for (int column = 0; column < columns; column++)
                    states[index++] = source[row * columns + column].up == EdgeState.Wall;
            }

            return states;
        }

        private static bool PreservesPlayerEscape(MazeCell[] candidateMaze)
        {
            // Cells inside the player's lock zone must keep at least one open edge.
            // The maze remains a connected tree, so any non-isolated protected cell
            // still has a route out through the rest of the maze.
            foreach (MazeCell cell in candidateMaze)
            {
                if (!cell.unlocked &&
                    cell.up == EdgeState.Wall && cell.down == EdgeState.Wall &&
                    cell.left == EdgeState.Wall && cell.right == EdgeState.Wall)
                {
                    return false;
                }
            }

            return true;
        }

        private bool BuildMazeFromScene()
        {
            if (rows < 2 || columns < 2 || cellSpacing.x <= 0f || cellSpacing.y <= 0f)
            {
                Debug.LogError("Maze grid dimensions and cell spacing must be positive.", this);
                return false;
            }

            maze = new MazeCell[rows * columns];
            for (int row = 0; row < rows; row++)
            {
                for (int column = 0; column < columns; column++)
                    maze[row * columns + column] = new MazeCell(row, column);
            }

            horizontalWalls = new GameObject[rows, columns - 1];
            verticalWalls = new GameObject[rows - 1, columns];

            int shiftingCount = 0;
            int mappedCount = 0;
            foreach (Transform item in wallRoot.GetComponentsInChildren<Transform>(true))
            {
                if (item == wallRoot || !item.gameObject.CompareTag("Shifting"))
                    continue;

                shiftingCount++;
                if (TryMapShiftingWall(item.gameObject))
                    mappedCount++;
            }

            for (int row = 0; row < rows; row++)
            {
                for (int column = 0; column < columns - 1; column++)
                {
                    bool canShift = horizontalWalls[row, column] != null;
                    SetShiftable(row, column, MazeDirection.Right, canShift);
                }
            }

            for (int row = 0; row < rows - 1; row++)
            {
                for (int column = 0; column < columns; column++)
                {
                    bool canShift = verticalWalls[row, column] != null;
                    SetShiftable(row, column, MazeDirection.Up, canShift);
                }
            }

            BuildInitialTree();
            Debug.Log($"Maze ready: {rows}x{columns} cells; mapped {mappedCount}/{shiftingCount} Shifting walls. Unmapped walls are left untouched.", this);
            if (mappedCount != shiftingCount)
                Debug.LogWarning("Some Shifting walls did not match an expected cell-edge midpoint. Check the grid origin, spacing, and wall positions in the Inspector.", this);

            return true;
        }

        private bool TryMapShiftingWall(GameObject wall)
        {
            float nearestDistanceSquared = wallPositionTolerance * wallPositionTolerance;
            int nearestRow = -1;
            int nearestColumn = -1;
            bool nearestIsHorizontal = false;

            for (int row = 0; row < rows; row++)
            {
                for (int column = 0; column < columns - 1; column++)
                {
                    Vector3 local = new Vector3(firstCellCenter.x + (column + 0.5f) * cellSpacing.x,
                                                firstCellCenter.y + row * cellSpacing.y,
                                                0f);
                    float distanceSquared = (wall.transform.position - wallRoot.TransformPoint(local)).sqrMagnitude;
                    if (distanceSquared <= nearestDistanceSquared)
                    {
                        nearestDistanceSquared = distanceSquared;
                        nearestRow = row;
                        nearestColumn = column;
                        nearestIsHorizontal = true;
                    }
                }
            }

            for (int row = 0; row < rows - 1; row++)
            {
                for (int column = 0; column < columns; column++)
                {
                    Vector3 local = new Vector3(firstCellCenter.x + column * cellSpacing.x,
                                                firstCellCenter.y + (row + 0.5f) * cellSpacing.y,
                                                0f);
                    float distanceSquared = (wall.transform.position - wallRoot.TransformPoint(local)).sqrMagnitude;
                    if (distanceSquared <= nearestDistanceSquared)
                    {
                        nearestDistanceSquared = distanceSquared;
                        nearestRow = row;
                        nearestColumn = column;
                        nearestIsHorizontal = false;
                    }
                }
            }

            if (nearestRow < 0)
                return false;

            GameObject[,] slots = nearestIsHorizontal ? horizontalWalls : verticalWalls;
            if (slots[nearestRow, nearestColumn] != null)
            {
                Debug.LogWarning($"More than one Shifting wall maps to edge ({nearestRow}, {nearestColumn}).", wall);
                return false;
            }

            slots[nearestRow, nearestColumn] = wall;
            return true;
        }

        private void BuildInitialTree()
        {
            // Start at the bottom-left and finish at the top-right: connect every row
            // horizontally, then join the rows along the rightmost vertical spine.
            int spineColumn = columns - 1;
            var visited = new bool[maze.Length];
            var queue = new Queue<int>();
            int rootIndex = 0;
            visited[rootIndex] = true;
            queue.Enqueue(rootIndex);

            MazeDirection[] directions = { MazeDirection.Right, MazeDirection.Up, MazeDirection.Left, MazeDirection.Down };
            while (queue.Count > 0)
            {
                int index = queue.Dequeue();
                int row = index / columns;
                int column = index % columns;
                foreach (MazeDirection direction in directions)
                {
                    int nextRow = row;
                    int nextColumn = column;
                    switch (direction)
                    {
                        case MazeDirection.Right: nextColumn++; break;
                        case MazeDirection.Left: nextColumn--; break;
                        case MazeDirection.Up: nextRow++; break;
                        case MazeDirection.Down: nextRow--; break;
                    }

                    if (nextRow < 0 || nextRow >= rows || nextColumn < 0 || nextColumn >= columns)
                        continue;

                    bool isTreeEdge = direction == MazeDirection.Left || direction == MazeDirection.Right || column == spineColumn;
                    int nextIndex = nextRow * columns + nextColumn;
                    if (!isTreeEdge || visited[nextIndex])
                        continue;

                    maze[index].SetEdge(direction, EdgeState.Child);
                    maze[nextIndex].SetEdge(Opposite(direction), EdgeState.Parent);
                    visited[nextIndex] = true;
                    queue.Enqueue(nextIndex);
                }
            }
        }

        private void SetShiftable(int row, int column, MazeDirection direction, bool value)
        {
            MazeCell cell = maze[row * columns + column];
            cell.SetShiftable(direction, value);

            int neighborIndex = NeighborIndex(row, column, direction);
            if (neighborIndex >= 0)
                maze[neighborIndex].SetShiftable(Opposite(direction), value);
        }

        private int NeighborIndex(int row, int column, MazeDirection direction)
        {
            switch (direction)
            {
                case MazeDirection.Up: row++; break;
                case MazeDirection.Down: row--; break;
                case MazeDirection.Left: column--; break;
                case MazeDirection.Right: column++; break;
            }
            return row < 0 || row >= rows || column < 0 || column >= columns ? -1 : row * columns + column;
        }

        private void ApplyWallStates(bool animate)
        {
            for (int row = 0; row < rows; row++)
            {
                for (int column = 0; column < columns - 1; column++)
                {
                    GameObject wall = horizontalWalls[row, column];
                    if (wall != null)
                        SetWall(wall, maze[row * columns + column].right == EdgeState.Wall, animate);
                }
            }

            for (int row = 0; row < rows - 1; row++)
            {
                for (int column = 0; column < columns; column++)
                {
                    GameObject wall = verticalWalls[row, column];
                    if (wall != null)
                        SetWall(wall, maze[row * columns + column].up == EdgeState.Wall, animate);
                }
            }
        }

        private void SetWall(GameObject wall, bool show, bool animate)
        {
            bool shownNow = wallTargets.TryGetValue(wall, out bool target) ? target : wall.activeSelf;
            if (shownNow == show)
                return;

            if (wallAnimations.TryGetValue(wall, out Coroutine running) && running != null)
                StopCoroutine(running);

            wallTargets[wall] = show;

            if (!animate || wallAnimationSeconds <= 0f)
            {
                SetWallArt(wall, 1f);
                SetWallBlocking(wall, show);
                wall.SetActive(show);
                wallAnimations.Remove(wall);
                return;
            }

            wallAnimations[wall] = StartCoroutine(AnimateWall(wall, show));
        }

        // Blocking changes straight away, so the navmesh update right after a shift is
        // correct. Only the art is animated.
        private IEnumerator AnimateWall(GameObject wall, bool show)
        {
            if (show)
                wall.SetActive(true);

            SetWallBlocking(wall, show);
            PlayWallDust(wall);

            for (float time = 0f; time < wallAnimationSeconds; time += Time.deltaTime)
            {
                float progress = time / wallAnimationSeconds;
                SetWallArt(wall, show ? progress : 1f - progress);
                yield return null;
            }

            SetWallArt(wall, 1f);
            if (!show)
                wall.SetActive(false);

            wallAnimations.Remove(wall);
        }

        private void PlayWallDust(GameObject wall)
        {
            if (wallDustPrefab == null)
                return;

            foreach (SpriteRenderer art in wall.GetComponentsInChildren<SpriteRenderer>(true))
            {
                if (art.gameObject.name == "NavMesh Footprint")
                    continue;

                Vector3 position = artStartPositions.TryGetValue(art.transform, out Vector3 start)
                    ? art.transform.parent.TransformPoint(start)
                    : art.transform.position;

                ParticleSystem dust = Instantiate(wallDustPrefab, position, wallDustPrefab.transform.rotation);
                ParticleSystem.MainModule main = dust.main;
                main.loop = false;
                main.stopAction = ParticleSystemStopAction.Destroy;   // cleans itself up
                dust.Play();
            }
        }

        private static void SetWallBlocking(GameObject wall, bool blocking)
        {
            foreach (Collider2D wallCollider in wall.GetComponentsInChildren<Collider2D>(true))
                wallCollider.enabled = blocking;

            Transform footprint = wall.transform.Find("NavMesh Footprint");
            if (footprint != null)
                footprint.gameObject.SetActive(blocking);
        }

        // amount 1 = fully shown, 0 = sunk and invisible.
        private void SetWallArt(GameObject wall, float amount)
        {
            foreach (SpriteRenderer art in wall.GetComponentsInChildren<SpriteRenderer>(true))
            {
                if (art.gameObject.name == "NavMesh Footprint")
                    continue;

                if (!artStartPositions.TryGetValue(art.transform, out Vector3 start))
                {
                    start = art.transform.localPosition;
                    artStartPositions[art.transform] = start;
                }

                if (!artStartSprites.TryGetValue(art, out Sprite fullSprite))
                {
                    fullSprite = art.sprite;
                    artStartSprites[art] = fullSprite;
                }

                Color color = art.color;
                if (wallShrinkFrames != null && wallShrinkFrames.Length > 0)
                {
                    // Pixel frames: no movement or fading, just swap the sprite.
                    int frame = Mathf.Min(wallShrinkFrames.Length - 1, Mathf.FloorToInt((1f - amount) * wallShrinkFrames.Length));
                    art.sprite = amount >= 1f ? fullSprite : wallShrinkFrames[frame];
                    art.transform.localPosition = start;
                    color.a = 1f;
                }
                else
                {
                    art.transform.localPosition = start + Vector3.down * (wallSinkDistance * (1f - amount));
                    color.a = amount;
                }

                art.color = color;
            }
        }

        private void RefreshLocksFromPlayer()
        {
            if (player == null)
            {
                for (int i = 0; i < maze.Length; i++)
                    maze[i].unlocked = true;
                return;
            }

            Vector3 playerLocal = wallRoot.InverseTransformPoint(player.position);
            int index = MazeShiftCore.WorldToIndex(playerLocal.x, playerLocal.y,
                                                  firstCellCenter.x, firstCellCenter.y,
                                                  cellSpacing.x, cellSpacing.y, rows, columns);
            if (index >= 0)
                MazeShiftCore.SetLocks(maze, rows, columns, index, playerLockRadius);
            else
            {
                for (int i = 0; i < maze.Length; i++)
                    maze[i].unlocked = true;
            }
        }

        private void QueueNavMeshUpdate(bool forceRebuild = false)
        {
            navMeshDirty = true;
            navMeshNeedsRebuild |= forceRebuild;
            if (!navMeshUpdateRunning && navMeshSurface != null)
                StartCoroutine(UpdateNavMeshWhenReady());
            else if (navMeshSurface == null)
                MazeChanged?.Invoke();
        }

        private IEnumerator UpdateNavMeshWhenReady()
        {
            navMeshUpdateRunning = true;
            while (navMeshDirty)
            {
                navMeshDirty = false;
                bool rebuild = navMeshNeedsRebuild || navMeshSurface.navMeshData == null;
                navMeshNeedsRebuild = false;
                AsyncOperation operation = rebuild
                    ? navMeshSurface.BuildNavMeshAsync()
                    : navMeshSurface.UpdateNavMesh(navMeshSurface.navMeshData);
                yield return operation;
            }

            navMeshUpdateRunning = false;
            MazeChanged?.Invoke();
        }

        private static bool HasParentEdge(MazeCell cell)
        {
            return cell.up == EdgeState.Parent || cell.down == EdgeState.Parent ||
                   cell.left == EdgeState.Parent || cell.right == EdgeState.Parent;
        }

        private static MazeDirection Opposite(MazeDirection direction)
        {
            switch (direction)
            {
                case MazeDirection.Up: return MazeDirection.Down;
                case MazeDirection.Down: return MazeDirection.Up;
                case MazeDirection.Left: return MazeDirection.Right;
                default: return MazeDirection.Left;
            }
        }
    }
}