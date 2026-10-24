using UnityEngine;

[CreateAssetMenu(fileName = "PlayerStat", menuName = "Scriptable Objects/Player Stats")]
public class PlayerStat : ScriptableObject
{
    public int playerMaxHealth;

    public float moveSpeed;
    public float sprintSpeed;
    public float maxStamina;

    public float staminaDrainPerSecond;
    public float staminaRecoveryPerSecond;
    public float staminaRecoveryDelay;
}
