using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

// Goes on the Portal object at the safe base, next to its Interactable (label "Leave").
// Pressing Leave opens a confirm panel. Yes ends the job:
// - correct item in the Deposit: shows the GameplayEndScreen win (same as before)
// - wrong item or nothing: shows the GameplayEndScreen lose screen
[RequireComponent(typeof(Interactable))]
public class PortalExit : MonoBehaviour
{
    [Header("Confirm panel")]
    [SerializeField] GameObject confirmPanel;
    [SerializeField] TMP_Text confirmText;
    [SerializeField] Button yesButton;
    [SerializeField] Button noButton;

    [Header("Scene")]
    [SerializeField] string mainMenuSceneName = "Main Menu";

    Interactable interactable;
    bool paused;

    void Awake()
    {
        interactable = GetComponent<Interactable>();
        interactable.InteractedBy += OpenConfirm;

        if (yesButton != null) yesButton.onClick.AddListener(LeaveJob);
        if (noButton != null) noButton.onClick.AddListener(OnNoPressed);
        PanelFade.Add(confirmPanel);
        if (confirmPanel != null) confirmPanel.SetActive(false);
    }

    void OnDestroy()
    {
        if (interactable != null) interactable.InteractedBy -= OpenConfirm;
        if (paused) Time.timeScale = 1f;
    }

    void OpenConfirm(GameObject user)
    {
        if (confirmPanel == null)
        {
            LeaveJob();
            return;
        }

        DepositBox box = DepositBox.Instance;
        if (confirmText != null)
            confirmText.text = box != null && box.HasItem
                ? $"Leave with {box.DepositedItemName}?"
                : "No item deposited. Leave anyway?";

        PanelFade.Show(confirmPanel);

        // Same rule as Settings: solo pauses, co-op keeps running.
        if (!JobSession.IsCoop)
        {
            Time.timeScale = 0f;
            paused = true;
        }
    }

    void OnNoPressed()
    {
        if (AudioManager.Instance != null)
            AudioManager.Instance.PlaySFX(AudioManager.Instance.UI.BackClick);
        CloseConfirm();
    }

    public void CloseConfirm()
    {
        PanelFade.Hide(confirmPanel);
        if (paused)
        {
            Time.timeScale = 1f;
            paused = false;
        }
    }

    public void LeaveJob()
    {
        Jobs job = JobSession.SelectedJob;
        DepositBox box = DepositBox.Instance;
        bool correct = job != null && box != null && box.DepositedItemId == job.CorrectItemId;

        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlaySFX(AudioManager.Instance.UI.JobConfirmClick);
            AudioManager.Instance.PlaySFX(AudioManager.Instance.Player.Leave);
        }

        if (confirmPanel != null) confirmPanel.SetActive(false);
        Time.timeScale = 1f;
        paused = false;

        if (correct)
        {
            Debug.Log("Job passed.", this);
            GameplayEndScreen endScreen = FindAnyObjectByType<GameplayEndScreen>();
            if (endScreen != null)
            {
                endScreen.ShowWin();
                return;
            }

            // No end screen in the scene: pay out and go back to the Main Menu.
            if (PlayerWallet.Instance != null)
                PlayerWallet.Instance.AddCoins(job.RewardCoins);
            JobSession.ReportResult(JobResult.Success);
        }
        else
        {
            Debug.Log("Job failed: wrong or no item deposited.", this);
            GameplayEndScreen endScreen = FindAnyObjectByType<GameplayEndScreen>();
            if (endScreen != null)
            {
                endScreen.ShowLose();   // shared with the other player in co-op
                return;
            }
            JobSession.ReportResult(JobResult.Failed);
        }

        ScreenFader.LoadScene(mainMenuSceneName, "Returning to the office");
    }
}