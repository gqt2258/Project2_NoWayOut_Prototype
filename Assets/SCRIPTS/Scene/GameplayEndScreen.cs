using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Unity.Netcode;

public class GameplayEndScreen : MonoBehaviour
{
    [SerializeField] private GameObject winScreen;
    [SerializeField] private GameObject loseScreen;
    [SerializeField] private Button winReturnButton;
    [SerializeField] private Button loseReturnButton;

    private bool finished;
    public bool IsFinished => finished;

    private void Awake()
    {
        winScreen.SetActive(false);
        loseScreen.SetActive(false);
        winReturnButton.onClick.AddListener(ReturnToMainMenu);
        loseReturnButton.onClick.AddListener(ReturnToMainMenu);
    }

    public void ShowWin()
    {
        ShowResult(JobResult.Success);
    }

    public void ShowLose()
    {
        ShowResult(JobResult.Failed);
    }

    private void ShowResult(JobResult result)
    {
        if (finished)
            return;

        if (JobSession.IsCoop && NetworkManager.Singleton != null && NetworkManager.Singleton.IsListening)
        {
            NetworkJobSync sync = NetworkManager.Singleton.LocalClient.PlayerObject != null
                ? NetworkManager.Singleton.LocalClient.PlayerObject.GetComponent<NetworkJobSync>() : null;
            if (sync != null)
                sync.RequestResult(result);
            return;
        }

        ApplySharedResult(result);
    }

    public void ApplySharedResult(JobResult result)
    {
        if (finished)
            return;

        finished = true;
        JobSession.ReportResult(result);
        (result == JobResult.Success ? winScreen : loseScreen).SetActive(true);
        Time.timeScale = 0f;
    }

    public void ReturnToMainMenu()
    {
        Time.timeScale = 1f;
        JobSession.ClearResult();
        if (JobSession.IsCoop && NetworkManager.Singleton != null && NetworkManager.Singleton.IsListening)
        {
            NetworkJobSync sync = NetworkManager.Singleton.LocalClient.PlayerObject != null
                ? NetworkManager.Singleton.LocalClient.PlayerObject.GetComponent<NetworkJobSync>() : null;
            if (sync != null)
            {
                sync.ReturnTogether();
                return;
            }
        }
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
