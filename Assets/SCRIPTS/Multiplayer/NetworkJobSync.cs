using System;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;

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
        NetworkManager.OnClientDisconnectCallback -= OnClientDisconnected;
        startGame = null;
        waitingFor.Clear();
    }
}
