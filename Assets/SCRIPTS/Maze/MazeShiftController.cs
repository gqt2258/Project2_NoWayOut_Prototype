using System;
using System.Collections;
using System.Collections.Generic;
using NavMeshPlus.Components;
using UnityEngine;

namespace NoWayOut.Maze
{
    /// <summary>
    /// Scene adapter for the 6x6 maze. Attach this component to the Walls object.
    /// Shifting wall objects are matched to the midpoint of adjacent maze cells.
    /// </summary>
    public sealed class MazeShiftController : MonoBehaviour
    {
        [Header("Scene references")]
        [SerializeField] private Transform wallRoot;
        [SerializeField] private Transform player;
        [SerializeField] private NavMeshSurface navMeshSurface;

        [Header("Maze grid")]
        [SerializeField, Min(1)] private int rows = 6;
        [SerializeField, Min(1)] private int columns = 6;
        [SerializeField] private Vector2 firstCellCenter = new Vector2(-7.38f, -9.09f);
        [SerializeField, Min(0.1f)] private float cellSpacing = 3f;
        [SerializeField, Min(0.01f)] private float wallPositionTolerance = 0.25f;
        [SerializeField, Min(0)] private int playerLockRadius = 1;

        [Header("Shift timing")]
        [SerializeField, Min(0f)] private float automaticShiftIntervalSeconds;
        [SerializeField] private bool updateNavMeshAfterShift = true;

        private MazeCell[] maze;
        private GameObject[,] horizontalWalls;
        private GameObject[,] verticalWalls;
        private bool navMeshDirty;
        private bool navMeshUpdateRunning;
        private bool navMeshNeedsRebuild;
        private bool initialized;

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

            initialized = BuildMazeFromScene();
        }

        private void Start()
        {
            if (!initialized)
                return;

            RefreshLocksFromPlayer();
            ApplyWallStates();

            if (updateNavMeshAfterShift)
                QueueNavMeshUpdate(forceRebuild: true);

            if (automaticShiftIntervalSeconds > 0f)
                StartCoroutine(AutomaticShiftLoop());
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
            ApplyWallStates();
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
                    ApplyWallStates();
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
        /// Performs three independent rewires, then applies all six resulting wall
        /// changes together and schedules one NavMeshPlus update for the batch.
        /// If three non-overlapping legal rewires cannot be found, nothing is applied.
        /// </summary>
        public bool TryShiftThreeRandomUnlockedCells()
        {
            const int batchSize = 3;
            const int expectedWallChangesPerShift = 2;

            if (!initialized || navMeshUpdateRunning)
                return false;

            RefreshLocksFromPlayer();
            MazeCell[] workingMaze = CloneMaze(maze);
            var changedEdges = new HashSet<int>();
            var usedRoots = new HashSet<int>();

            for (int shift = 0; shift < batchSize; shift++)
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
            ApplyWallStates();
            if (updateNavMeshAfterShift)
                QueueNavMeshUpdate();
            else
                MazeChanged?.Invoke();

            return true;
        }

        /// <summary>UnityEvent entry point; performs a three-rewire batch.</summary>
        public void ShiftRandomUnlockedCell()
        {
            TryShiftThreeRandomUnlockedCells();
        }

        public void ShiftThreeRandomCells()
        {
            TryShiftThreeRandomUnlockedCells();
        }

        private IEnumerator AutomaticShiftLoop()
        {
            var wait = new WaitForSeconds(automaticShiftIntervalSeconds);
            while (true)
            {
                yield return wait;
                TryShiftThreeRandomUnlockedCells();
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
            if (rows < 2 || columns < 2 || cellSpacing <= 0f)
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
                    Vector3 local = new Vector3(firstCellCenter.x + (column + 0.5f) * cellSpacing,
                                                firstCellCenter.y + row * cellSpacing,
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
                    Vector3 local = new Vector3(firstCellCenter.x + column * cellSpacing,
                                                firstCellCenter.y + (row + 0.5f) * cellSpacing,
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
            // Use a comb-shaped spanning tree: every row is connected horizontally,
            // and the vertical spine at column 3 joins the six rows. This includes the
            // one empty wall slot in the current scene, so the graph matches that gap.
            int spineColumn = Mathf.Clamp(3, 0, columns - 1);
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

        private void ApplyWallStates()
        {
            for (int row = 0; row < rows; row++)
            {
                for (int column = 0; column < columns - 1; column++)
                {
                    GameObject wall = horizontalWalls[row, column];
                    if (wall != null)
                        wall.SetActive(maze[row * columns + column].right == EdgeState.Wall);
                }
            }

            for (int row = 0; row < rows - 1; row++)
            {
                for (int column = 0; column < columns; column++)
                {
                    GameObject wall = verticalWalls[row, column];
                    if (wall != null)
                        wall.SetActive(maze[row * columns + column].up == EdgeState.Wall);
                }
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
                                                  cellSpacing, rows, columns);
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
