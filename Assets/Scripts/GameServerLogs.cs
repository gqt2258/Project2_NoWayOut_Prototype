using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

// Live chat style log. From any script, call:
// ServerLog.Add("Player joined the lobby");
public class GameServerLogs : MonoBehaviour
{
    const int MaxMessages = 50;

    static readonly List<string> history = new List<string>();
    static GameServerLogs instance;

    [SerializeField] ScrollRect scrollRect;
    [SerializeField] TMP_Text messagePrefab;

    [Header("Optional chat bar")]
    [SerializeField] TMP_InputField chatInput;
    [SerializeField] string playerName = "You";

    [Header("Pop-in effect")]
    [SerializeField, Min(0.01f)] float popDuration = 0.15f;

    [Header("Error messages")]
    [SerializeField] string errorIcon = "[!]";   // can also be <sprite name="error">
    [SerializeField] string errorColor = "#FF4040";

    readonly Queue<TMP_Text> lines = new Queue<TMP_Text>();

    // Clears old messages when entering Play mode, even if domain reload is off.
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
    static void ResetStatics()
    {
        history.Clear();
        instance = null;
    }

    public static void Add(string message)
    {
        if (string.IsNullOrWhiteSpace(message)) return;

        string line = $"[{DateTime.Now:HH:mm}] {message}";
        history.Add(line);
        if (history.Count > MaxMessages)
            history.RemoveAt(0);

        if (instance != null)
            instance.CreateLine(line, true);
    }

    public static void AddError(string message)
    {
        string icon = instance != null ? instance.errorIcon : "[!]";
        string color = instance != null ? instance.errorColor : "#FF4040";
        Add($"<color={color}>{icon} {message}</color>");
    }

    // Empties the log, including messages saved while no panel was showing.
    public static void Clear()
    {
        history.Clear();

        if (instance != null)
        {
            instance.RemoveLines();
            instance.RefreshLayout(true);
        }
    }

    void OnEnable()
    {
        instance = this;
        RebuildFromHistory();

        if (chatInput != null)
            chatInput.onSubmit.AddListener(OnChatSubmit);
    }

    void OnDisable()
    {
        if (instance == this)
            instance = null;

        if (chatInput != null)
            chatInput.onSubmit.RemoveListener(OnChatSubmit);
    }

    void OnChatSubmit(string text)
    {
        if (!string.IsNullOrWhiteSpace(text))
            Add($"{playerName}: {text.Trim()}");

        chatInput.text = "";
        chatInput.ActivateInputField();   // keeps the cursor in the chat bar
    }

    // Shows messages sent while this panel was hidden or in another scene.
    void RebuildFromHistory()
    {
        RemoveLines();

        foreach (string message in history)
            CreateLine(message, false);

        RefreshLayout(true);
    }

    void RemoveLines()
    {
        foreach (TMP_Text line in lines)
        {
            if (line != null)
            {
                line.gameObject.SetActive(false);
                Destroy(line.gameObject);
            }
        }
        lines.Clear();
    }

    void CreateLine(string message, bool animate)
    {
        bool stayAtBottom = IsAtBottom();

        TMP_Text line = Instantiate(messagePrefab, scrollRect.content);
        line.gameObject.SetActive(true);
        line.text = message;
        lines.Enqueue(line);

        if (lines.Count > MaxMessages)
        {
            TMP_Text oldest = lines.Dequeue();
            oldest.gameObject.SetActive(false);
            Destroy(oldest.gameObject);
        }

        RefreshLayout(stayAtBottom);

        if (animate)
            StartCoroutine(PopIn(line));
    }

    bool IsAtBottom()
    {
        bool contentFits = scrollRect.content.rect.height <= scrollRect.viewport.rect.height;
        return contentFits || scrollRect.verticalNormalizedPosition <= 0.01f;
    }

    void RefreshLayout(bool scrollToBottom)
    {
        LayoutRebuilder.ForceRebuildLayoutImmediate(scrollRect.content);

        if (scrollToBottom)
            scrollRect.verticalNormalizedPosition = 0f;
    }

    IEnumerator PopIn(TMP_Text line)
    {
        float time = 0f;

        while (time < popDuration)
        {
            if (line == null) yield break;

            float progress = time / popDuration;
            line.alpha = progress;
            line.transform.localScale = Vector3.one * Mathf.Lerp(0.9f, 1f, progress);

            time += Time.unscaledDeltaTime;
            yield return null;
        }

        if (line != null)
        {
            line.alpha = 1f;
            line.transform.localScale = Vector3.one;
        }
    }
}