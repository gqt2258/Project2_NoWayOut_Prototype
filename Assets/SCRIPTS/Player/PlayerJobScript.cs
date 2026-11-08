using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerJobScript : MonoBehaviour
{
    public Jobs CurrentJob { get; private set; }
    public IReadOnlyList<GameObject> CarriedItems => carriedItems;
    public IReadOnlyList<GameObject> DepositedItems => depositedItems;

    [SerializeField, Min(0.1f)] private float pickupRange = 1.5f;
    [SerializeField] private Transform depositPoint;
    [SerializeField, Min(0.1f)] private float depositRange = 1.5f;

    private GameObject jobDescriptionPanel;
    private InputAction jobPanelAction;
    private InputAction interactAction;
    [SerializeField] private List<GameObject> carriedItems = new List<GameObject>();
    [SerializeField] private List<GameObject> depositedItems = new List<GameObject>();

    private void Awake()
    {
        CurrentJob = JobSession.SelectedJob;

        // This script can also exist on a scene helper object. Only the player
        // instance controls the in-game panel.
        if (GetComponent<PlayerInput>() == null)
            return;

        if (depositPoint == null)
        {
            GameObject point = GameObject.Find("Deposit Point");
            if (point != null)
                depositPoint = point.transform;
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
        if (depositPoint == null || carriedItems.Count == 0 || !depositPoint.TryGetComponent(out DepositPoint deposit))
            return;

        Vector2 distance = transform.position - depositPoint.position;
        if (distance.sqrMagnitude > depositRange * depositRange)
            return;

        foreach (GameObject item in carriedItems)
        {
            deposit.Deposit(item);
            depositedItems.Add(item);
        }
        carriedItems.Clear();
    }

    private void OnEnable()
    {
        PlayerInput playerInput = GetComponent<PlayerInput>();
        if (playerInput == null || playerInput.actions == null)
            return;

        interactAction = playerInput.actions.FindAction("Player/Interact", false);
        if (interactAction != null)
        {
            interactAction.performed += PickUpNearbyItem;
            interactAction.Enable();
        }

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
        if (jobPanelAction != null)
        {
            jobPanelAction.started -= ShowJobPanel;
            jobPanelAction.canceled -= HideJobPanel;
            jobPanelAction.Disable();
            jobPanelAction = null;
        }

        if (interactAction != null)
        {
            interactAction.performed -= PickUpNearbyItem;
            interactAction.Disable();
            interactAction = null;
        }
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

    private void PickUpNearbyItem(InputAction.CallbackContext context)
    {
        GameObject closestItem = null;
        float closestDistance = pickupRange * pickupRange;
        foreach (GameObject item in GameObject.FindGameObjectsWithTag("Item"))
        {
            float distance = (item.transform.position - transform.position).sqrMagnitude;
            if (distance < closestDistance)
            {
                closestDistance = distance;
                closestItem = item;
            }
        }

        if (closestItem == null)
            return;

        closestItem.SetActive(false);
        carriedItems.Add(closestItem);
    }
}
