using System.Collections.Generic;
using UnityEngine;

public enum JobLocation
{
    Hospital,
    Prison,
    Mansion
}

public enum JobTier
{
    Low,
    Mid,
    High
}

[CreateAssetMenu(fileName = "Jobs", menuName = "Scriptable Objects/Jobs")]
public sealed class Jobs : ScriptableObject
{
    [SerializeField] private string jobId;
    [SerializeField] private string title;
    [TextArea(2, 4)] [SerializeField] private string story;
    [SerializeField] private JobLocation location;
    [SerializeField] private int seed;
    [SerializeField] private string correctItemId;
    [SerializeField] private JobTierSettings tierSettings;
    [SerializeField] private int rewardCoins;

    public string JobId => jobId;
    public string Title => title;
    public string Story => story;
    public JobLocation Location => location;
    public int Seed => seed;
    public string CorrectItemId => correctItemId;
    public JobTierSettings TierSettings => tierSettings;
    public JobTier Tier => tierSettings != null ? tierSettings.Tier : JobTier.Low;
    public int RewardCoins => rewardCoins;

    public void Initialize(string id, string jobTitle, string jobStory, JobLocation jobLocation,
                          int jobSeed, string itemId, JobTierSettings settings, int reward)
    {
        jobId = id;
        title = jobTitle;
        story = jobStory;
        location = jobLocation;
        seed = jobSeed;
        correctItemId = itemId;
        tierSettings = settings;
        rewardCoins = reward;
    }
}

public static class JobSession
{
    private static readonly Queue<string> RecentJobs = new Queue<string>();
    private static readonly HashSet<string> RecentJobSet = new HashSet<string>();

    public static Jobs SelectedJob { get; private set; }

    public static void Select(Jobs job)
    {
        SelectedJob = job;
    }

    public static void RecordAccepted(Jobs job)
    {
        if (job == null)
            return;

        string key = job.Location + ":" + job.CorrectItemId;
        if (RecentJobSet.Add(key))
            RecentJobs.Enqueue(key);

        if (RecentJobs.Count > 6)
            RecentJobSet.Remove(RecentJobs.Dequeue());
    }

    public static bool WasRecentlyUsed(JobLocation location, string itemId)
    {
        return RecentJobSet.Contains(location + ":" + itemId);
    }
}
