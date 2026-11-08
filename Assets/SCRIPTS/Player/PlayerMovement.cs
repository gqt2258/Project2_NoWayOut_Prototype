using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

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

    [Header("Joystick running")]
    [Tooltip("How far the joystick must be pushed to run. 0.9 = 90% of the way to the edge.")]
    [SerializeField, Range(0.5f, 1f)] private float joystickRunThreshold = 0.9f;

    [Header("UI")]
    [Tooltip("The Stamina Bar slider under Stats. Assign it on the Player in the Gameplay scene.")]
    [SerializeField] private Slider staminaBar;

    private float currentStamina;
    private float lastSprintTime = float.NegativeInfinity;
    private Vector2 moveInput;
    private bool isSprinting;
    private bool sprintHeld;        // Shift, or any other Sprint binding
    private bool moveFromStick;     // true for the on-screen joystick or a gamepad, false for the keyboard
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
    }

    private void RefreshStaminaBar()
    {
        if (staminaBar == null)
            return;

        staminaBar.maxValue = MaxStamina;   // grows with the run stamina upgrade
        staminaBar.value = currentStamina;
    }

    private void Awake()
    {
        if (rb == null)
            rb = GetComponent<Rigidbody2D>();

        currentStamina = MaxStamina;
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
        moveFromStick = context.control != null && !(context.control.device is Keyboard);
    }

    public void Sprint(InputAction.CallbackContext context)
    {
        sprintHeld = context.ReadValueAsButton();
    }

    // Runs while Shift is held, or while the joystick is pushed near its edge.
    // When stamina runs out, running stops until the player lets go of Shift or
    // eases the joystick back, like the old Shift behaviour.
    private void UpdateRunning()
    {
        bool stickPushedFar = moveFromStick &&
                              moveInput.sqrMagnitude >= joystickRunThreshold * joystickRunThreshold;
        bool wantsToRun = sprintHeld || stickPushedFar;

        if (!wantsToRun)
        {
            if (isSprinting)
            {
                isSprinting = false;
                lastSprintTime = Time.time;
            }

            runLocked = false;
        }
        else if (!isSprinting && !runLocked && currentStamina > 0f)
        {
            isSprinting = true;
        }
    }


}