using System;
using System.Collections.Generic;

namespace NoWayOut.Maze
{
    public enum EdgeState : byte
    {
        Parent,
        Wall,
        Child
    }

    public enum MazeDirection : byte
    {
        Up,
        Down,
        Left,
        Right
    }

    [Serializable]
    public sealed class MazeCell
    {
        public int x;
        public int y;
        public bool unlocked = true;

        public EdgeState up = EdgeState.Wall;
        public EdgeState down = EdgeState.Wall;
        public EdgeState left = EdgeState.Wall;
        public EdgeState right = EdgeState.Wall;

        // Fixed and border edges are not eligible for the C++ algorithm's rewire step.
        public bool shiftableUp;
        public bool shiftableDown;
        public bool shiftableLeft;
        public bool shiftableRight;

        public MazeCell(int row, int column)
        {
            x = row;
            y = column;
        }

        public EdgeState GetEdge(MazeDirection direction)
        {
            switch (direction)
            {
                case MazeDirection.Up: return up;
                case MazeDirection.Down: return down;
                case MazeDirection.Left: return left;
                default: return right;
            }
        }

        public bool IsShiftable(MazeDirection direction)
        {
            switch (direction)
            {
                case MazeDirection.Up: return shiftableUp;
                case MazeDirection.Down: return shiftableDown;
                case MazeDirection.Left: return shiftableLeft;
                default: return shiftableRight;
            }
        }

        public void SetEdge(MazeDirection direction, EdgeState state)
        {
            switch (direction)
            {
                case MazeDirection.Up: up = state; break;
                case MazeDirection.Down: down = state; break;
                case MazeDirection.Left: left = state; break;
                default: right = state; break;
            }
        }

        public void SetShiftable(MazeDirection direction, bool value)
        {
            switch (direction)
            {
                case MazeDirection.Up: shiftableUp = value; break;
                case MazeDirection.Down: shiftableDown = value; break;
                case MazeDirection.Left: shiftableLeft = value; break;
                default: shiftableRight = value; break;
            }
        }
    }

    /// <summary>
    /// Data-only port of the maze rewiring algorithm. It does not access Unity objects;
    /// a scene adapter should apply resulting edge states to wall renderers/colliders.
    /// </summary>
    public static class MazeShiftCore
    {
        private static readonly MazeDirection[] CandidateOrder =
        {
            MazeDirection.Down,
            MazeDirection.Up,
            MazeDirection.Left,
            MazeDirection.Right
        };

        private static readonly MazeDirection[] ChildOrder =
        {
            MazeDirection.Up,
            MazeDirection.Down,
            MazeDirection.Left,
            MazeDirection.Right
        };

        public static bool ShiftMaze(MazeCell[] maze, int rows, int columns, int requestedIndex)
        {
            if (!IsValidGrid(maze, rows, columns) || requestedIndex < 0 || requestedIndex >= maze.Length)
                return false;

            MazeCell root = maze[requestedIndex];
            if (root == null || !root.unlocked)
                return false;

            var inSubtree = new bool[maze.Length];
            MarkChildSubtree(maze, rows, columns, requestedIndex, inSubtree);

            if (!TryGetParentDirection(root, out MazeDirection oldParentDirection))
                return false;

            int oldParentIndex = NeighborIndex(requestedIndex, oldParentDirection, rows, columns);
            if (oldParentIndex < 0 || !root.IsShiftable(oldParentDirection) || !maze[oldParentIndex].IsShiftable(Opposite(oldParentDirection)))
                return false;

            if (!TryFindAttachment(maze, rows, columns, requestedIndex, inSubtree, out int attachCell, out MazeDirection attachDirection))
                return false;

            if (!TryFindChildPath(maze, rows, columns, requestedIndex, attachCell, out List<MazeDirection> path))
                return false;

            // Cut the old parent link, then reverse the child path from the root to the
            // attachment point, matching the original C++ operation.
            SetReciprocalEdge(maze, requestedIndex, oldParentDirection, EdgeState.Wall, rows, columns);

            int currentIndex = requestedIndex;
            foreach (MazeDirection direction in path)
            {
                int nextIndex = NeighborIndex(currentIndex, direction, rows, columns);
                if (nextIndex < 0)
                    return false;

                SetReciprocalEdge(maze, currentIndex, direction, EdgeState.Parent, rows, columns);
                currentIndex = nextIndex;
            }

            SetReciprocalEdge(maze, attachCell, attachDirection, EdgeState.Parent, rows, columns);
            return true;
        }

        public static void SetLocks(MazeCell[] maze, int rows, int columns, int centerIndex, int radius)
        {
            if (!IsValidGrid(maze, rows, columns) || centerIndex < 0 || centerIndex >= maze.Length || maze[centerIndex] == null)
                return;

            int centerX = centerIndex / columns;
            int centerY = centerIndex % columns;
            for (int index = 0; index < maze.Length; index++)
            {
                if (maze[index] == null)
                    continue;

                int row = index / columns;
                int column = index % columns;
                maze[index].unlocked = Math.Abs(row - centerX) > radius || Math.Abs(column - centerY) > radius;
            }
        }

        public static int WorldToIndex(float worldX, float worldY, float originX, float originY, float cellSize, int rows, int columns)
        {
            if (cellSize <= 0f || rows <= 0 || columns <= 0)
                return -1;

            int column = (int)Math.Round((worldX - originX) / cellSize);
            int row = (int)Math.Round((worldY - originY) / cellSize);
            if (row < 0 || row >= rows || column < 0 || column >= columns)
                return -1;

            return row * columns + column;
        }

        private static bool IsValidGrid(MazeCell[] maze, int rows, int columns)
        {
            if (maze == null || rows <= 0 || columns <= 0 || (long)rows * columns != maze.Length)
                return false;

            for (int i = 0; i < maze.Length; i++)
            {
                if (maze[i] == null)
                    return false;
            }
            return true;
        }

        private static void MarkChildSubtree(MazeCell[] maze, int rows, int columns, int startIndex, bool[] visited)
        {
            var stack = new Stack<int>();
            stack.Push(startIndex);
            while (stack.Count > 0)
            {
                int index = stack.Pop();
                if (visited[index])
                    continue;

                visited[index] = true;
                for (int i = ChildOrder.Length - 1; i >= 0; i--)
                {
                    MazeDirection direction = ChildOrder[i];
                    if (maze[index].GetEdge(direction) != EdgeState.Child)
                        continue;

                    int neighbor = NeighborIndex(index, direction, rows, columns);
                    if (neighbor >= 0 && !visited[neighbor])
                        stack.Push(neighbor);
                }
            }
        }

        private static bool TryFindAttachment(MazeCell[] maze, int rows, int columns, int rootIndex, bool[] inSubtree, out int attachCell, out MazeDirection attachDirection)
        {
            var stack = new Stack<int>();
            var visited = new bool[maze.Length];
            stack.Push(rootIndex);
            attachCell = -1;
            attachDirection = MazeDirection.Up;

            while (stack.Count > 0)
            {
                int index = stack.Pop();
                if (visited[index])
                    continue;
                visited[index] = true;

                if (maze[index].unlocked)
                {
                    foreach (MazeDirection direction in CandidateOrder)
                    {
                        if (maze[index].GetEdge(direction) != EdgeState.Wall || !maze[index].IsShiftable(direction))
                            continue;

                        int neighbor = NeighborIndex(index, direction, rows, columns);
                        if (neighbor < 0 || inSubtree[neighbor] || maze[neighbor] == null || !maze[neighbor].unlocked)
                            continue;

                        MazeDirection opposite = Opposite(direction);
                        if (!maze[neighbor].IsShiftable(opposite) || maze[neighbor].GetEdge(opposite) != EdgeState.Wall)
                            continue;

                        attachCell = index;
                        attachDirection = direction;
                        return true;
                    }
                }

                for (int i = ChildOrder.Length - 1; i >= 0; i--)
                {
                    MazeDirection direction = ChildOrder[i];
                    if (maze[index].GetEdge(direction) != EdgeState.Child)
                        continue;

                    int neighbor = NeighborIndex(index, direction, rows, columns);
                    if (neighbor >= 0 && !visited[neighbor])
                        stack.Push(neighbor);
                }
            }

            return false;
        }

        private static bool TryFindChildPath(MazeCell[] maze, int rows, int columns, int rootIndex, int targetIndex, out List<MazeDirection> path)
        {
            path = new List<MazeDirection>();
            var parentIndex = new int[maze.Length];
            var parentDirection = new MazeDirection[maze.Length];
            var visited = new bool[maze.Length];
            for (int i = 0; i < parentIndex.Length; i++)
                parentIndex[i] = -1;

            var stack = new Stack<int>();
            stack.Push(rootIndex);
            visited[rootIndex] = true;
            while (stack.Count > 0)
            {
                int index = stack.Pop();
                if (index == targetIndex)
                    break;

                for (int i = ChildOrder.Length - 1; i >= 0; i--)
                {
                    MazeDirection direction = ChildOrder[i];
                    if (maze[index].GetEdge(direction) != EdgeState.Child)
                        continue;

                    int neighbor = NeighborIndex(index, direction, rows, columns);
                    if (neighbor < 0 || visited[neighbor])
                        continue;

                    visited[neighbor] = true;
                    parentIndex[neighbor] = index;
                    parentDirection[neighbor] = direction;
                    stack.Push(neighbor);
                }
            }

            if (!visited[targetIndex])
                return false;

            int cursor = targetIndex;
            while (cursor != rootIndex)
            {
                path.Add(parentDirection[cursor]);
                cursor = parentIndex[cursor];
            }
            path.Reverse();
            return true;
        }

        private static bool TryGetParentDirection(MazeCell cell, out MazeDirection direction)
        {
            if (cell.up == EdgeState.Parent) { direction = MazeDirection.Up; return true; }
            if (cell.down == EdgeState.Parent) { direction = MazeDirection.Down; return true; }
            if (cell.left == EdgeState.Parent) { direction = MazeDirection.Left; return true; }
            if (cell.right == EdgeState.Parent) { direction = MazeDirection.Right; return true; }
            direction = MazeDirection.Up;
            return false;
        }

        private static void SetReciprocalEdge(MazeCell[] maze, int index, MazeDirection direction, EdgeState state, int rows, int columns)
        {
            int neighbor = NeighborIndex(index, direction, rows, columns);
            if (neighbor < 0)
                return;

            maze[index].SetEdge(direction, state);
            maze[neighbor].SetEdge(Opposite(direction), state == EdgeState.Parent ? EdgeState.Child : state == EdgeState.Child ? EdgeState.Parent : EdgeState.Wall);
        }

        private static int NeighborIndex(int index, MazeDirection direction, int rows, int columns)
        {
            int row = index / columns;
            int column = index % columns;
            switch (direction)
            {
                case MazeDirection.Up: row++; break;
                case MazeDirection.Down: row--; break;
                case MazeDirection.Left: column--; break;
                case MazeDirection.Right: column++; break;
            }
            return row < 0 || row >= rows || column < 0 || column >= columns ? -1 : row * columns + column;
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
