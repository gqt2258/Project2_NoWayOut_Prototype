using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerMovement : MonoBehaviour
{
    public float moveSpeed = 5f;
    private float originalMoveSpeed;

    // This is the movement speed while sprinting (not an amount added to moveSpeed).
    public float sprintSpeedIncrease = 10f;

    [Min(0f)]
    public float sprintStamina = 100f;

    [SerializeField, Min(0f)] private float staminaDrainPerSecond = 25f;
    [SerializeField, Min(0f)] private float staminaRecoveryPerSecond = 15f;
    [SerializeField, Min(0f)] private float staminaRecoveryDelay = 0.75f;

    public Rigidbody2D rb;
    public Vector2 moveInput;

    private PlayerInput playerInput;
    private InputActionMap playerActionMap;
    private InputAction moveAction;
    private InputAction sprintAction;
    private float maxSprintStamina;
    private float lastSprintTime = float.NegativeInfinity;
    private bool sprintRequested;

    public bool IsSprinting { get; private set; }
    public float MaxSprintStamina => maxSprintStamina;
    public float SprintStaminaNormalized => maxSprintStamina > 0f ? sprintStamina / maxSprintStamina : 0f;

    private void Awake()
    {
        originalMoveSpeed = moveSpeed;
        maxSprintStamina = Mathf.Max(0f, sprintStamina);
        sprintStamina = maxSprintStamina;

        if (rb == null)
            rb = GetComponent<Rigidbody2D>();
    }

    private void OnEnable()
    {
        playerInput = GetComponent<PlayerInput>();

        playerActionMap = playerInput.actions.FindActionMap("Player", false);

        moveAction = playerActionMap.FindAction("Move", false);
        sprintAction = playerActionMap.FindAction("Sprint", false);

        moveAction.performed += Move;
        moveAction.canceled += Move;

        if (sprintAction != null)
        {
            sprintAction.started += Sprint;
            sprintAction.performed += Sprint;
            sprintAction.canceled += Sprint;
        }

        // The prefab has no default action map selected, so enable the gameplay map explicitly.
        if (!playerActionMap.enabled)
            playerActionMap.Enable();
    }

    private void OnDisable()
    {
        if (moveAction != null)
        {
            moveAction.performed -= Move;
            moveAction.canceled -= Move;
        }

        if (sprintAction != null)
        {
            sprintAction.started -= Sprint;
            sprintAction.performed -= Sprint;
            sprintAction.canceled -= Sprint;
        }

        moveInput = Vector2.zero;
        sprintRequested = false;
    }

    void Update()
    {
        bool hasMovementInput = moveInput.sqrMagnitude > 0.0001f;
        IsSprinting = sprintRequested && hasMovementInput && sprintStamina > 0f;

        if (IsSprinting)
        {
            sprintStamina = Mathf.Max(0f, sprintStamina - staminaDrainPerSecond * Time.deltaTime);
            lastSprintTime = Time.time;

            // Require the player to release and press sprint again after fully draining it.
            if (sprintStamina <= 0f)
            {
                sprintRequested = false;
                IsSprinting = false;
            }
        }
        else if (Time.time - lastSprintTime >= staminaRecoveryDelay)
        {
            sprintStamina = Mathf.Min(maxSprintStamina, sprintStamina + staminaRecoveryPerSecond * Time.deltaTime);
        }

        moveSpeed = IsSprinting ? Mathf.Max(originalMoveSpeed, sprintSpeedIncrease) : originalMoveSpeed;

    }

    public void Move(InputAction.CallbackContext context)
    {
        moveInput = context.ReadValue<Vector2>();
    }

    public void Sprint(InputAction.CallbackContext context)
    {
        sprintRequested = context.ReadValueAsButton();
    }

    private void FixedUpdate()
    {
        if (rb != null)
            rb.linearVelocity = moveInput * moveSpeed;
    }

}
