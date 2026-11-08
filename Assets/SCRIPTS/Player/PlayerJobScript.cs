using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerJobScript : MonoBehaviour
{
    public Jobs CurrentJob { get; private set; }
    public int PickedUpCount => pickedUpCount;
    public IReadOnlyList<string> CarriedItems => carriedItems;
    public IReadOnlyList<string> DepositedItems => depositedItems;
    public bool HasDepositedCorrectItem => CurrentJob != null && depositedItems.Contains(CurrentJob.CorrectItemId);

    private GameObject jobDescriptionPanel;
    private InputAction jobPanelAction;

    [Header("Item progress (Play mode)")]
    [SerializeField] private int pickedUpCount;
    [SerializeField] private List<string> carriedItems = new List<string>();
    [SerializeField] private List<string> depositedItems = new List<string>();

    private Transform depositPoint;
    [SerializeField, Min(0.1f)] private float depositRadius = 1.5f;

    private void Awake()
    {
        CurrentJob = JobSession.SelectedJob;

        // This script can also exist on a scene helper object. Only the player
        // instance controls the in-game panel.
        if (GetComponent<PlayerInput>() == null)
            return;

        GameObject deposit = GameObject.Find("Deposit");
        if (deposit != null)
            depositPoint = deposit.transform;

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
        if (depositPoint == null || carriedItems.Count == 0)
            return;

        if (((Vector2)(transform.position - depositPoint.position)).sqrMagnitude > depositRadius * depositRadius)
            return;

        Debug.Log($"Deposited: {string.Join(", ", carriedItems)}", this);
        depositedItems.AddRange(carriedItems);
        carriedItems.Clear();
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
        if (jobDescriptionPanel != null)
            jobDescriptionPanel.SetActive(true);
    }

    private void HideJobPanel(InputAction.CallbackContext context)
    {
        if (jobDescriptionPanel != null)
            jobDescriptionPanel.SetActive(false);
    }
}
