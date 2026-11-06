using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public sealed class JobBoardController : MonoBehaviour
{
    [Header("Job data")]
    [SerializeField] private JobCatalog catalog;
    [SerializeField] private JobTierSettings[] tierSettings = new JobTierSettings[3];

    [Header("Job cards, in Low / Mid / High order")]
    [SerializeField] private GameObject[] jobPanels = new GameObject[3];
    [SerializeField] private TMP_Text[] titleTexts = new TMP_Text[3];
    [SerializeField] private TMP_Text[] locationTexts = new TMP_Text[3];
    [SerializeField] private TMP_Text[] difficultyTexts = new TMP_Text[3];
    [SerializeField] private TMP_Text[] storyTexts = new TMP_Text[3];
    [SerializeField] private TMP_Text[] rewardTexts = new TMP_Text[3];
    [SerializeField] private Button acceptButton;   // this is now the Confirm button
    [SerializeField] private string gameplaySceneName = "Gameplay";

    private readonly Jobs[] offers = new Jobs[3];
    private Color[] originalCardColors;
    private int selectedIndex = -1;    // card highlighted on the board
    private int confirmedIndex = -1;   // card saved with the Confirm button

    private void Awake()
    {
        originalCardColors = new Color[jobPanels.Length];
        BindCardButtons();
        RefreshConfirmButton();
    }

    // Called every time the board opens. Keeps the same jobs until a new game session.
    public void ShowBoard()
    {
        if (!HasAllOffers())
        {
            GenerateBoard();
            return;
        }

        selectedIndex = confirmedIndex;   // drops any choice that was not confirmed
        UpdateCardColors();
        RefreshConfirmButton();
    }

    public void SelectJob(int index)
    {
        if (index < 0 || index >= offers.Length || offers[index] == null)
            return;

        if (selectedIndex == index)
        {
            CancelSelection();
            return;
        }

        selectedIndex = index;
        UpdateCardColors();
        RefreshConfirmButton();
    }

    public void CancelSelection()
    {
        selectedIndex = -1;
        UpdateCardColors();
        RefreshConfirmButton();
    }

    // Called when the player leaves the lobby. Keeps the same jobs, but none is selected.
    public void ClearSelection()
    {
        selectedIndex = -1;
        confirmedIndex = -1;
        JobSession.Select(null);
        UpdateCardColors();
        RefreshConfirmButton();
    }

    // Saves the highlighted job. Returns true if a job was saved.
    public bool ConfirmSelectedJob()
    {
        if (selectedIndex < 0 || selectedIndex >= offers.Length || offers[selectedIndex] == null)
        {
            Debug.LogWarning("Select a job before confirming it.", this);
            return false;
        }

        confirmedIndex = selectedIndex;
        JobSession.Select(offers[confirmedIndex]);
        return true;
    }

    // Called by the lobby Start button.
    public void StartConfirmedJob()
    {
        if (JobSession.SelectedJob == null)
        {
            Debug.LogWarning("Confirm a job before starting the game.", this);
            return;
        }

        JobSession.RecordAccepted(JobSession.SelectedJob);
        SceneManager.LoadScene(gameplaySceneName);
    }

    private bool HasAllOffers()
    {
        for (int i = 0; i < offers.Length; i++)
            if (offers[i] == null)
                return false;

        return true;
    }

    private void GenerateBoard()
    {
        selectedIndex = -1;
        confirmedIndex = -1;
        JobSession.Select(null);
        RefreshConfirmButton();

        for (int i = 0; i < jobPanels.Length; i++)
        {
            if (jobPanels[i] != null)
                jobPanels[i].SetActive(true);
            if (offers[i] != null)
            {
                Destroy(offers[i]);
                offers[i] = null;
            }
        }
        UpdateCardColors();

        if (catalog == null || tierSettings == null || tierSettings.Length < offers.Length)
        {
            Debug.LogError("Job Board needs a JobCatalog and Low/Mid/High tier settings.", this);
            return;
        }

        var usedOnBoard = new HashSet<string>();
        for (int i = 0; i < offers.Length; i++)
        {
            JobTierSettings settings = tierSettings[i];
            if (settings == null || settings.Tier != (JobTier)i)
            {
                Debug.LogError($"Assign the Low, Mid, and High tier assets in order.", this);
                return;
            }

            offers[i] = CreateOffer(settings, usedOnBoard);
            if (offers[i] == null)
            {
                Debug.LogError($"Could not generate the {settings.Tier} job offer.", this);
                return;
            }

            DisplayOffer(i, offers[i]);
        }
    }

    private void RefreshConfirmButton()
    {
        if (acceptButton != null)
            acceptButton.interactable = selectedIndex >= 0;
    }

    private Jobs CreateOffer(JobTierSettings settings, HashSet<string> usedOnBoard)
    {
        const int attempts = 64;
        for (int attempt = 0; attempt < attempts; attempt++)
        {
            JobLocation location = (JobLocation)Random.Range(0, 3);
            string title;
            string story;
            string itemId;
            if (!catalog.TryGetRandomStoryAndItem(location, out title, out story, out itemId))
                return null;

            string key = location + ":" + itemId;
            if (usedOnBoard.Contains(key))
                continue;
            if (attempt < attempts - 1 && JobSession.WasRecentlyUsed(location, itemId))
                continue;

            usedOnBoard.Add(key);
            int seed = Random.Range(10000, 1000000);
            int reward = Random.Range(settings.MinimumRewardCoins, settings.MaximumRewardCoins + 1);
            string jobId = $"J{seed}";
            Jobs job = ScriptableObject.CreateInstance<Jobs>();
            job.name = jobId;
            job.Initialize(jobId, title, story, location, seed, itemId, settings, reward);
            return job;
        }

        return null;
    }

    private void DisplayOffer(int index, Jobs job)
    {
        if (titleTexts != null && index < titleTexts.Length && titleTexts[index] != null)
            titleTexts[index].text = job.Title;
        if (locationTexts != null && index < locationTexts.Length && locationTexts[index] != null)
            locationTexts[index].text = job.Location.ToString();
        if (difficultyTexts != null && index < difficultyTexts.Length && difficultyTexts[index] != null)
            difficultyTexts[index].text = job.Tier.ToString();
        if (storyTexts != null && index < storyTexts.Length && storyTexts[index] != null)
            storyTexts[index].text = job.Story;
        if (rewardTexts != null && index < rewardTexts.Length && rewardTexts[index] != null)
            rewardTexts[index].text = $"{job.RewardCoins} Coins";
    }

    private void BindCardButtons()
    {
        for (int i = 0; i < jobPanels.Length; i++)
        {
            if (jobPanels[i] == null)
                continue;

            Button button = jobPanels[i].GetComponent<Button>();
            if (button == null)
                button = jobPanels[i].AddComponent<Button>();

            Image panelImage = jobPanels[i].GetComponent<Image>();
            if (panelImage != null)
                originalCardColors[i] = panelImage.color;
            if (button.targetGraphic == null)
                button.targetGraphic = panelImage;

            int cardIndex = i;
            button.onClick.RemoveAllListeners();
            button.onClick.AddListener(() => SelectJob(cardIndex));
        }
    }

    private void UpdateCardColors()
    {
        for (int i = 0; i < jobPanels.Length; i++)
        {
            Image panelImage = jobPanels[i] != null ? jobPanels[i].GetComponent<Image>() : null;
            if (panelImage != null)
                panelImage.color = i == selectedIndex
                    ? Color.Lerp(originalCardColors[i], Color.white, 0.5f)
                    : originalCardColors[i];
        }
    }
}