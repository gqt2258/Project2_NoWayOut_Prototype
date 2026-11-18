using System;
using System.Collections.Generic;
using System.Collections;
using NoWayOut.Maze;
using Unity.Netcode;
using UnityEngine;
using UnityEngine.SceneManagement;

[Serializable]
public sealed class SharedJobData
{
    public string id;
    public string title;
    public string story;
    public JobLocation location;
    public int seed;
    public string correctItemId;
    public string clue;
    public JobTier tier;
    public int rewardCoins;

    public SharedJobData() { }

    public SharedJobData(Jobs job)
    {
        id = job.JobId;
        title = job.Title;
        story = job.Story;
        location = job.Location;
        seed = job.Seed;
        correctItemId = job.CorrectItemId;
        clue = job.ItemClue;
        tier = job.Tier;
        rewardCoins = job.RewardCoins;
    }
}

// The host waits until every client has received the job before loading Gameplay.
public sealed class NetworkJobSync : NetworkBehaviour
{
    private readonly HashSet<ulong> waitingFor = new HashSet<ulong>();
    private Action startGame;
    private MazeShiftController maze;
    private EnemyMovement enemy;
    private float nextEnemyUpdate;
    private bool resultSent;

    public void WarnOtherPlayers()
    {
        if (IsServer)
            ReceiveShiftWarningRpc();
    }

    [Rpc(SendTo.NotServer)]
    private void ReceiveShiftWarningRpc()
    {
        FindFirstObjectByType<MazeShiftController>()?.ShowRemoteWarning();
    }

    public void DropTool(string toolId, Vector3 position)
    {
        if (IsServer)
            SpawnDroppedTool(toolId, position);
        else if (IsOwner)
            RequestDropToolRpc(toolId, position);
    }

    [Rpc(SendTo.Server, InvokePermission = RpcInvokePermission.Everyone)]
    private void RequestDropToolRpc(string toolId, Vector3 position)
    {
        SpawnDroppedTool(toolId, position);
    }

    private void SpawnDroppedTool(string toolId, Vector3 position)
    {
        PlayerLoadout loadout = FindFirstObjectByType<PlayerLoadout>();
        ShopItem tool = loadout != null ? loadout.FindTool(toolId) : null;
        MazeGenerator generator = FindFirstObjectByType<MazeGenerator>();
        if (tool == null || generator == null)
            return;

        string key = Guid.NewGuid().ToString("N");
        generator.SpawnSharedTool(tool, position, key);
        ReceiveDroppedToolRpc(toolId, position, key);
    }

    [Rpc(SendTo.NotServer)]
    private void ReceiveDroppedToolRpc(string toolId, Vector3 position, string key)
    {
        PlayerLoadout loadout = FindFirstObjectByType<PlayerLoadout>();
        ShopItem tool = loadout != null ? loadout.FindTool(toolId) : null;
        FindFirstObjectByType<MazeGenerator>()?.SpawnSharedTool(tool, position, key);
    }

    public void DropJobItem(string itemId, Vector3 position)
    {
        if (IsServer)
            SpawnDroppedItem(itemId, position);
        else if (IsOwner)
            RequestDropItemRpc(itemId, position);
    }

    [Rpc(SendTo.Server, InvokePermission = RpcInvokePermission.Everyone)]
    private void RequestDropItemRpc(string itemId, Vector3 position)
    {
        SpawnDroppedItem(itemId, position);
    }

    private void SpawnDroppedItem(string itemId, Vector3 position)
    {
        string key = Guid.NewGuid().ToString("N");
        MazeGenerator generator = FindFirstObjectByType<MazeGenerator>();
        generator?.SpawnSharedJobItem(itemId, position, key);
        ReceiveDroppedItemRpc(itemId, position, key);
    }

    [Rpc(SendTo.NotServer)]
    private void ReceiveDroppedItemRpc(string itemId, Vector3 position, string key)
    {
        FindFirstObjectByType<MazeGenerator>()?.SpawnSharedJobItem(itemId, position, key);
    }

    private void Update()
    {
        if (!IsSpawned || !IsServer || !IsOwner || enemy == null ||
            Time.unscaledTime < nextEnemyUpdate)
            return;

        nextEnemyUpdate = Time.unscaledTime + 0.05f;
        ReceiveEnemyStateRpc(enemy.transform.position, enemy.IsChasing);
    }

    [Rpc(SendTo.NotServer)]
    private void ReceiveEnemyStateRpc(Vector2 position, bool chasing)
    {
        if (enemy == null)
            enemy = FindFirstObjectByType<EnemyMovement>();
        enemy?.ApplyRemoteState(position, chasing);
    }

    public void DamageRemotePlayer(ulong clientId)
    {
        if (IsServer)
            ReceiveRemoteDamageRpc(clientId);
    }

    public void AlertRemotePlayer(ulong clientId)
    {
        if (IsServer)
            ReceiveMonsterAlertRpc(clientId);
    }

    [Rpc(SendTo.NotServer)]
    private void ReceiveMonsterAlertRpc(ulong clientId)
    {
        if (NetworkManager.LocalClientId != clientId)
            return;
        GameObject player = GameObject.Find("Player");
        EnemyMovement localEnemy = FindFirstObjectByType<EnemyMovement>();
        if (player != null && localEnemy != null)
            player.GetComponentInChildren<MonsterIndicator>(true)?.Show(localEnemy.transform);
    }

    [Rpc(SendTo.NotServer)]
    private void ReceiveRemoteDamageRpc(ulong clientId)
    {
        if (NetworkManager.LocalClientId != clientId)
            return;
        GameObject player = GameObject.Find("Player");
        if (player != null)
            player.GetComponent<PlayerHealth>()?.TakeDamage(null);
    }

    public void TryTakeItem(MazeItemPickup item)
    {
        if (!IsOwner || item == null || string.IsNullOrEmpty(item.NetworkKey))
            return;

        GameObject player = GameObject.Find("Player");
        PlayerLoadout inventory = player != null ? player.GetComponent<PlayerLoadout>() : null;
        PlayerJobScript job = player != null ? player.GetComponent<PlayerJobScript>() : null;
        if ((item.IsJobItem && job == null) || (inventory != null && !inventory.HasFreeSlot))
            return;

        if (IsServer)
        {
            bool collected = item.IsJobItem ? item.Collect(job, inventory) : item.CollectTool(inventory);
            if (collected)
                ItemTakenRpc(item.NetworkKey, NetworkManager.LocalClientId);
        }
        else
            RequestItemRpc(item.NetworkKey);
    }

    [Rpc(SendTo.Server, InvokePermission = RpcInvokePermission.Everyone)]
    private void RequestItemRpc(string key, RpcParams rpcParams = default)
    {
        if (rpcParams.Receive.SenderClientId != OwnerClientId)
            return;

        MazeItemPickup item = FindItem(key);
        NetworkPlayerAvatar avatar = GetComponent<NetworkPlayerAvatar>();
        if (item == null || avatar == null ||
            Vector2.Distance(avatar.ReportedPosition, item.transform.position) > 2f)
            return;

        if (!item.TryClaim())
            return;
        Destroy(item.gameObject);
        ItemTakenRpc(key, OwnerClientId);
    }

    [Rpc(SendTo.NotServer)]
    private void ItemTakenRpc(string key, ulong collectorId)
    {
        MazeItemPickup item = FindItem(key);
        if (item == null)
            return;

        if (collectorId != NetworkManager.LocalClientId)
        {
            Destroy(item.gameObject);
            return;
        }

        GameObject player = GameObject.Find("Player");
        PlayerJobScript job = player != null ? player.GetComponent<PlayerJobScript>() : null;
        PlayerLoadout inventory = player != null ? player.GetComponent<PlayerLoadout>() : null;
        if (item.IsJobItem)
            item.Collect(job, inventory);
        else
            item.CollectTool(inventory);
    }

    private static MazeItemPickup FindItem(string key)
    {
        foreach (MazeItemPickup item in FindObjectsByType<MazeItemPickup>(FindObjectsSortMode.None))
            if (item.NetworkKey == key)
                return item;
        return null;
    }

    public override void OnNetworkSpawn()
    {
        if (IsOwner)
        {
            SceneManager.sceneLoaded += OnSceneLoaded;
            NetworkManager.OnClientDisconnectCallback += OnGameDisconnected;
        }
    }

    private void OnGameDisconnected(ulong clientId)
    {
        if (IsServer || clientId != NetworkManager.LocalClientId ||
            SceneManager.GetActiveScene().name != "Gameplay")
            return;

        Time.timeScale = 1f;
        SceneManager.LoadScene("Main Menu");
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.name == "Gameplay")
        {
            resultSent = false;
            StartCoroutine(ConnectMaze());
        }
        else
        {
            if (maze != null)
                maze.MazeChanged -= SendMazeSnapshot;
            maze = null;
            enemy = null;
        }
    }

    public void RequestResult(JobResult result)
    {
        if (IsServer)
            ShareResult(result);
        else if (IsOwner)
            RequestResultRpc((int)result);
    }

    [Rpc(SendTo.Server, InvokePermission = RpcInvokePermission.Everyone)]
    private void RequestResultRpc(int result)
    {
        if (result == (int)JobResult.Success || result == (int)JobResult.Failed)
            ShareResult((JobResult)result);
    }

    private void ShareResult(JobResult result)
    {
        GameplayEndScreen screen = FindFirstObjectByType<GameplayEndScreen>();
        if (resultSent || screen == null || screen.IsFinished)
            return;
        resultSent = true;
        ReceiveResultRpc((int)result);
        screen.ApplySharedResult(result);
    }

    [Rpc(SendTo.NotServer)]
    private void ReceiveResultRpc(int result)
    {
        FindFirstObjectByType<GameplayEndScreen>()?.ApplySharedResult((JobResult)result);
    }

    public void ReturnTogether()
    {
        if (IsServer)
            LoadMainMenuForEveryone();
        else if (IsOwner)
            RequestReturnRpc();
    }

    [Rpc(SendTo.Server, InvokePermission = RpcInvokePermission.Everyone)]
    private void RequestReturnRpc()
    {
        LoadMainMenuForEveryone();
    }

    private void LoadMainMenuForEveryone()
    {
        Time.timeScale = 1f;
        PrepareReturnRpc();
        NetworkManager.SceneManager.LoadScene("Main Menu", LoadSceneMode.Single);
    }

    [Rpc(SendTo.NotServer)]
    private void PrepareReturnRpc()
    {
        Time.timeScale = 1f;
        JobSession.ClearResult();
    }

    private IEnumerator ConnectMaze()
    {
        // MazeShiftController creates its starting passages in Start.
        yield return null;
        maze = FindFirstObjectByType<MazeShiftController>();
        enemy = FindFirstObjectByType<EnemyMovement>();
        if (maze == null)
            yield break;

        if (IsServer)
        {
            maze.MazeChanged += SendMazeSnapshot;
            SendMazeSnapshot();
        }
        else
            RequestMazeSnapshotRpc();
    }

    private void SendMazeSnapshot()
    {
        string snapshot = maze != null ? maze.GetWallSnapshot() : null;
        if (!string.IsNullOrEmpty(snapshot))
            ReceiveMazeSnapshotRpc(snapshot);
    }

    [Rpc(SendTo.Server, InvokePermission = RpcInvokePermission.Everyone)]
    private void RequestMazeSnapshotRpc()
    {
        MazeShiftController currentMaze = FindFirstObjectByType<MazeShiftController>();
        string snapshot = currentMaze != null ? currentMaze.GetWallSnapshot() : null;
        if (!string.IsNullOrEmpty(snapshot))
            ReceiveMazeSnapshotRpc(snapshot);
    }

    [Rpc(SendTo.NotServer)]
    private void ReceiveMazeSnapshotRpc(string snapshot)
    {
        MazeShiftController currentMaze = FindFirstObjectByType<MazeShiftController>();
        currentMaze?.ApplyWallSnapshot(snapshot);
    }

    public bool ShareJob(Jobs job, Action onEveryoneReady)
    {
        if (!IsServer || job == null || onEveryoneReady == null || startGame != null)
            return false;

        waitingFor.Clear();
        foreach (ulong clientId in NetworkManager.ConnectedClientsIds)
            if (clientId != NetworkManager.LocalClientId)
                waitingFor.Add(clientId);

        if (waitingFor.Count == 0)
        {
            onEveryoneReady();
            return true;
        }

        startGame = onEveryoneReady;
        NetworkManager.OnClientDisconnectCallback += OnClientDisconnected;
        ReceiveJobRpc(JsonUtility.ToJson(new SharedJobData(job)));
        return true;
    }

    [Rpc(SendTo.NotServer)]
    private void ReceiveJobRpc(string json)
    {
        JobBoardController board = FindFirstObjectByType<JobBoardController>();
        if (board == null || !board.UseHostJob(JsonUtility.FromJson<SharedJobData>(json)))
        {
            GameServerLogs.AddError("Could not load the host's job");
            return;
        }

        JobSession.IsCoop = true;
        ConfirmJobRpc();
    }

    [Rpc(SendTo.Server, InvokePermission = RpcInvokePermission.Everyone)]
    private void ConfirmJobRpc(RpcParams rpcParams = default)
    {
        if (waitingFor.Remove(rpcParams.Receive.SenderClientId) && waitingFor.Count == 0)
            StartGameWhenReady();
    }

    private void OnClientDisconnected(ulong clientId)
    {
        if (waitingFor.Remove(clientId) && waitingFor.Count == 0)
            StartGameWhenReady();
    }

    private void StartGameWhenReady()
    {
        NetworkManager.OnClientDisconnectCallback -= OnClientDisconnected;
        Action action = startGame;
        startGame = null;
        action?.Invoke();
    }

    public override void OnNetworkDespawn()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;
        NetworkManager.OnClientDisconnectCallback -= OnGameDisconnected;
        if (maze != null)
            maze.MazeChanged -= SendMazeSnapshot;
        enemy = null;
        NetworkManager.OnClientDisconnectCallback -= OnClientDisconnected;
        startGame = null;
        waitingFor.Clear();
    }
}
