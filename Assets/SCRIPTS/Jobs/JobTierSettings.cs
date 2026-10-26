using UnityEngine;

[CreateAssetMenu(fileName = "JobTier", menuName = "No Way Out/Job Tier Settings")]
public sealed class JobTierSettings : ScriptableObject
{
    [SerializeField] private JobTier tier;
    [SerializeField] private int minimumRewardCoins;
    [SerializeField] private int maximumRewardCoins;
    [SerializeField] private int mazeGridSize;
    [SerializeField] private int decoyCount;
    [SerializeField] private int traitClueCount;
    [SerializeField] private int itemClueCount = 1;
    [SerializeField, Min(0f)] private float shiftIntervalSeconds;
    [Tooltip("NavMeshAgent walk speed in Unity units per second.")]
    [SerializeField, Min(0f)] private float monsterWalkSpeed;
    [Tooltip("NavMeshAgent chase speed in Unity units per second.")]
    [SerializeField, Min(0f)] private float monsterChaseSpeed;

    public JobTier Tier => tier;
    public int MinimumRewardCoins => minimumRewardCoins;
    public int MaximumRewardCoins => maximumRewardCoins;
    public int MazeGridSize => mazeGridSize;
    public int DecoyCount => decoyCount;
    public int TraitClueCount => traitClueCount;
    public int ItemClueCount => itemClueCount;
    public float ShiftIntervalSeconds => shiftIntervalSeconds;
    public float MonsterWalkSpeed => monsterWalkSpeed;
    public float MonsterChaseSpeed => monsterChaseSpeed;
}
