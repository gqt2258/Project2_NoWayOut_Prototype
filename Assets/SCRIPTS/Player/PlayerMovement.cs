using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerMovement : MonoBehaviour
{
    [SerializeField] private PlayerStat stats;
    [SerializeField] private Rigidbody2D rb;

    [Header("Animation")]
    [SerializeField] private Animator animator;
    [SerializeField] private SpriteRenderer spriteRenderer;
    [SerializeField, Min(0.1f)] private float sprintAnimationSpeed = 1.5f;
    [SerializeField, Min(0.1f)] private float walkAnimationSpeed = 0.7f;
    [SerializeField, Min(0.1f)] private float idleAnimationSpeed = 0.6f;

    private float currentStamina;
    private float lastSprintTime = float.NegativeInfinity;
    private Vector2 moveInput;
    private bool isSprinting;

    private void Awake()
    {
        if (rb == null)
            rb = GetComponent<Rigidbody2D>();

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


        HandleFootsteps();
        HandleAnimation();

    }
    private void HandleAnimation()
    {
        bool isMoving = moveInput.sqrMagnitude > 0.01f;
        animator.SetBool("IsMoving", isMoving);

        if (!isMoving)
            animator.speed = idleAnimationSpeed;
        else
            animator.speed = isSprinting ? sprintAnimationSpeed : walkAnimationSpeed;

        if (!isMoving) return; // keep the last direction for idle

        // Use the stronger axis so the sprite never shows a diagonal
        if (Mathf.Abs(moveInput.x) > Mathf.Abs(moveInput.y))
        {
            animator.SetFloat("MoveX", Mathf.Sign(moveInput.x));
            animator.SetFloat("MoveY", 0f);
            spriteRenderer.flipX = moveInput.x < 0f;
        }
        else
        {
            animator.SetFloat("MoveX", 0f);
            animator.SetFloat("MoveY", Mathf.Sign(moveInput.y));
        }
    }

    private void HandleFootsteps()
    {
        if (AudioManager.Instance == null) return;

        bool isMoving = moveInput.sqrMagnitude > 0.01f && Time.timeScale > 0f;
        AudioManager.Instance.PlayerMoves(isMoving, isSprinting);
    }

    private void OnDisable()
    {
        if (AudioManager.Instance != null)
            AudioManager.Instance.PlayerMoves(false, false);
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