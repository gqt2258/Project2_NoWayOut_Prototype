using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

public class PlayerJobScript : MonoBehaviour
{
    public Jobs CurrentJob { get; private set; }
    public int PickedUpCount => pickedUpCount;
    public IReadOnlyList<string> CarriedItems => carriedItems;
    public IReadOnlyList<string> DepositedItems => depositedItems;
    public bool HasDepositedCorrectItem => CurrentJob != null && depositedItems.Contains(CurrentJob.CorrectItemId);

    private GameObject jobDescriptionPanel;
    private InputAction jobPanelAction;
    [SerializeField] private Button jobPanelButton;
    private bool buttonPanelOpen;
    private bool jobPanelHeld;

    [Header("Item progress (Play mode)")]
    [SerializeField] private int pickedUpCount;
    [SerializeField] private List<string> carriedItems = new List<string>();
    [SerializeField] private List<string> depositedItems = new List<string>();

    private Transform depositPoint;
    private Interactable depositInteractable;
    [SerializeField, Min(0.1f)] private float depositRadius = 1.5f;
    [Tooltip("On: items are deposited as soon as the player is near the Deposit. Off: the player presses the Deposit button.")]
    [SerializeField] private bool autoDeposit = true;

    private void Awake()
    {
        CurrentJob = JobSession.SelectedJob;

        // This script can also exist on a scene helper object. Only the player
        // instance controls the in-game panel.
        if (GetComponent<PlayerInput>() == null)
            return;

        GameObject deposit = GameObject.Find("Deposit");
        if (deposit != null)
        {
            depositPoint = deposit.transform;
            depositInteractable = deposit.GetComponent<Interactable>();
        }

        jobDescriptionPanel = GameObject.Find("Job Description Panel");
        if (jobDescriptionPanel == null)
        {
            Debug.LogWarning("Job Description Panel was not found in the scene.", this);
            return;
        }

        DisplayCurrentJob();
        jobDescriptionPanel.SetActive(false);
    }

    private void Update()
    {
        // The Deposit button is greyed out until there is something to deposit.
        if (depositInteractable != null)
            depositInteractable.CanInteract = carriedItems.Count > 0;

        if (!autoDeposit || depositPoint == null || carriedItems.Count == 0)
            return;

        if (((Vector2)(transform.position - depositPoint.position)).sqrMagnitude > depositRadius * depositRadius)
            return;

        DepositCarriedItems();
    }

    // Called automatically near the Deposit, or by the Deposit button's
    // Interactable when Auto Deposit is off.
    public void DepositCarriedItems()
    {
        if (carriedItems.Count == 0)
            return;

        Debug.Log($"Deposited: {string.Join(", ", carriedItems)}", this);
        depositedItems.AddRange(carriedItems);
        carriedItems.Clear();

        // Frees the inventory slots the job items were using.
        PlayerLoadout inventory = GetComponent<PlayerLoadout>();
        if (inventory != null)
            inventory.RemoveJobItems();
    }

    // Empties the carried items, for dropping them on the floor. Returns the item IDs.
    public List<string> DropCarriedItems()
    {
        var dropped = new List<string>(carriedItems);
        pickedUpCount = Mathf.Max(0, pickedUpCount - dropped.Count);
        carriedItems.Clear();
        return dropped;
    }

    public bool TryCollectItem(string itemId)
    {
        if (string.IsNullOrEmpty(itemId) || carriedItems.Contains(itemId) || depositedItems.Contains(itemId))
            return false;

        carriedItems.Add(itemId);
        pickedUpCount++;
        Debug.Log($"Picked up {itemId}.", this);
        return true;
    }

    private void OnEnable()
    {
        if (jobPanelButton != null)
            jobPanelButton.onClick.AddListener(ToggleJobPanel);

        PlayerInput playerInput = GetComponent<PlayerInput>();
        if (playerInput == null || playerInput.actions == null)
            return;

        jobPanelAction = playerInput.actions.FindAction("UI/JobPanel", false);
        if (jobPanelAction == null)
        {
            Debug.LogWarning("JobPanel action was not found in the Player Input actions.", this);
            return;
        }

        jobPanelAction.started += ShowJobPanel;
        jobPanelAction.canceled += HideJobPanel;
        jobPanelAction.Enable();
    }

    private void OnDisable()
    {
        if (jobPanelButton != null)
            jobPanelButton.onClick.RemoveListener(ToggleJobPanel);

        if (jobPanelAction == null)
            return;

        jobPanelAction.started -= ShowJobPanel;
        jobPanelAction.canceled -= HideJobPanel;
        jobPanelAction.Disable();
        jobPanelAction = null;
    }

    private void DisplayCurrentJob()
    {
        SetPanelText("Job Name", CurrentJob != null ? CurrentJob.Title : "No job selected");
        SetPanelText("Job Description", CurrentJob != null ? CurrentJob.Story : "");
        SetPanelText("Job Location", CurrentJob != null ? CurrentJob.Location.ToString() : "");
        SetPanelText("Job Difficulty", CurrentJob != null ? CurrentJob.Tier.ToString() : "");
        SetPanelText("Job Reward", CurrentJob != null ? $"{CurrentJob.RewardCoins} Coins" : "");
    }

    private void SetPanelText(string objectName, string value)
    {
        Transform textObject = jobDescriptionPanel.transform.Find(objectName);
        if (textObject != null && textObject.TryGetComponent(out TMP_Text text))
            text.text = value;
    }

    private void ShowJobPanel(InputAction.CallbackContext context)
    {
        jobPanelHeld = true;
        UpdateJobPanel();
    }

    private void HideJobPanel(InputAction.CallbackContext context)
    {
        jobPanelHeld = false;
        UpdateJobPanel();
    }

    public void ToggleJobPanel()
    {
        buttonPanelOpen = !buttonPanelOpen;
        UpdateJobPanel();
    }

    private void UpdateJobPanel()
    {
        if (jobDescriptionPanel != null)
            jobDescriptionPanel.SetActive(buttonPanelOpen || jobPanelHeld);
    }
}
