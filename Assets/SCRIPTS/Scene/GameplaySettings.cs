using UnityEngine;

// Goes on the settings button's panel controller in the Gameplay scene.
// The settings button opens and closes the panel. In solo the game pauses
// while it is open. In co-op it does not, because the other player keeps playing.
public class GameplaySettings : MonoBehaviour
{
    [SerializeField] GameObject settingsPanel;

    bool pausedByMenu;

    void Start()
    {
        if (settingsPanel != null)
            settingsPanel.SetActive(false);
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

        settingsPanel.SetActive(true);
        if (!JobSession.IsCoop)
        {
            Time.timeScale = 0f;
            pausedByMenu = true;
        }
    }

    // Resume or close button inside the panel.
    public void CloseSettings()
    {
        if (settingsPanel != null)
            settingsPanel.SetActive(false);

        Unpause();
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