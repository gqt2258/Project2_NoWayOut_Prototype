using TMPro;
using Unity.Netcode;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

// Gameplay settings panel. The buttons change with who opened it (UI standards):
//   Solo          : solid (game paused)      Resume, End Job, Back to Main Menu
//   Co-op host    : translucent (keeps going) Back to Game, End Job, Back to Main Menu
//   Co-op guest   : translucent (keeps going) Back to Game, Back to Main Menu
// End Job and Back to Main Menu ask "Confirm?" first. Yes earns no coins and uses up the equipment.
// Music and Sound toggles stay as they are (SettingsAudio).
public class GameplaySettings : MonoBehaviour
{
    [SerializeField] GameObject settingsPanel;

    [Header("Look (optional)")]
    [Tooltip("The settings panel's background Image.")]
    [SerializeField] Image background;
    [SerializeField] Color solidColor = new Color(0f, 0f, 0f, 1f);
    [SerializeField] Color translucentColor = new Color(0f, 0f, 0f, 0.6f);
    [Tooltip("Optional text under the title, e.g. \"Game Paused\" in solo.")]
    [SerializeField] TMP_Text subtitleText;

    // Set each button's On Click in the Inspector (like SceneLoader in the Main Menu):
    //   Gear button        -> GameplaySettings.ToggleSettings
    //   Resume button      -> GameplaySettings.CloseSettings
    //   End Job button     -> GameplaySettings.AskEndJob
    //   Main Menu button   -> GameplaySettings.AskMainMenu
    //   Confirm Yes        -> GameplaySettings.ConfirmYes
    //   Confirm No         -> GameplaySettings.ConfirmNo
    // The button slots below are only used to change labels and hide End Job for the guest.
    [Header("Buttons (for labels and visibility only)")]
    [Tooltip("Shows \"Resume\" in solo and \"Back to Game\" in co-op.")]
    [SerializeField] Button resumeButton;
    [Tooltip("Hidden for the co-op guest. Only the host can end the job.")]
    [SerializeField] Button endJobButton;

    [Header("Confirm panel")]
    [SerializeField] GameObject confirmPanel;
    [Tooltip("The question, e.g. \"End the job?\"")]
    [SerializeField] TMP_Text confirmTitleText;
    [Tooltip("The warning under it, e.g. \"No coins are earned and your equipment is used up.\"")]
    [SerializeField] TMP_Text confirmText;

    [Header("Scene")]
    [SerializeField] string mainMenuScene = "Main Menu";

    bool pausedByMenu;
    bool confirmIsEndJob;

    static bool IsCoopHost => JobSession.IsCoop && NetworkManager.Singleton != null && NetworkManager.Singleton.IsServer;
    static bool IsCoopGuest => JobSession.IsCoop && !IsCoopHost;

    void Start()
    {
        PanelFade.Add(settingsPanel, confirmPanel);
        if (settingsPanel != null)
            settingsPanel.SetActive(false);
        if (confirmPanel != null)
            confirmPanel.SetActive(false);
    }

    // Settings button.
    public void ToggleSettings()
    {
        if (settingsPanel == null)
            return;

        if (settingsPanel.activeSelf)
            CloseSettings();
        else
            OpenSettings();
    }

    public void OpenSettings()
    {
        if (settingsPanel == null)
            return;

        bool solo = !JobSession.IsCoop;

        if (background != null)
            background.color = solo ? solidColor : translucentColor;
        if (subtitleText != null)
        {
            subtitleText.text = solo ? "Game Paused" : "";
            subtitleText.gameObject.SetActive(solo);
        }
        SetLabel(resumeButton, solo ? "Resume" : "Back to Game");
        if (endJobButton != null)
            endJobButton.gameObject.SetActive(!IsCoopGuest);
        if (confirmPanel != null)
            confirmPanel.SetActive(false);

        PanelFade.Show(settingsPanel);
        PlayClick();

        if (solo)
        {
            Time.timeScale = 0f;
            pausedByMenu = true;
        }
    }

    // Resume / Back to Game.
    public void CloseSettings()
    {
        bool wasOpen = settingsPanel != null && settingsPanel.activeSelf;
        if (confirmPanel != null)
            confirmPanel.SetActive(false);
        PanelFade.Hide(settingsPanel);

        if (wasOpen)
            PlayClick();
        Unpause();
    }

    // ---------- CONFIRM ----------

    // End Job button.
    public void AskEndJob()
    {
        if (IsCoopGuest)
            return;

        confirmIsEndJob = true;
        ShowConfirm(IsCoopHost ? "End the job for both players?" : "End the job?",
                    "No coins are earned and your equipment is used up.");
    }

    // Back to Main Menu button.
    public void AskMainMenu()
    {
        confirmIsEndJob = false;
        ShowConfirm(JobSession.IsCoop ? "Leave the job?" : "Go back to the Main Menu?",
                    JobSession.IsCoop
                        ? "You go back to the Main Menu. No coins are earned and your equipment is used up."
                        : "No coins are earned and your equipment is used up.");
    }

    void ShowConfirm(string title, string message)
    {
        if (confirmPanel == null)
        {
            ConfirmYes();   // no confirm panel set up: just do it
            return;
        }

        if (confirmTitleText != null)
            confirmTitleText.text = title;
        if (confirmText != null)
            confirmText.text = message;
        confirmPanel.SetActive(true);
        PlayClick();
    }

    // Confirm panel: No.
    public void ConfirmNo()
    {
        PanelFade.Hide(confirmPanel);
        Play(AudioManager.Instance != null ? AudioManager.Instance.UI.BackClick : null);
    }

    // Confirm panel: Yes.
    public void ConfirmYes()
    {
        Play(AudioManager.Instance != null ? AudioManager.Instance.UI.JobConfirmClick : null);
        if (confirmPanel != null)
            confirmPanel.SetActive(false);
        if (settingsPanel != null)
            settingsPanel.SetActive(false);

        // Ending on purpose: the equipment is used up, so a later disconnect doesn't refund it.
        if (PlayerWallet.Instance != null)
            PlayerWallet.Instance.ForgetMatchEquipment();

        if (confirmIsEndJob)
            EndJob();
        else
            LeaveToMainMenu();
    }

    // Ends the job as a fail ("Job ended"): back to the lobby with the results on top.
    // Co-op: the host ends it for both players, and both see the results in the co-op lobby.
    void EndJob()
    {
        Unpause();
        GameplayEndScreen.Get().ShowLose(RoundEndReason.JobEnded);
    }

    // Leaves the job. In co-op the other player is told, so they see "Returning to Main Menu".
    void LeaveToMainMenu()
    {
        Unpause();
        Time.timeScale = 1f;
        GameplayEndScreen.Get().RecordLeaving();   // results show over the Main Menu

        if (JobSession.IsCoop && DisconnectScreen.Instance != null)
        {
            DisconnectScreen.Instance.LeaveToMainMenu(false);
            return;
        }

        if (NetworkManager.Singleton != null && NetworkManager.Singleton.IsListening)
            NetworkManager.Singleton.Shutdown();
        CoopSession.ReturnToLobby = false;
        ScreenFader.LoadScene(mainMenuScene, "Returning to the office");
    }

    // ---------- HELPERS ----------

    static void SetLabel(Button button, string label)
    {
        TMP_Text text = button != null ? button.GetComponentInChildren<TMP_Text>(true) : null;
        if (text != null)
            text.text = label;
    }

    static void PlayClick()
    {
        if (AudioManager.Instance != null)
            AudioManager.Instance.PlayButtonClick();
    }

    static void Play(AudioClip clip)
    {
        if (AudioManager.Instance != null && clip != null)
            AudioManager.Instance.PlaySFX(clip);
    }

    void OnDestroy()
    {
        Unpause();   // never leave the next scene paused
    }

    void Unpause()
    {
        if (!pausedByMenu)
            return;

        Time.timeScale = 1f;
        pausedByMenu = false;
    }
}