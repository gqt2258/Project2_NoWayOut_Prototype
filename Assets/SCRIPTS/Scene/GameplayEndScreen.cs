using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameplayEndScreen : MonoBehaviour
{
    [SerializeField] private GameObject winScreen;
    [SerializeField] private GameObject loseScreen;
    [SerializeField] private Button winReturnButton;
    [SerializeField] private Button loseReturnButton;

    private bool finished;

    private void Awake()
    {
        winScreen.SetActive(false);
        loseScreen.SetActive(false);
        winReturnButton.onClick.AddListener(ReturnToMainMenu);
        loseReturnButton.onClick.AddListener(ReturnToMainMenu);
    }

    public void ShowWin()
    {
        ShowResult(winScreen, JobResult.Success);
    }

    public void ShowLose()
    {
        ShowResult(loseScreen, JobResult.Failed);
    }

    private void ShowResult(GameObject screen, JobResult result)
    {
        if (finished)
            return;

        finished = true;
        JobSession.ReportResult(result);
        screen.SetActive(true);
        Time.timeScale = 0f;
    }

    public void ReturnToMainMenu()
    {
        Time.timeScale = 1f;
        JobSession.ClearResult();
        SceneManager.LoadScene("Main Menu");
    }

    private void OnDestroy()
    {
        if (winReturnButton != null)
            winReturnButton.onClick.RemoveListener(ReturnToMainMenu);
        if (loseReturnButton != null)
            loseReturnButton.onClick.RemoveListener(ReturnToMainMenu);
        if (finished)
            Time.timeScale = 1f;
    }
}
