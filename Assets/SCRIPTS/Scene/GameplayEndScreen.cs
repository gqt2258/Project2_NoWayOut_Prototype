using System.Collections;
using UnityEngine;
using Unity.Netcode;

// Ends the job in Gameplay. The results themselves now show in the Main Menu (ResultsScreen),
// so this only records what happened, pays the reward and takes everyone back to the office.
//
//   PortalExit  -> ShowWin() / ShowLose()     (ShowLose works out "wrong item" or "no item")
//   PlayerHealth -> ShowLose(RoundEndReason.OutOfRevives)
//
// Solo goes back to the solo lobby. Co-op: the host takes both players back to the co-op lobby.
public class GameplayEndScreen : MonoBehaviour
{
    [Tooltip("Seconds (real time) between the job ending and the loading screen.")]
    [SerializeField, Min(0f)] private float returnDelay = 1f;

    [Header("No-revives bonus")]
    [Tooltip("Extra coins for a player who used none of their revives. 0 = no bonus.")]
    [SerializeField, Min(0)] private int noReviveBonus = 50;
    [Tooltip("On: the bonus is paid even when the job fails.")]
    [SerializeField] private bool bonusOnFail = true;

    private bool finished;
    public bool IsFinished => finished;

    // The end screen in this scene. If there isn't one on an active object, one is made,
    // so leaving through the portal or running out of revives always reaches the results.
    public static GameplayEndScreen Get()
    {
        GameplayEndScreen screen = FindAnyObjectByType<GameplayEndScreen>();
        if (screen != null)
            return screen;

        Debug.LogWarning("No active GameplayEndScreen in the scene, so one was added. " +
                         "Put GameplayEndScreen on an object that is always on to set its options.");
        return new GameObject("Gameplay End Screen").AddComponent<GameplayEndScreen>();
    }

    public void ShowWin()
    {
        ShowResult(JobResult.Success, RoundEndReason.CorrectItem);
    }

    // Portal with the wrong item, or with nothing in the Deposit.
    public void ShowLose()
    {
        DepositBox box = DepositBox.Instance;
        ShowLose(box != null && box.HasItem ? RoundEndReason.WrongItem : RoundEndReason.NoItem);
    }

    public void ShowLose(RoundEndReason reason)
    {
        ShowResult(JobResult.Failed, reason);
    }

    private void ShowResult(JobResult result, RoundEndReason reason)
    {
        if (finished)
            return;

        DepositBox box = DepositBox.Instance;
        string itemId = box != null && box.HasItem ? box.DepositedItemId : "";
        string itemName = box != null && box.HasItem ? box.DepositedItemName : "";

        NetworkJobSync sync = LocalSync();
        if (sync != null)
        {
            sync.RequestResult(result, reason, itemId, itemName);   // the host shares it with both players
            return;
        }

        ApplySharedResult(result, reason, itemId, itemName);
    }

    // Settings > Back to Main Menu: records "left the job" on this device only (no coins, equipment
    // used up). GameplaySettings then leaves; the results show over the Main Menu.
    public void RecordLeaving()
    {
        if (finished)
            return;
        finished = true;
        DepositBox box = DepositBox.Instance;
        RecordResult(JobResult.Failed, RoundEndReason.LeftJob,
                     box != null && box.HasItem ? box.DepositedItemId : "",
                     box != null && box.HasItem ? box.DepositedItemName : "", true);
    }

    // Runs on every player's device with the same result.
    public void ApplySharedResult(JobResult result, RoundEndReason reason, string itemId, string itemName)
    {
        if (finished)
            return;
        finished = true;

        RecordResult(result, reason, itemId, itemName, false);
        LocalSync()?.SharePlayerStats(RoundResult.RevivesLeft, RoundResult.RevivesTotal, RoundResult.IsOut);

        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.SetChase(false);
            AudioManager.Instance.SetHeartbeat(false);
        }

        Time.timeScale = 0f;   // nothing can hurt the players while the loading screen comes in
        StartCoroutine(ReturnToOffice());
    }

    private void RecordResult(JobResult result, RoundEndReason reason, string itemId, string itemName, bool backToMainMenu)
    {
        Jobs job = JobSession.SelectedJob;
        JobSession.ReportResult(result);

        bool passed = result == JobResult.Success;
        bool gaveUp = reason == RoundEndReason.JobEnded || reason == RoundEndReason.LeftJob;
        GameObject player = GameObject.Find("Player");
        PlayerHealth health = player != null ? player.GetComponent<PlayerHealth>() : null;
        int revivesTotal = health != null ? health.RevivesPerMatch : 0;
        int revivesLeft = health != null ? health.RevivesLeft : 0;
        bool isOut = health != null && health.IsOut;

        // Each player is paid on their own device. Silent: the results screen plays the coin sound.
        int baseCoins = passed && job != null ? job.RewardCoins : 0;
        bool noRevivesUsed = health != null && !isOut && revivesLeft >= revivesTotal;
        int bonusCoins = noRevivesUsed && !gaveUp && (passed || bonusOnFail) ? noReviveBonus : 0;
        if (PlayerWallet.Instance != null)
        {
            PlayerWallet.Instance.ForgetMatchEquipment();   // a finished job is never refunded
            PlayerWallet.Instance.AddCoins(baseCoins + bonusCoins, false);
        }

        bool host = InCoopRoom && NetworkManager.Singleton.IsServer;
        RoundResult.Record(result, reason, job, itemId, itemName, JobSession.IsCoop, host, Time.timeSinceLevelLoad,
                           baseCoins, bonusCoins, revivesLeft, revivesTotal, isOut, backToMainMenu);
        Debug.Log($"[Results] Job ended: {result} ({reason}), +{baseCoins + bonusCoins} coins. " +
                  (backToMainMenu ? "Results show over the Main Menu." : "Results show over the lobby."));
    }

    private IEnumerator ReturnToOffice()
    {
        yield return new WaitForSecondsRealtime(returnDelay);

        if (InCoopRoom)
        {
            // Only the host loads the scene for both players. The guest waits for it.
            NetworkManager network = NetworkManager.Singleton;
            if (network.IsServer)
                LocalSync()?.ReturnTogether();
            yield break;
        }

        Time.timeScale = 1f;
        CoopSession.ReturnToLobby = true;   // back to the solo lobby, where the results show
        ScreenFader.LoadScene("Main Menu", "Returning to the office");
    }

    private static bool InCoopRoom => JobSession.IsCoop && NetworkManager.Singleton != null && NetworkManager.Singleton.IsListening;

    private static NetworkJobSync LocalSync()
    {
        if (!InCoopRoom)
            return null;
        NetworkObject playerObject = NetworkManager.Singleton.LocalClient?.PlayerObject;
        return playerObject != null ? playerObject.GetComponent<NetworkJobSync>() : null;
    }

    private void OnDestroy()
    {
        if (finished)
            Time.timeScale = 1f;
    }
}