using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Goes on the Results Panel in the Main Menu scene. Opened by SceneLoader over the lobby
// when a job has just ended (solo and co-op).
//
// Layout (landscape):
//   Machine screen: JOB SUMMARY (typed out on the screen)
//     Left column  (Summary Left Text)    Title / Location � Tier / Cursed Item
//     Right column (Player Status Text)   Host (You): Alive � Revives 1/1 / Guest: ... / Time: 4:32
//   Printed slip (already filled in)      STATUS / DEPOSITED / COMMENTS / REWARD
//
// The sequence:
//   1. The screen is off, then turns on (Machine On sound, flicker, the hum starts)
//   2. The job summary types out on the screen (typewriter ticks)
//   3. The printer prints the slip (Print sound). It comes out with everything already on it
//   4. Correct / Wrong Item sound, the coins count up, the stamp lands
//   5. The Pass / Fail sting, then the Back to Lobby button shows
//
// Tapping anywhere on the panel skips to the end.
// Back to Lobby button On Click -> SceneLoader.CloseResults.
// Co-op: only the host can close it (closes it for both). The guest's button says "Waiting for host".
public class ResultsScreen : MonoBehaviour, IPointerClickHandler
{
    [Header("Machine screen")]
    [Tooltip("The machine's screen when it is off (dark).")]
    [SerializeField] private GameObject screenOff;
    [Tooltip("The machine's screen when it is on (lit). The Job Summary texts go inside it.")]
    [SerializeField] private GameObject screenOn;

    [Header("Screen: Job Summary (typed out)")]
    [Tooltip("Left column: Title, Location � Tier, Cursed Item.")]
    [SerializeField] private TMP_Text summaryLeftText;
    [Tooltip("Right column: each player's status and revives, then the time.")]
    [SerializeField] private TMP_Text playerStatusText;

    [Header("Printed slip (comes out already filled in)")]
    [Tooltip("The paper slip. Place it where it should end up (fully printed). Put it under a parent with a " +
             "Rect Mask 2D at the printer's mouth so it is hidden while inside the machine.")]
    [SerializeField] private RectTransform slip;
    [Tooltip("On: the paper comes down out of the printer. Off: it comes up out of it.")]
    [SerializeField] private bool slipComesDown = true;
    [Tooltip("One text for the whole slip: STATUS, DEPOSITED, COMMENTS, REWARD. A monospace font looks best.")]
    [SerializeField] private TMP_Text slipText;
    [Tooltip("Where the values start, as a % of the slip text's width (lines them up after the labels).")]
    [SerializeField, Range(10f, 60f)] private float valueColumn = 30f;
    [Tooltip("Optional. Stamp images shown on the slip at the end.")]
    [SerializeField] private GameObject passStamp;
    [SerializeField] private GameObject failStamp;

    [Header("Button")]
    [Tooltip("Back to Lobby. Its On Click -> SceneLoader.CloseResults.")]
    [SerializeField] private Button backButton;
    [SerializeField] private string backLabel = "Back to Lobby";
    [Tooltip("The button's label when the results show over the Main Menu (the player left the job).")]
    [SerializeField] private string mainMenuLabel = "Continue";
    [SerializeField] private string guestWaitingLabel = "Waiting for host...";

    [Header("Words")]
    [Tooltip("Same Job Catalog as the Job Board. Used for the Cursed Item's name.")]
    [SerializeField] private JobCatalog catalog;
    [SerializeField] private string hostName = "Host";
    [SerializeField] private string guestName = "Guest";
    [SerializeField] private string soloName = "You";
    [SerializeField] private string youTag = " (You)";
    [Tooltip("Shown after the deposited item. Your font needs these symbols, otherwise use e.g. X and OK.")]
    [SerializeField] private string correctMark = "\u2714";
    [SerializeField] private string wrongMark = "x";
    [SerializeField] private Color passColor = new Color(0.2f, 0.65f, 0.3f);
    [SerializeField] private Color failColor = new Color(0.8f, 0.15f, 0.15f);

    [Header("Timing (seconds, real time)")]
    [Tooltip("How long the screen stays off (after the loading screen has gone) before it turns on.")]
    [SerializeField, Min(0f)] private float startDelay = 0.8f;
    [SerializeField, Min(0f)] private float turnOnSeconds = 0.6f;
    [SerializeField, Min(1f)] private float lettersPerSecond = 40f;
    [Tooltip("Pause at the end of each typed line.")]
    [SerializeField, Min(0f)] private float linePause = 0.12f;
    [SerializeField, Min(0f)] private float printDelay = 0.4f;
    [SerializeField, Min(0f)] private float printSeconds = 1.4f;
    [SerializeField, Min(1)] private int printSteps = 6;
    [Tooltip("Pause between the slip finishing printing and the right / wrong item sound.")]
    [SerializeField, Min(0f)] private float resultDelay = 0.4f;
    [Tooltip("How long the coin total takes to count up to the new amount.")]
    [SerializeField, Min(0f)] private float coinCountSeconds = 0.8f;
    [SerializeField, Min(0f)] private float stampDelay = 0.4f;
    [SerializeField, Min(0f)] private float stingDelay = 0.5f;

    [Header("Typewriter ticks (screen)")]
    [Tooltip("A tick every this many letters (1 = every letter). Spaces never tick.")]
    [SerializeField, Min(1)] private int tickEveryLetters = 1;

    private Coroutine sequence;
    private Vector2 slipShownPosition;
    private bool slipPositionSaved;
    private bool humStarted;
    private bool stingPlayed;
    private bool done;

    public bool IsDone => done;

    private static AudioManager Sound => AudioManager.Instance;
    private static bool Passed => RoundResult.Result == JobResult.Success;

    private void OnEnable()
    {
        GameServerLogs.Paused = true;   // nothing goes into the lobby's server log while the results show
        Time.timeScale = 1f;
        if (!slipPositionSaved)
        {
            if (slip != null) slipShownPosition = slip.anchoredPosition;
            slipPositionSaved = true;
        }

        if (!RoundResult.Pending)
        {
            ShowEnd();
            return;
        }

        Prepare();
        // The coin amount (CoinDisplay / CoinLogs) shows the old total until the reward prints.
        if (PlayerWallet.Instance != null)
            PlayerWallet.Instance.HoldCoinDisplay(PlayerWallet.Instance.Coins - RoundResult.CoinsEarned);
        sequence = StartCoroutine(Play());
    }

    private void OnDisable()
    {
        GameServerLogs.Paused = false;
        if (sequence != null) StopCoroutine(sequence);
        sequence = null;
        if (PlayerWallet.Instance != null)
            PlayerWallet.Instance.ReleaseCoinDisplay(0f, false);   // closed early: just show the real total
    }

    // ---------- SEQUENCE ----------

    private IEnumerator Play()
    {
        // The screen sits dark until the loading screen has gone, so the player sees it turn on.
        while (ScreenFader.IsCovering)
            yield return null;
        yield return new WaitForSecondsRealtime(startDelay);

        // 1. Machine on
        if (Sound != null) Sound.PlaySFX(Sound.Results.MachineOn);
        yield return Flicker();
        StartHum();

        // 2. Job summary types out on the screen
        yield return TypeLines(summaryLeftText, SummaryLines());
        yield return TypeLines(playerStatusText, PlayerStatusLines());

        // 3. Printer: the slip comes out with everything already on it
        yield return new WaitForSecondsRealtime(printDelay);
        if (Sound != null) Sound.PlaySFX(Sound.Results.Print);
        if (slip != null)
            yield return PrintPaper(slip, slipShownPosition, slipComesDown);

        // 4. Right / wrong item, coins, stamp
        yield return new WaitForSecondsRealtime(resultDelay);
        if (Sound != null) Sound.PlaySFX(Passed ? Sound.Results.CorrectItem : Sound.Results.WrongItem);
        if (PlayerWallet.Instance != null)
            PlayerWallet.Instance.ReleaseCoinDisplay(coinCountSeconds);   // "+50" pops, the total counts up
        if (Sound != null && RoundResult.CoinsEarned > 0)
            Sound.PlaySFX(Sound.UI.CoinGain);

        yield return new WaitForSecondsRealtime(stampDelay);
        GameObject stamp = Passed ? passStamp : failStamp;
        if (stamp != null)
        {
            stamp.SetActive(true);
            yield return Punch(stamp.transform);
        }

        // 5. Sting
        yield return new WaitForSecondsRealtime(stingDelay);
        PlaySting();
        ShowEnd();
        sequence = null;
    }

    // A paper coming out of its slot in jerky steps, like a receipt printer.
    private IEnumerator PrintPaper(RectTransform paper, Vector2 shown, bool comesDown)
    {
        Vector2 from = HiddenPosition(paper, shown, comesDown);
        for (int step = 1; step <= printSteps; step++)
        {
            Vector2 target = Vector2.Lerp(from, shown, step / (float)printSteps);
            Vector2 start = paper.anchoredPosition;
            float move = printSeconds / printSteps * 0.4f;
            for (float t = 0f; t < move; t += Time.unscaledDeltaTime)
            {
                paper.anchoredPosition = Vector2.Lerp(start, target, t / move);
                yield return null;
            }
            paper.anchoredPosition = target;
            yield return new WaitForSecondsRealtime(printSeconds / printSteps * 0.6f);
        }
    }

    // Types the lines one after another into the text, with a tick per letter.
    private IEnumerator TypeLines(TMP_Text text, List<string> lines)
    {
        if (text == null || lines.Count == 0)
            yield break;

        text.maxVisibleCharacters = 0;
        int[] lineEnds = new int[lines.Count];
        for (int line = 0; line < lines.Count; line++)
            lineEnds[line] = VisibleCountUpTo(text, lines, line);

        text.text = string.Join("\n", lines);
        text.ForceMeshUpdate();
        TMP_TextInfo info = text.textInfo;

        int shownCount = 0;
        int tickCounter = 0;
        for (int line = 0; line < lines.Count; line++)
        {
            int lineEnd = lineEnds[line];
            float shown = shownCount;
            while (shownCount < lineEnd)
            {
                shown += lettersPerSecond * Time.unscaledDeltaTime;
                int next = Mathf.Min(lineEnd, Mathf.FloorToInt(shown));
                for (int i = shownCount; i < next; i++)
                {
                    bool isLetter = i < info.characterCount && !char.IsWhiteSpace(info.characterInfo[i].character);
                    if (isLetter && tickCounter++ % tickEveryLetters == 0)
                        Tick();
                }
                shownCount = next;
                text.maxVisibleCharacters = shownCount;
                yield return null;
            }

            if (Sound != null && Sound.Results.TypeReturn != null)
                Sound.PlaySFX(Sound.Results.TypeReturn);
            yield return new WaitForSecondsRealtime(linePause);
        }

        text.maxVisibleCharacters = 99999;
    }

    // How many characters TMP counts for lines 0..line (tags are not counted, line breaks are).
    private static int VisibleCountUpTo(TMP_Text text, List<string> lines, int line)
    {
        text.text = string.Join("\n", lines.GetRange(0, line + 1));
        text.ForceMeshUpdate();
        return text.textInfo.characterCount;
    }

    private void Tick()
    {
        if (Sound == null || Sound.Results.TypeTicks == null || Sound.Results.TypeTicks.Length == 0)
            return;
        Sound.PlayRandomSFX(Sound.Results.TypeTicks);
    }

    private IEnumerator Flicker()
    {
        if (screenOn == null)
        {
            if (screenOff != null) screenOff.SetActive(false);
            yield return new WaitForSecondsRealtime(turnOnSeconds);
            yield break;
        }

        float[] pattern = { 0.06f, 0.08f, 0.05f, 0.15f, 0.08f, 0.1f };   // on, off, on, off, on, off... then stays on
        float used = 0f;
        for (int i = 0; i < pattern.Length; i++)
        {
            SetScreen(i % 2 == 0);
            yield return new WaitForSecondsRealtime(pattern[i]);
            used += pattern[i];
        }
        SetScreen(true);
        if (turnOnSeconds > used)
            yield return new WaitForSecondsRealtime(turnOnSeconds - used);
    }

    private static IEnumerator Punch(Transform target)
    {
        const float seconds = 0.12f;
        for (float t = 0f; t < seconds; t += Time.unscaledDeltaTime)
        {
            target.localScale = Vector3.one * Mathf.Lerp(1.6f, 1f, t / seconds);
            yield return null;
        }
        target.localScale = Vector3.one;
    }

    // ---------- SKIP ----------

    // Tap anywhere on the panel: jump to the end.
    public void OnPointerClick(PointerEventData eventData)
    {
        if (done || sequence == null)
            return;

        StopCoroutine(sequence);
        sequence = null;
        StartHum();
        SetScreen(true);
        ShowAllText();
        if (PlayerWallet.Instance != null)
            PlayerWallet.Instance.ReleaseCoinDisplay(0f);
        if (slip != null) slip.anchoredPosition = slipShownPosition;

        GameObject stamp = Passed ? passStamp : failStamp;
        if (stamp != null)
        {
            stamp.SetActive(true);
            stamp.transform.localScale = Vector3.one;
        }

        PlaySting();
        ShowEnd();
    }

    private void ShowAllText()
    {
        if (summaryLeftText != null)
        {
            summaryLeftText.text = string.Join("\n", SummaryLines());
            summaryLeftText.maxVisibleCharacters = 99999;
        }
        if (playerStatusText != null)
        {
            playerStatusText.text = PlayerStatusText();
            playerStatusText.maxVisibleCharacters = 99999;
        }
        if (slipText != null)
        {
            slipText.text = string.Join("\n", SlipLines());
            slipText.maxVisibleCharacters = 99999;
        }
    }

    // ---------- SETUP ----------

    private void Prepare()
    {
        done = false;
        humStarted = false;
        stingPlayed = false;

        SetScreen(false);
        ClearText(summaryLeftText);
        ClearText(playerStatusText);
        // The slip is printed already filled in. It's hidden inside the machine until it prints.
        if (slipText != null)
        {
            slipText.text = string.Join("\n", SlipLines());
            slipText.maxVisibleCharacters = 99999;
        }
        if (passStamp != null) passStamp.SetActive(false);
        if (failStamp != null) failStamp.SetActive(false);
        if (slip != null) slip.anchoredPosition = HiddenPosition(slip, slipShownPosition, slipComesDown);
        if (backButton != null) backButton.gameObject.SetActive(false);
    }

    private static void ClearText(TMP_Text text)
    {
        if (text == null) return;
        text.text = "";
        text.maxVisibleCharacters = 0;
    }

    private void SetScreen(bool on)
    {
        if (screenOn != null) screenOn.SetActive(on);
        if (screenOff != null) screenOff.SetActive(!on);
    }

    // Inside the machine: one paper-height above (or below) where it ends up.
    private static Vector2 HiddenPosition(RectTransform paper, Vector2 shown, bool comesDown)
    {
        float height = paper.rect.height;
        return shown + new Vector2(0f, comesDown ? height : -height);
    }

    private void StartHum()
    {
        if (humStarted || Sound == null)
            return;
        humStarted = true;
        Sound.PlayResultsHum();
    }

    private void PlaySting()
    {
        if (stingPlayed || Sound == null)
            return;
        stingPlayed = true;
        Sound.PlaySFX(Passed ? Sound.Results.Pass : Sound.Results.Fail);
    }

    // The Back to Lobby button. The co-op guest waits for the host.
    private void ShowEnd()
    {
        done = true;
        if (backButton == null)
            return;

        Unity.Netcode.NetworkManager network = Unity.Netcode.NetworkManager.Singleton;
        bool guest = RoundResult.WasCoop && network != null && network.IsListening && !network.IsServer;

        backButton.gameObject.SetActive(true);
        backButton.interactable = !guest;
        DisabledButtonFeedback.SetMessage(backButton, guest ? "Only the host can close the results" : "");
        TMP_Text label = backButton.GetComponentInChildren<TMP_Text>(true);
        if (label != null)
            label.text = guest ? guestWaitingLabel : RoundResult.BackToMainMenu ? mainMenuLabel : backLabel;
    }

    // ---------- WORDS ----------

    private List<string> SummaryLines()
    {
        Jobs job = RoundResult.Job;
        return new List<string>
        {
            $"Title: {(job != null ? job.Title : "Unknown")}",
            $"Location: {(job != null ? $"{job.Location} � {job.Tier} Tier" : "-")}",
            $"Cursed Item: {CursedItemName() ?? "Unknown"}",
        };
    }

    private string PlayerStatusText() => string.Join("\n", PlayerStatusLines());

    private List<string> PlayerStatusLines()
    {
        var lines = new List<string>();
        string me = PlayerLine(RoundResult.IsOut, RoundResult.RevivesLeft, RoundResult.RevivesTotal);

        if (!RoundResult.WasCoop)
        {
            lines.Add($"{soloName}: {me}");
        }
        else
        {
            string partner = RoundResult.PartnerKnown
                ? PlayerLine(RoundResult.PartnerIsOut, RoundResult.PartnerRevivesLeft, RoundResult.PartnerRevivesTotal)
                : RoundResult.Reason == RoundEndReason.LeftJob ? "Still in the job" : "Disconnected";
            string hostLine = RoundResult.WasHost ? $"{hostName}{youTag}: {me}" : $"{hostName}: {partner}";
            string guestLine = RoundResult.WasHost ? $"{guestName}: {partner}" : $"{guestName}{youTag}: {me}";
            lines.Add(hostLine);
            lines.Add(guestLine);
        }

        int seconds = Mathf.FloorToInt(RoundResult.Seconds);
        lines.Add($"Time: {seconds / 60}:{seconds % 60:00}");
        return lines;
    }

    private static string PlayerLine(bool isOut, int revivesLeft, int revivesTotal)
    {
        return $"{(isOut ? "Down" : "Alive")} � Revives {revivesLeft}/{revivesTotal}";
    }

    private List<string> SlipLines()
    {
        string color = ColorUtility.ToHtmlStringRGB(Passed ? passColor : failColor);
        string status = Passed ? "[PASS]" : "[FAIL]";

        string deposited = string.IsNullOrEmpty(RoundResult.DepositedItemName)
            ? $"Nothing  <color=#{ColorUtility.ToHtmlStringRGB(failColor)}>{wrongMark}</color>"
            : $"{RoundResult.DepositedItemName}  <color=#{color}>{(Passed ? correctMark : wrongMark)}</color>";

        return new List<string>
        {
            $"STATUS:<pos={valueColumn}%><color=#{color}>{status}</color>",
            $"DEPOSITED:<pos={valueColumn}%>{deposited}",
            $"COMMENTS:<pos={valueColumn}%>{CommentText()}",
            $"REWARD:<pos={valueColumn}%>{RewardText()}",
        };
    }

    private string CommentText()
    {
        switch (RoundResult.Reason)
        {
            case RoundEndReason.CorrectItem: return "Correct item recovered.";
            case RoundEndReason.WrongItem: return "Wrong item deposited.";
            case RoundEndReason.NoItem: return "No item deposited.";
            case RoundEndReason.JobEnded:
                return !RoundResult.WasCoop ? "You ended the job." :
                       RoundResult.WasHost ? "You ended the job for the team." : "The host ended the job.";
            case RoundEndReason.LeftJob: return "You left the job.";
            default: return RoundResult.WasCoop ? "Out of revives. Team pulled out." : "Out of revives. Pulled out.";
        }
    }

    // "0 + No revives 50 = +50", "300 = +300", or "0"
    private static string RewardText()
    {
        int total = RoundResult.CoinsEarned;
        if (RoundResult.BonusCoins > 0)
            return $"{RoundResult.BaseCoins} + No revives {RoundResult.BonusCoins} = +{total}";
        return total > 0 ? $"+{total}" : "0";
    }

    private string CursedItemName()
    {
        Jobs job = RoundResult.Job;
        if (job == null || catalog == null)
            return null;
        JobItemRiddle item = catalog.FindItemRiddle(job.CorrectItemId);
        return item != null && !string.IsNullOrEmpty(item.itemName) ? item.itemName : null;
    }
}