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
    [SerializeField] private float shiftIntervalSeconds;
    [SerializeField] private float monsterWalkSpeedPercent;
    [SerializeField] private float monsterChaseSpeedPercent;
    [SerializeField] private int monsterChaseRangeGrids;

    public JobTier Tier => tier;
    public int MinimumRewardCoins => minimumRewardCoins;
    public int MaximumRewardCoins => maximumRewardCoins;
    public int MazeGridSize => mazeGridSize;
    public int DecoyCount => decoyCount;
    public int TraitClueCount => traitClueCount;
    public int ItemClueCount => itemClueCount;
    public float ShiftIntervalSeconds => shiftIntervalSeconds;
    public float MonsterWalkSpeedPercent => monsterWalkSpeedPercent;
    public float MonsterChaseSpeedPercent => monsterChaseSpeedPercent;
    public int MonsterChaseRangeGrids => monsterChaseRangeGrids;
}
