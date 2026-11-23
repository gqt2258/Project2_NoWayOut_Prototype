using UnityEngine;

// Why the job ended. Shown on the results slip in the Main Menu.
public enum RoundEndReason
{
    CorrectItem,
    WrongItem,
    NoItem,
    OutOfRevives,
    JobEnded,      // Settings > End Job
    LeftJob        // Settings > Back to Main Menu
}

// Everything the results screen needs about the job that just ended.
// Filled in Gameplay by GameplayEndScreen (and the partner's stats by NetworkJobSync),
// read in the Main Menu by ResultsScreen.
public static class RoundResult
{
    public static bool Pending { get; private set; }
    public static JobResult Result { get; private set; }
    public static RoundEndReason Reason { get; private set; }
    public static Jobs Job { get; private set; }
    public static string DepositedItemId { get; private set; }
    public static string DepositedItemName { get; private set; }
    public static bool WasCoop { get; private set; }
    // Where the player lands, with the results on top: the lobby, or the Main Menu (left the job).
    public static bool BackToMainMenu { get; private set; }
    public static bool WasHost { get; private set; }
    public static float Seconds { get; private set; }

    // Coins: job reward (only when passed) + the no-revives bonus.
    public static int BaseCoins { get; private set; }
    public static int BonusCoins { get; private set; }
    public static int CoinsEarned => BaseCoins + BonusCoins;

    // This player
    public static int RevivesLeft { get; private set; }
    public static int RevivesTotal { get; private set; }
    public static bool IsOut { get; private set; }

    // The other player (co-op). Arrives from their device a moment after the job ends.
    public static bool PartnerKnown { get; private set; }
    public static int PartnerRevivesLeft { get; private set; }
    public static int PartnerRevivesTotal { get; private set; }
    public static bool PartnerIsOut { get; private set; }

    public static void Record(JobResult result, RoundEndReason reason, Jobs job, string depositedItemId,
                              string depositedItemName, bool coop, bool host, float seconds,
                              int baseCoins, int bonusCoins, int revivesLeft, int revivesTotal, bool isOut,
                              bool backToMainMenu = false)
    {
        Pending = true;
        BackToMainMenu = backToMainMenu;
        PartnerKnown = false;   // the partner's stats arrive just after this
        Result = result;
        Reason = reason;
        Job = job;
        DepositedItemId = depositedItemId;
        DepositedItemName = depositedItemName;
        WasCoop = coop;
        WasHost = host;
        Seconds = Mathf.Max(0f, seconds);
        BaseCoins = Mathf.Max(0, baseCoins);
        BonusCoins = Mathf.Max(0, bonusCoins);
        RevivesLeft = Mathf.Max(0, revivesLeft);
        RevivesTotal = Mathf.Max(0, revivesTotal);
        IsOut = isOut;
    }

    public static void SetPartner(int revivesLeft, int revivesTotal, bool isOut)
    {
        PartnerKnown = true;
        PartnerRevivesLeft = Mathf.Max(0, revivesLeft);
        PartnerRevivesTotal = Mathf.Max(0, revivesTotal);
        PartnerIsOut = isOut;
    }

    // The results screen was closed, the player left the room, or a new job started.
    public static void Clear()
    {
        Pending = false;
        BackToMainMenu = false;
        Job = null;
        DepositedItemId = null;
        DepositedItemName = null;
        BaseCoins = 0;
        BonusCoins = 0;
        PartnerKnown = false;
    }

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
    private static void ResetStatics()
    {
        Clear();
    }
}