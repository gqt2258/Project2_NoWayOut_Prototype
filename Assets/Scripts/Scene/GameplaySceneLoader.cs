using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

public class GameplayScreenLoader : MonoBehaviour
{
    [Header("Case File (job description)")]
    [Tooltip("The job description panel. Its texts are found by name (anywhere inside it): Job Name, " +
             "Job Description, Job Location, Job Difficulty, Job Reward, Job Clues, Job Objective.")]
    [SerializeField] GameObject caseFilePanel;

    [Header("Briefing (when the job starts)")]
    [Tooltip("Open the Case File by itself when the job starts.")]
    [SerializeField] bool showAtStart = true;
    [Tooltip("Only shown in the briefing, e.g. \"Start Job\". Pressing it closes the file and starts the job.")]
    [SerializeField] Button startJobButton;
    [Tooltip("Shown when the Case File is opened later, e.g. \"Close\" or an X.")]
    [SerializeField] Button closeButton;
    [Tooltip("Goes into the text named Job Objective. {revives} = revives per player.")]
    [TextArea(4, 10)]
    [SerializeField]
    string objective =
        "1. Use the clue to find the cursed item in the maze.\n" +
        "2. Put it in the Deposit at the safe base.\n" +
        "3. Leave through the Portal.\n" +
        "Watch out: the walls shift, and something is hunting you. " +
        "You have {revives} revive(s). Going down drops what you carry.";
    [Tooltip("Input Action on the Player that shows the Case File while held (keyboard). Empty = none.")]
    [SerializeField] string holdActionName = "UI/JobPanel";


    bool caseFileOpen;   // opened with the button
    bool caseFileHeld;   // shown while the key is held
    bool caseFileShown;
    bool briefing;       // the start-of-job briefing is showing
    bool pausedByBriefing;
    InputAction holdAction;

    GameplaySettings settings;   // found in the scene, no slot needed

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

        // Wired here unless you set their On Click in the Inspector yourself.
        if (startJobButton != null && startJobButton.onClick.GetPersistentEventCount() == 0)
            startJobButton.onClick.AddListener(StartJob);
        if (closeButton != null && closeButton.onClick.GetPersistentEventCount() == 0)
            closeButton.onClick.AddListener(CloseCaseFile);
    }

    void Start()
    {
        if (showAtStart && caseFilePanel != null)
            ShowBriefing();

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
        if (pausedByBriefing)
            Time.timeScale = 1f;
        if (holdAction == null)
            return;

        holdAction.started -= OnHoldStarted;
        holdAction.canceled -= OnHoldCanceled;
        holdAction = null;
    }

    // ---------- CASE FILE (job description) ----------

    // The briefing: the case file with Start Job instead of Close. Solo waits (paused) until Start Job.
    // Co-op keeps running (each player starts in the safe base), so one player can't freeze the other.
    void ShowBriefing()
    {
        briefing = true;
        SetButtons();
        caseFileOpen = true;
        RefreshCaseFile();

        if (!JobSession.IsCoop)
        {
            Time.timeScale = 0f;
            pausedByBriefing = true;
        }
    }

    // Start Job button in the briefing.
    public void StartJob()
    {
        if (!briefing)
        {
            CloseCaseFile();
            return;
        }

        briefing = false;
        if (AudioManager.Instance != null)
            AudioManager.Instance.PlaySFX(AudioManager.Instance.UI.JobConfirmClick);
        caseFileOpen = false;
        RefreshCaseFile();
        SetButtons();

        if (pausedByBriefing)
        {
            Time.timeScale = 1f;
            pausedByBriefing = false;
        }
    }

    void SetButtons()
    {
        if (startJobButton != null) startJobButton.gameObject.SetActive(briefing);
        if (closeButton != null) closeButton.gameObject.SetActive(!briefing);
    }

    public void ToggleCaseFile()
    {
        if (briefing)
        {
            StartJob();   
            return;
        }
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
        if (briefing)
        {
            StartJob();
            return;
        }
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
        caseFileHeld = false;   // the briefing stays open until Start Job
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

        GameObject player = GameObject.Find("Player");
        PlayerHealth health = player != null ? player.GetComponent<PlayerHealth>() : null;
        SetText("Job Objective", objective.Replace("{revives}", health != null ? health.RevivesPerMatch.ToString() : "1"));
    }

    // Finds the text by name anywhere inside the Case File (it can be inside pages or boxes).
    void SetText(string objectName, string value)
    {
        foreach (TMP_Text text in caseFilePanel.GetComponentsInChildren<TMP_Text>(true))
        {
            if (text.name == objectName)
            {
                text.text = value;
                return;
            }
        }
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