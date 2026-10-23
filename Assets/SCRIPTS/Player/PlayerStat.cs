using UnityEngine;

[CreateAssetMenu(fileName = "PlayerStat", menuName = "Scriptable Objects/Player Stats")]
public class PlayerStat : ScriptableObject
{
    [Min(0f)] public float moveSpeed = 3f;
    [Min(0f)] public float sprintSpeed = 10f;
    [Min(0f)] public float maxStamina = 100f;
    [Min(0f)] public float staminaDrainPerSecond = 10f;
    [Min(0f)] public float staminaRecoveryPerSecond = 15f;
    [Min(0f)] public float staminaRecoveryDelay = 0.75f;
}
