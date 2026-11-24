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
// Sounds a player makes that the other player hears from where they are (co-op).
public enum PlayerSound : byte { Grab, Drop, Deposit, Hurt, Die, Revive, Panting }

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
        FindAnyObjectByType<MazeShiftController>()?.ShowRemoteWarning();
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
        PlayerLoadout loadout = FindAnyObjectByType<PlayerLoadout>();
        ShopItem tool = loadout != null ? loadout.FindTool(toolId) : null;
        MazeGenerator generator = FindAnyObjectByType<MazeGenerator>();
        if (tool == null || generator == null)
            return;

        string key = Guid.NewGuid().ToString("N");
        generator.SpawnSharedTool(tool, position, key);
        ReceiveDroppedToolRpc(toolId, position, key);
    }

    [Rpc(SendTo.NotServer)]
    private void ReceiveDroppedToolRpc(string toolId, Vector3 position, string key)
    {
        PlayerLoadout loadout = FindAnyObjectByType<PlayerLoadout>();
        ShopItem tool = loadout != null ? loadout.FindTool(toolId) : null;
        FindAnyObjectByType<MazeGenerator>()?.SpawnSharedTool(tool, position, key);
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
        MazeGenerator generator = FindAnyObjectByType<MazeGenerator>();
        generator?.SpawnSharedJobItem(itemId, position, key);
        ReceiveDroppedItemRpc(itemId, position, key);
    }

    [Rpc(SendTo.NotServer)]
    private void ReceiveDroppedItemRpc(string itemId, Vector3 position, string key)
    {
        FindAnyObjectByType<MazeGenerator>()?.SpawnSharedJobItem(itemId, position, key);
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
            enemy = FindAnyObjectByType<EnemyMovement>();
        enemy?.ApplyRemoteState(position, chasing);
    }

    public void DamageRemotePlayer(ulong clientId)
    {
        if (IsServer)
        {
            enemy?.PlayEnemySound(1);
            ReceiveRemoteDamageRpc(clientId);
        }
    }

    public void BroadcastEnemySound(int sound)
    {
        if (IsServer)
            ReceiveEnemySoundRpc(sound);
    }

    [Rpc(SendTo.NotServer)]
    private void ReceiveEnemySoundRpc(int sound)
    {
        if (enemy == null)
            enemy = FindAnyObjectByType<EnemyMovement>();
        enemy?.PlayEnemySound(sound, false);
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
        EnemyMovement localEnemy = FindAnyObjectByType<EnemyMovement>();
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
        foreach (MazeItemPickup item in FindObjectsByType<MazeItemPickup>())
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

        // The disconnect screen shows Disconnected / Reconnect instead.
        if (DisconnectScreen.Instance != null)
            return;

        Time.timeScale = 1f;
        SceneManager.LoadScene("Main Menu");   // disconnect: instant, no loading screen
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

    // ---------- ROOM NAME ----------

    // Host: sends the lobby name to the guest (when it changes, and when the guest joins).
    public void ShareRoomName(string roomName)
    {
        if (IsSpawned && IsServer)
            RoomNameRpc(roomName);
    }

    [Rpc(SendTo.NotServer)]
    private void RoomNameRpc(string roomName)
    {
        CoopSession.HostRoomName = roomName;
        FindAnyObjectByType<SceneLoader>()?.RefreshRoomName();
    }

    // ---------- DISCONNECT SCREEN ----------

    // This player is leaving on purpose (Back to Main Menu), so the other player skips the 60s wait.
    public void NotifyLeaving()
    {
        if (IsSpawned && IsOwner)
            PartnerLeavingRpc();
    }

    [Rpc(SendTo.NotMe, InvokePermission = RpcInvokePermission.Everyone)]
    private void PartnerLeavingRpc()
    {
        DisconnectScreen.Instance?.OnPartnerLeftOnPurpose();
    }

    // Phone call or switching apps: the other player sees Waiting for Host / Guest until this app is back.
    private void OnApplicationPause(bool paused)
    {
        if (IsSpawned && IsOwner && JobSession.IsCoop)
            PartnerPausedRpc(paused);
    }

    [Rpc(SendTo.NotMe, InvokePermission = RpcInvokePermission.Everyone)]
    private void PartnerPausedRpc(bool paused)
    {
        DisconnectScreen.Instance?.OnPartnerPaused(paused);
    }

    public void RequestResult(JobResult result, RoundEndReason reason, string itemId, string itemName)
    {
        if (IsServer)
            ShareResult(result, reason, itemId, itemName);
        else if (IsOwner)
            RequestResultRpc((int)result, (int)reason, itemId ?? "", itemName ?? "");
    }

    [Rpc(SendTo.Server, InvokePermission = RpcInvokePermission.Everyone)]
    private void RequestResultRpc(int result, int reason, string itemId, string itemName)
    {
        if (result == (int)JobResult.Success || result == (int)JobResult.Failed)
            ShareResult((JobResult)result, (RoundEndReason)reason, itemId, itemName);
    }

    private void ShareResult(JobResult result, RoundEndReason reason, string itemId, string itemName)
    {
        GameplayEndScreen screen = GameplayEndScreen.Get();
        if (resultSent || screen == null || screen.IsFinished)
            return;
        resultSent = true;
        ReceiveResultRpc((int)result, (int)reason, itemId ?? "", itemName ?? "");
        screen.ApplySharedResult(result, reason, itemId, itemName);
    }

    [Rpc(SendTo.NotServer)]
    private void ReceiveResultRpc(int result, int reason, string itemId, string itemName)
    {
        GameplayEndScreen.Get().ApplySharedResult((JobResult)result, (RoundEndReason)reason, itemId, itemName);
    }

    // Each player sends their revives / status to the other, for the results screen's Player Status.
    public void SharePlayerStats(int revivesLeft, int revivesTotal, bool isOut)
    {
        if (IsSpawned && IsOwner)
            PlayerStatsRpc(revivesLeft, revivesTotal, isOut);
    }

    [Rpc(SendTo.NotMe, InvokePermission = RpcInvokePermission.Everyone)]
    private void PlayerStatsRpc(int revivesLeft, int revivesTotal, bool isOut)
    {
        RoundResult.SetPartner(revivesLeft, revivesTotal, isOut);
    }

    // ---------- PLAYER SOUNDS FOR THE PARTNER ----------

    // This player made a sound (grab, hurt, ...): the other player hears it from where this player is.
    public static void ShareSound(PlayerSound sound)
    {
        NetworkManager network = NetworkManager.Singleton;
        if (!JobSession.IsCoop || network == null || !network.IsListening || network.LocalClient?.PlayerObject == null)
            return;
        NetworkJobSync sync = network.LocalClient.PlayerObject.GetComponent<NetworkJobSync>();
        if (sync != null && sync.IsSpawned)
            sync.PlayerSoundRpc((byte)sound);
    }

    [Rpc(SendTo.NotMe, InvokePermission = RpcInvokePermission.Everyone)]
    private void PlayerSoundRpc(byte sound)
    {
        // Runs on the partner's player object, which stands where the partner is.
        AudioManager.Instance?.PlayPartnerSound((PlayerSound)sound, transform.position);
    }

    // ---------- EQUIPMENT (ToolEffects) ----------

    // This player used a tool: the other player sees it too (and the host runs the monster part).
    public void ShareToolUse(string itemId, Vector2 position, Vector2 facing)
    {
        if (!IsSpawned || !IsOwner) return;
        ShopItem tool = null;
        PlayerLoadout loadout = GameObject.Find("Player") != null ? GameObject.Find("Player").GetComponent<PlayerLoadout>() : null;
        if (loadout != null) tool = loadout.FindTool(itemId);
        ToolUsedRpc(itemId ?? "", position, facing, tool != null ? tool.displayName : itemId ?? "");
    }

    [Rpc(SendTo.NotMe, InvokePermission = RpcInvokePermission.Everyone)]
    private void ToolUsedRpc(string itemId, Vector2 position, Vector2 facing, string toolName)
    {
        ToolEffects.Get().ApplyFromPartner(itemId, position, facing, toolName);
    }

    // Host: what the coming wall shift will change, for the guest's Grid Scanner.
    public void ShareScannerPlan(string edges)
    {
        if (IsSpawned && IsServer)
            ScannerPlanRpc(edges ?? "");
    }

    [Rpc(SendTo.NotServer)]
    private void ScannerPlanRpc(string edges)
    {
        FindAnyObjectByType<MazeShiftController>()?.ReceiveScannerPlan(edges);
    }

    // ---------- RESULTS SCREEN (Main Menu) ----------

    // Host pressed Back to Lobby on the results: closes the guest's results too.
    public void CloseResultsForEveryone()
    {
        if (IsSpawned && IsServer)
            CloseResultsRpc();
    }

    [Rpc(SendTo.NotServer)]
    private void CloseResultsRpc()
    {
        SceneLoader loader = FindAnyObjectByType<SceneLoader>();
        if (loader != null)
            loader.CloseResultsFromHost();
        else
            RoundResult.Clear();   // still loading: don't open them at all
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

    private bool returning;

    private void LoadMainMenuForEveryone()
    {
        if (returning)
            return;
        returning = true;
        Time.timeScale = 1f;
        CoopSession.ReturnToLobby = true;   // the host lands back in the co-op lobby, still hosting
        PrepareReturnRpc();
        ScreenFader.ShowLoading("Returning to the office");
        StartCoroutine(LoadAfterFade("Main Menu"));
    }

    // Lets both screens fade to the loading screen before the host switches the scene.
    private IEnumerator LoadAfterFade(string sceneName)
    {
        yield return new WaitForSecondsRealtime(0.35f);
        returning = false;
        if (NetworkManager != null && NetworkManager.SceneManager != null)
            NetworkManager.SceneManager.LoadScene(sceneName, LoadSceneMode.Single);
    }

    [Rpc(SendTo.NotServer)]
    private void PrepareReturnRpc()
    {
        Time.timeScale = 1f;
        CoopSession.ReturnToLobby = true;   // the guest lands back in the co-op lobby (results show there)
        ScreenFader.ShowLoading("Returning to the office");
    }

    private IEnumerator ConnectMaze()
    {
        // MazeShiftController creates its starting passages in Start.
        yield return null;
        maze = FindAnyObjectByType<MazeShiftController>();
        enemy = FindAnyObjectByType<EnemyMovement>();
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
        MazeShiftController currentMaze = FindAnyObjectByType<MazeShiftController>();
        string snapshot = currentMaze != null ? currentMaze.GetWallSnapshot() : null;
        if (!string.IsNullOrEmpty(snapshot))
            ReceiveMazeSnapshotRpc(snapshot);
    }

    [Rpc(SendTo.NotServer)]
    private void ReceiveMazeSnapshotRpc(string snapshot)
    {
        MazeShiftController currentMaze = FindAnyObjectByType<MazeShiftController>();
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
        JobBoardController board = FindAnyObjectByType<JobBoardController>();
        if (board == null || !board.UseHostJob(JsonUtility.FromJson<SharedJobData>(json)))
        {
            GameServerLogs.AddError("Could not load the host's job");
            return;
        }

        JobSession.IsCoop = true;
        ScreenFader.ShowLoading("Entering the portal");   // the host loads Gameplay next
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