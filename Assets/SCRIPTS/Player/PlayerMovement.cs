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

    [Header("UI")]
    [Tooltip("The StaminaBar component under Stats. Assign it on the Player in the Gameplay scene.")]
    [SerializeField] private StaminaBar staminaBar;

    private float currentStamina;
    private float lastSprintTime = float.NegativeInfinity;
    private Vector2 moveInput;
    private bool isSprinting;
    private bool sprintHeld;        // Shift, or any other Sprint binding
    private bool sprintButtonHeld;
    private bool runLocked;         // after stamina runs out, the player must stop trying to run first
    private float speedMultiplier = 1f;     // set by PlayerLoadout from the walk speed upgrade
    private float staminaMultiplier = 1f;   // set by PlayerLoadout from the run stamina upgrade

    private float MaxStamina => stats.maxStamina * staminaMultiplier;

    // Called by PlayerLoadout when the match starts. 0.1 = 10% more.
    public void ApplyUpgrades(float speedBonus, float staminaBonus)
    {
        speedMultiplier = 1f + speedBonus;
        staminaMultiplier = 1f + staminaBonus;
        currentStamina = MaxStamina;
        if (staminaBar != null)
            staminaBar.SetMaxStamina(MaxStamina);
    }

    private void RefreshStaminaBar()
    {
        if (staminaBar == null)
            return;

        staminaBar.SetStamina(currentStamina);
    }

    private void Awake()
    {
        if (rb == null)
            rb = GetComponent<Rigidbody2D>();

        currentStamina = MaxStamina;
        if (staminaBar != null)
            staminaBar.SetMaxStamina(MaxStamina);
    }

    private void Update()
    {
        UpdateRunning();

        if (isSprinting)
        {
            currentStamina = Mathf.Max(0f, currentStamina - stats.staminaDrainPerSecond * Time.deltaTime);
            if (currentStamina <= 0f)
            {
                isSprinting = false;
                lastSprintTime = Time.time;
                runLocked = true;
            }
        }
        else if (Time.time - lastSprintTime >= stats.staminaRecoveryDelay)
        {
            currentStamina = Mathf.Min(MaxStamina, currentStamina + stats.staminaRecoveryPerSecond * Time.deltaTime);
        }

        HandleFootsteps();
        HandleAnimation();
        RefreshStaminaBar();

    }

    private void FixedUpdate()
    {
        rb.linearVelocity = moveInput * (isSprinting ? stats.sprintSpeed : stats.moveSpeed) * speedMultiplier;
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
        sprintHeld = context.ReadValueAsButton();
    }

    public void SetSprintButtonHeld(bool held)
    {
        sprintButtonHeld = held;
    }

    // Sprint only while moving with Shift or the sprint button held.
    // After stamina runs out, release sprint before running again.
    private void UpdateRunning()
    {
        bool wantsToRun = sprintHeld || sprintButtonHeld;
        bool isMoving = moveInput.sqrMagnitude > 0.01f;

        if (!wantsToRun || !isMoving)
        {
            if (isSprinting)
            {
                isSprinting = false;
                lastSprintTime = Time.time;
            }

            if (!wantsToRun)
                runLocked = false;
        }
        else if (!isSprinting && !runLocked && currentStamina > 0f)
        {
            isSprinting = true;
        }
    }


}
