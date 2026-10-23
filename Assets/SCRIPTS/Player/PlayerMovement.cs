using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerMovement : MonoBehaviour
{
    public float moveSpeed = 5f;
    private float originalMoveSpeed;

    public float sprintSpeed = 10f;
    public float sprintStamina = 100f;
    private float maxStamina;

    public float staminaDrainPerSecond = 25f;
    public float staminaRecoveryPerSecond = 15f;
    public float staminaRecoveryDelay = 0.75f;
    private float lastSprintTime = float.NegativeInfinity;

    public Rigidbody2D rb;
    public Vector2 moveInput;

    public bool isSprinting = false;

    private void Start()
    {

        originalMoveSpeed = moveSpeed;
        maxStamina = sprintStamina;

        if (rb == null)
            rb = GetComponent<Rigidbody2D>();
    }

    void Update()
    {

        if(isSprinting == true)
        {
            moveSpeed = sprintSpeed;

            sprintStamina = Mathf.Max(0f, sprintStamina - staminaDrainPerSecond * Time.deltaTime);

            if (sprintStamina <= 0f)
            {
                isSprinting = false;
            }
        }
        else if (Time.time - lastSprintTime >= staminaRecoveryDelay)
        {
            sprintStamina = Mathf.Min(maxStamina, sprintStamina + staminaRecoveryPerSecond * Time.deltaTime);
        }
        
        if(isSprinting == false)
        {
            moveSpeed = originalMoveSpeed;
        }

            rb.linearVelocity = moveInput * moveSpeed;
    }

    public void Move(InputAction.CallbackContext context)
    {
        moveInput = context.ReadValue<Vector2>();
    }

    public void Sprint(InputAction.CallbackContext context)
    {
        isSprinting = context.ReadValueAsButton();
    }


}
