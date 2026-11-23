using System.Collections;
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

    [Header("Results audio timing (seconds, real time)")]
    [SerializeField, Min(0f)] private float printDelay = 1.2f;
    [SerializeField, Min(0f)] private float itemResultDelay = 1.4f;
    [SerializeField, Min(0f)] private float coinsDelay = 0.6f;
    [SerializeField, Min(0f)] private float stingDelay = 0.6f;

    private bool finished;
    private bool rewardPending;
    public bool IsFinished => finished;

    private void Awake()
    {
        PanelFade.Add(winScreen, loseScreen);
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
        if (PlayerWallet.Instance != null)
            PlayerWallet.Instance.ForgetMatchEquipment();   // a finished job is never refunded
        (result == JobResult.Success ? winScreen : loseScreen).SetActive(true);
        Time.timeScale = 0f;

        // Each player is paid on their own device, so this works in solo and co-op.
        rewardPending = result == JobResult.Success && JobSession.SelectedJob != null;

        if (isActiveAndEnabled && AudioManager.Instance != null)
            StartCoroutine(PlayResultsSequence(result == JobResult.Success));
        else
            PayReward();
    }

    // Machine turns on and hums, prints the slip, shows right or wrong, adds the coins, then the sting.
    private IEnumerator PlayResultsSequence(bool success)
    {
        AudioManager audio = AudioManager.Instance;
        audio.SetChase(false);
        audio.SetHeartbeat(false);

        audio.PlaySFX(audio.Results.MachineOn);
        AudioSource hum = audio.PlayLoop(audio.ResultsMachineHum, 0.6f);

        yield return new WaitForSecondsRealtime(printDelay);
        audio.PlaySFX(audio.Results.Print);

        yield return new WaitForSecondsRealtime(itemResultDelay);
        audio.PlaySFX(success ? audio.Results.CorrectItem : audio.Results.WrongItem);

        yield return new WaitForSecondsRealtime(coinsDelay);
        PayReward();   // plays the coin sound

        yield return new WaitForSecondsRealtime(stingDelay);
        audio.StopLoop(hum);
        audio.PlaySFX(success ? audio.Results.Pass : audio.Results.Fail);
    }

    private void PayReward()
    {
        if (!rewardPending)
            return;

        rewardPending = false;
        if (PlayerWallet.Instance != null && JobSession.SelectedJob != null)
            PlayerWallet.Instance.AddCoins(JobSession.SelectedJob.RewardCoins);
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
        ScreenFader.LoadScene("Main Menu", "Returning to the office");
    }

    private void OnDestroy()
    {
        PayReward();   // leaving before the sequence finished still pays the reward
        if (winReturnButton != null)
            winReturnButton.onClick.RemoveListener(ReturnToMainMenu);
        if (loseReturnButton != null)
            loseReturnButton.onClick.RemoveListener(ReturnToMainMenu);
        if (finished)
            Time.timeScale = 1f;
    }
}