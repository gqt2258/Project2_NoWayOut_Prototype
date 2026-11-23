using System.Collections;
using UnityEngine;

// Quick fade (and a tiny grow) when a panel opens, and a fade when it closes with PanelFade.Hide.
// Added automatically to the lobby, shop, loadout, job board, settings, case file and other panels
// by their scripts. You can also add it to any panel yourself.
[DisallowMultipleComponent]
public class PanelFade : MonoBehaviour
{
    [SerializeField, Min(0f)] float fadeInSeconds = 0.3f;
    [SerializeField, Min(0f)] float fadeOutSeconds = 0.3f;
    [Tooltip("Starts this size and grows to full size. 1 = no grow.")]
    [SerializeField, Range(0.8f, 1f)] float startScale = 0.97f;

    static bool addingToVisiblePanel;   // a panel that is already showing should not fade in

    CanvasGroup group;
    Vector3 fullScale = Vector3.one;
    bool canScale;
    bool ready;

    void Init()
    {
        if (ready) return;
        ready = true;
        group = GetComponent<CanvasGroup>();
        if (group == null) group = gameObject.AddComponent<CanvasGroup>();
        fullScale = transform.localScale;

        // A root Canvas's size is set by its Canvas Scaler, so only fade it.
        Canvas canvas = GetComponent<Canvas>();
        canScale = canvas == null || !canvas.isRootCanvas;
    }

    void OnEnable()
    {
        Init();
        StopAllCoroutines();

        // Added to a panel that is already on screen (e.g. the main menu when the game opens):
        // leave it as it is. It fades from the next time it opens.
        if (addingToVisiblePanel)
        {
            group.alpha = 1f;
            return;
        }

        StartCoroutine(Fade(0f, 1f, fadeInSeconds, false));
    }

    void OnDisable()
    {
        // Never leave it half faded for next time.
        if (group != null) group.alpha = 1f;
        if (canScale) transform.localScale = fullScale;
    }

    IEnumerator Fade(float from, float to, float seconds, bool hideAtEnd)
    {
        for (float t = 0f; t < seconds; t += Time.unscaledDeltaTime)
        {
            float k = t / seconds;
            group.alpha = Mathf.Lerp(from, to, k);
            if (canScale)
                transform.localScale = fullScale * Mathf.Lerp(hideAtEnd ? 1f : startScale, hideAtEnd ? startScale : 1f, k);
            yield return null;
        }

        group.alpha = to;
        if (canScale) transform.localScale = fullScale;
        if (hideAtEnd) gameObject.SetActive(false);
    }

    // Adds the fade to these panels (empty slots are skipped).
    public static void Add(params GameObject[] panels)
    {
        foreach (GameObject panel in panels)
        {
            if (panel == null || panel.GetComponent<PanelFade>() != null)
                continue;

            addingToVisiblePanel = panel.activeInHierarchy;
            panel.AddComponent<PanelFade>();
            addingToVisiblePanel = false;
        }
    }

    // Turns the panel on with a fade in. Also cancels a fade out that is still running.
    public static void Show(GameObject panel)
    {
        if (panel == null)
            return;

        PanelFade fade = panel.GetComponent<PanelFade>();
        if (fade != null && panel.activeInHierarchy)
        {
            fade.Init();
            fade.StopAllCoroutines();
            fade.StartCoroutine(fade.Fade(fade.group.alpha, 1f, fade.fadeInSeconds, false));
            return;
        }
        panel.SetActive(true);
    }

    // Fades the panel out, then turns it off. Panels without PanelFade just turn off.
    public static void Hide(GameObject panel)
    {
        if (panel == null || !panel.activeSelf)
            return;

        PanelFade fade = panel.GetComponent<PanelFade>();
        if (fade == null || !panel.activeInHierarchy)
        {
            panel.SetActive(false);
            return;
        }

        fade.Init();
        fade.StopAllCoroutines();
        fade.StartCoroutine(fade.Fade(fade.group.alpha, 0f, fade.fadeOutSeconds, true));
    }
}