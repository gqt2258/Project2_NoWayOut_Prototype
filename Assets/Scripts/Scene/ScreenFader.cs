using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

// Full-screen fade and loading screen used between scenes and while joining a room.
// It creates itself before the first scene loads and stays loaded, like PlayerWallet.
// Nothing to place in a scene.
//
//   ScreenFader.LoadScene("Gameplay", "Entering the portal")   fade out, load, fade in
//   ScreenFader.ShowLoading("Joining room")                      fade out and wait
//   ScreenFader.HideLoading()                                    fade back in
//
//   ScreenFader.Cover("Leaving room", DoSomething)               fade out, do it, fade back in
//
// It only shows when one of these is called. A scene that loads without it (e.g. the game
// starting) just appears as normal.
//
// To use your own art: make a prefab called "LoadingScreen" inside a folder called Resources,
// with a Canvas, a CanvasGroup and this ScreenFader on its root, and a TMP text child called "Message".
public class ScreenFader : MonoBehaviour
{
    public static ScreenFader Instance { get; private set; }

    [SerializeField, Min(0f)] float fadeOutSeconds = 0.3f;
    [SerializeField, Min(0f)] float fadeInSeconds = 0.4f;
    [Tooltip("The loading screen stays at least this long, so it never just flickers.")]
    [SerializeField, Min(0f)] float minimumLoadingSeconds = 0.8f;

    CanvasGroup group;
    TMP_Text message;
    Coroutine routine;
    Coroutine dots;
    string baseText = "";
    float shownAt;

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
    static void Create()
    {
        if (Instance != null)
            return;

        GameObject prefab = Resources.Load<GameObject>("LoadingScreen");
        GameObject root = prefab != null ? Instantiate(prefab) : BuildDefault();
        root.name = "Screen Fader";
        DontDestroyOnLoad(root);

        ScreenFader fader = root.GetComponent<ScreenFader>();
        if (fader == null) fader = root.AddComponent<ScreenFader>();
        fader.Init();
    }

    void Init()
    {
        Instance = this;
        group = GetComponent<CanvasGroup>();
        if (group == null) group = gameObject.AddComponent<CanvasGroup>();
        Transform found = FindChild(transform, "Message");
        message = found != null ? found.GetComponent<TMP_Text>() : null;

        // Hidden until something asks for the loading screen.
        SetAlpha(0f);
        SetMessage("");
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    void OnDestroy()
    {
        if (Instance == this)
        {
            SceneManager.sceneLoaded -= OnSceneLoaded;
            Instance = null;
        }
    }

    // ---------- PUBLIC ----------

    // Fades to the loading screen, loads the scene, then fades the new scene in.
    public static void LoadScene(string sceneName, string text = "Loading")
    {
        if (Instance == null)
        {
            SceneManager.LoadScene(sceneName);
            return;
        }
        Instance.Run(Instance.LoadRoutine(sceneName, text));
    }

    // Covers the screen and waits (e.g. while joining, or before the host loads a co-op scene).
    public static void ShowLoading(string text = "Loading")
    {
        if (Instance != null)
            Instance.Run(Instance.FadeTo(1f, Instance.fadeOutSeconds, text));
    }

    // Covers the screen, runs the action (e.g. switching lobby panels), then uncovers it.
    public static void Cover(string text, System.Action whileCovered)
    {
        if (Instance == null)
        {
            whileCovered?.Invoke();
            return;
        }
        Instance.Run(Instance.CoverRoutine(text, whileCovered));
    }

    // Uncovers the screen (e.g. joining finished or failed).
    public static void HideLoading()
    {
        if (Instance != null)
            Instance.Run(Instance.FadeInAfterMinimum());
    }

    // ---------- ROUTINES ----------

    void Run(IEnumerator next)
    {
        if (routine != null) StopCoroutine(routine);
        routine = StartCoroutine(next);
    }

    IEnumerator LoadRoutine(string sceneName, string text)
    {
        yield return FadeTo(1f, fadeOutSeconds, text);
        AsyncOperation load = SceneManager.LoadSceneAsync(sceneName);
        while (load != null && !load.isDone)
            yield return null;
        // OnSceneLoaded fades back in.
    }

    IEnumerator CoverRoutine(string text, System.Action whileCovered)
    {
        yield return FadeTo(1f, fadeOutSeconds, text);
        whileCovered?.Invoke();
        yield return FadeInAfterMinimum();
    }

    // A new scene finished loading: take the loading screen away if it is showing.
    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (group.alpha < 0.01f && routine == null)
            return;   // nothing was showing, so nothing to do
        Run(FadeInAfterMinimum());
    }

    IEnumerator FadeInAfterMinimum()
    {
        yield return null;   // let the new scene draw its first frame
        float wait = minimumLoadingSeconds - (Time.unscaledTime - shownAt);
        if (!string.IsNullOrEmpty(baseText) && wait > 0f)
            yield return new WaitForSecondsRealtime(wait);
        yield return FadeTo(0f, fadeInSeconds, null);
    }

    IEnumerator FadeTo(float target, float seconds, string text)
    {
        if (target > 0f)
        {
            if (group.alpha < 0.01f) shownAt = Time.unscaledTime;
            SetMessage(text);
            group.blocksRaycasts = true;   // no taps while the screen is covered
        }

        float start = group.alpha;
        for (float t = 0f; t < seconds; t += Time.unscaledDeltaTime)
        {
            SetAlpha(Mathf.Lerp(start, target, t / seconds));
            yield return null;
        }
        SetAlpha(target);

        if (target <= 0f)
            SetMessage("");
        routine = null;
    }

    void SetAlpha(float alpha)
    {
        group.alpha = alpha;
        group.blocksRaycasts = alpha > 0.01f;
        group.interactable = false;
    }

    void SetMessage(string text)
    {
        baseText = text ?? "";
        if (dots != null) StopCoroutine(dots);
        dots = null;
        if (message == null) return;

        message.text = baseText;
        message.gameObject.SetActive(!string.IsNullOrEmpty(baseText));
        if (!string.IsNullOrEmpty(baseText))
            dots = StartCoroutine(AnimateDots());
    }

    // "Loading" -> "Loading." -> "Loading.." -> "Loading..."
    IEnumerator AnimateDots()
    {
        string trimmed = baseText.TrimEnd('.');
        for (int i = 0; ; i = (i + 1) % 4)
        {
            message.text = trimmed + new string('.', i);
            yield return new WaitForSecondsRealtime(0.35f);
        }
    }

    // ---------- DEFAULT LOOK (black screen, white text bottom right) ----------

    static GameObject BuildDefault()
    {
        var root = new GameObject("Screen Fader", typeof(RectTransform));
        Canvas canvas = root.AddComponent<Canvas>();
        canvas.renderMode = RenderMode.ScreenSpaceOverlay;
        canvas.sortingOrder = 1000;   // above every other canvas
        CanvasScaler scaler = root.AddComponent<CanvasScaler>();
        scaler.uiScaleMode = CanvasScaler.ScaleMode.ConstantPixelSize;
        scaler.scaleFactor = 1f;
        root.AddComponent<GraphicRaycaster>();
        root.AddComponent<CanvasGroup>();

        var background = new GameObject("Background", typeof(RectTransform));
        background.transform.SetParent(root.transform, false);
        RectTransform backgroundRect = background.GetComponent<RectTransform>();
        backgroundRect.anchorMin = Vector2.zero;
        backgroundRect.anchorMax = Vector2.one;
        backgroundRect.offsetMin = backgroundRect.offsetMax = Vector2.zero;
        background.AddComponent<Image>().color = Color.black;

        var textObject = new GameObject("Message", typeof(RectTransform));
        textObject.transform.SetParent(root.transform, false);
        RectTransform rect = textObject.GetComponent<RectTransform>();
        rect.anchorMin = rect.anchorMax = rect.pivot = new Vector2(1f, 0f);
        rect.anchoredPosition = new Vector2(-80f, 60f);
        rect.sizeDelta = new Vector2(1000f, 100f);
        TextMeshProUGUI text = textObject.AddComponent<TextMeshProUGUI>();
        text.fontSize = 47;
        text.color = Color.white;
        text.alignment = TextAlignmentOptions.BottomRight;
        text.raycastTarget = false;

        return root;
    }

    static Transform FindChild(Transform parent, string childName)
    {
        foreach (Transform child in parent.GetComponentsInChildren<Transform>(true))
            if (child.name == childName)
                return child;
        return null;
    }
}