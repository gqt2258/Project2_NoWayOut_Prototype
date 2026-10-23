using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerMovement : MonoBehaviour
{
    [SerializeField] private PlayerStat stats;
    [SerializeField] private Rigidbody2D rb;

    private float currentStamina;
    private float lastSprintTime = float.NegativeInfinity;
    private Vector2 moveInput;
    private bool isSprinting;

    private void Awake()
    {
        if (rb == null)
            rb = GetComponent<Rigidbody2D>();

        if (rb == null)
        {
            Debug.LogError("Player Rigidbody2D is missing.", this);
            enabled = false;
            return;
        }

        if (stats == null)
        {
            Debug.LogError("Player Stats asset is not assigned.", this);
            enabled = false;
            return;
        }

        currentStamina = stats.maxStamina;
    }

    private void Update()
    {
        if (isSprinting)
        {
            currentStamina = Mathf.Max(0f, currentStamina - stats.staminaDrainPerSecond * Time.deltaTime);
            if (currentStamina <= 0f)
            {
                isSprinting = false;
                lastSprintTime = Time.time;
            }
        }
        else if (Time.time - lastSprintTime >= stats.staminaRecoveryDelay)
        {
            currentStamina = Mathf.Min(stats.maxStamina, currentStamina + stats.staminaRecoveryPerSecond * Time.deltaTime);
        }

        rb.linearVelocity = moveInput * (isSprinting ? stats.sprintSpeed : stats.moveSpeed);
    }

    public void Move(InputAction.CallbackContext context)
    {
        moveInput = context.ReadValue<Vector2>();
    }

    public void Sprint(InputAction.CallbackContext context)
    {
        bool sprintPressed = context.ReadValueAsButton();
        if (sprintPressed && currentStamina > 0f)
            isSprinting = true;
        else if (!sprintPressed)
        {
            isSprinting = false;
            lastSprintTime = Time.time;
        }
    }
}
