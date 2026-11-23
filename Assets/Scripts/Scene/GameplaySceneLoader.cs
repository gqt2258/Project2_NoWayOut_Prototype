using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;

// The Gameplay version of SceneLoader: opens and closes the Gameplay screens.
// Put it on an object that is always on (e.g. Gameplay Settings), NOT on a panel.
// Point each button's On Click here in the Inspector:
//
//   Case File / Job Description button -> ToggleCaseFile   (or OpenCaseFile / CloseCaseFile)
//   Settings (gear) button             -> ToggleSettings
//   Resume / Back to Game              -> CloseSettings
//   End Job                            -> AskEndJob
//   Back to Main Menu                  -> AskMainMenu
//   Confirm Yes / No                   -> ConfirmYes / ConfirmNo
//
// The Case File is handled here. Settings are passed on to GameplaySettings, which handles
// pausing, solo / host / guest buttons and the confirm panel.
public class GameplayScreenLoader : MonoBehaviour
{
    [Header("Case File (job description)")]
    [Tooltip("The job description panel. Its texts are found by name: Job Name, Job Description, " +
             "Job Location, Job Difficulty, Job Reward, Job Clues.")]
    [SerializeField] GameObject caseFilePanel;
    [Tooltip("Input Action on the Player that shows the Case File while held (keyboard). Empty = none.")]
    [SerializeField] string holdActionName = "UI/JobPanel";

    [Header("Settings")]
    [Tooltip("Found automatically if left empty.")]
    [SerializeField] GameplaySettings settings;

    bool caseFileOpen;   // opened with the button
    bool caseFileHeld;   // shown while the key is held
    bool caseFileShown;
    InputAction holdAction;

    GameplaySettings Settings
    {
        get
        {
            if (settings == null) settings = FindAnyObjectByType<GameplaySettings>();
            return settings;
        }
    }

    void Awake()
    {
        if (caseFilePanel == null)
            return;

        FillCaseFile();
        PanelFade.Add(caseFilePanel);
        caseFilePanel.SetActive(false);
    }

    void Start()
    {
        // The hold key comes from the Player's Input Actions.
        GameObject player = GameObject.Find("Player");
        PlayerInput input = player != null ? player.GetComponent<PlayerInput>() : null;
        if (input == null || input.actions == null || string.IsNullOrEmpty(holdActionName))
            return;

        holdAction = input.actions.FindAction(holdActionName, false);
        if (holdAction == null)
        {
            Debug.LogWarning($"GameplayScreenLoader: Input Action \"{holdActionName}\" was not found.", this);
            return;
        }

        holdAction.started += OnHoldStarted;
        holdAction.canceled += OnHoldCanceled;
        holdAction.Enable();
    }

    void OnDestroy()
    {
        if (holdAction == null)
            return;

        holdAction.started -= OnHoldStarted;
        holdAction.canceled -= OnHoldCanceled;
        holdAction = null;
    }

    // ---------- CASE FILE (job description) ----------

    public void ToggleCaseFile()
    {
        caseFileOpen = !caseFileOpen;
        RefreshCaseFile();
    }

    public void OpenCaseFile()
    {
        caseFileOpen = true;
        RefreshCaseFile();
    }

    public void CloseCaseFile()
    {
        caseFileOpen = false;
        RefreshCaseFile();
    }

    void OnHoldStarted(InputAction.CallbackContext context)
    {
        caseFileHeld = true;
        RefreshCaseFile();
    }

    void OnHoldCanceled(InputAction.CallbackContext context)
    {
        caseFileHeld = false;
        RefreshCaseFile();
    }

    void RefreshCaseFile()
    {
        if (caseFilePanel == null)
            return;

        bool open = caseFileOpen || caseFileHeld;
        if (open == caseFileShown)
            return;
        caseFileShown = open;

        if (open)
            PanelFade.Show(caseFilePanel);
        else
            PanelFade.Hide(caseFilePanel);
        if (AudioManager.Instance != null)
            AudioManager.Instance.PlaySFX(open ? AudioManager.Instance.UI.CaseFileOn : AudioManager.Instance.UI.CaseFileOff);
    }

    // Writes the current job into the Case File's texts.
    void FillCaseFile()
    {
        Jobs job = JobSession.SelectedJob;
        SetText("Job Name", job != null ? job.Title : "No job selected");
        SetText("Job Description", job != null ? job.Story : "");
        SetText("Job Location", job != null ? job.Location.ToString() : "");
        SetText("Job Difficulty", job != null ? job.Tier.ToString() : "");
        SetText("Job Reward", job != null ? $"{job.RewardCoins} Coins" : "");
        SetText("Job Clues", job != null ? job.ItemClue : "");
    }

    void SetText(string objectName, string value)
    {
        Transform textObject = caseFilePanel.transform.Find(objectName);
        if (textObject != null && textObject.TryGetComponent(out TMP_Text text))
            text.text = value;
    }

    // ---------- SETTINGS (handled by GameplaySettings) ----------

    public void ToggleSettings()
    {
        if (Settings != null) Settings.ToggleSettings();
    }

    public void OpenSettings()
    {
        if (Settings != null) Settings.OpenSettings();
    }

    public void CloseSettings()
    {
        if (Settings != null) Settings.CloseSettings();
    }

    public void AskEndJob()
    {
        if (Settings != null) Settings.AskEndJob();
    }

    public void AskMainMenu()
    {
        if (Settings != null) Settings.AskMainMenu();
    }

    public void ConfirmYes()
    {
        if (Settings != null) Settings.ConfirmYes();
    }

    public void ConfirmNo()
    {
        if (Settings != null) Settings.ConfirmNo();
    }
}