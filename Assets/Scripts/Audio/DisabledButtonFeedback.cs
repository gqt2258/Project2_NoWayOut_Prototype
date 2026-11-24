using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

// Greyed-out buttons can still be pressed: they don't do their action, but they play the
// error sound and, if a message is set, add it to the server log (e.g. "Not enough coins").
//
// This is added to every button in every scene automatically, so there is nothing to set up.
// To give a button a message, type it in Message on this component, or set it from code with
// DisabledButtonFeedback.SetMessage(button, "...").
[RequireComponent(typeof(Button))]
public class DisabledButtonFeedback : MonoBehaviour, IPointerDownHandler, IPointerClickHandler
{
    [Tooltip("Optional. Added to the server log when the greyed-out button is pressed. Empty = sound only.")]
    public string message;

    Button button;
    bool disabledWhenPressed;   // a working button that greys itself out when pressed (e.g. the last page) is not an error

    void Awake()
    {
        button = GetComponent<Button>();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        disabledWhenPressed = button != null && !button.IsInteractable();
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if (button == null || !disabledWhenPressed || eventData.button != PointerEventData.InputButton.Left)
            return;
        disabledWhenPressed = false;

        if (!string.IsNullOrEmpty(message))
            GameServerLogs.AddError(message);   // also plays the error sound
        else if (AudioManager.Instance != null)
            AudioManager.Instance.PlaySFX(AudioManager.Instance.UI.ErrorClick);
    }

    // Sets the message shown when this button is pressed while greyed out.
    public static void SetMessage(Button target, string text)
    {
        if (target == null)
            return;

        DisabledButtonFeedback feedback = target.GetComponent<DisabledButtonFeedback>();
        if (feedback == null)
            feedback = target.gameObject.AddComponent<DisabledButtonFeedback>();
        feedback.message = text;
    }

    // ---------- Added to every button automatically ----------

    static bool hooked;

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
    static void AddToAllScenes()
    {
        if (!hooked)
        {
            hooked = true;
            SceneManager.sceneLoaded += (scene, mode) => AddToScene(scene);
        }
        AddToScene(SceneManager.GetActiveScene());
    }

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
    static void ResetStatics()
    {
        hooked = false;
    }

    static void AddToScene(Scene scene)
    {
        if (!scene.isLoaded)
            return;

        foreach (GameObject root in scene.GetRootGameObjects())
            AddToChildren(root.transform);
    }

    // Also used for buttons created at runtime.
    public static void AddToChildren(Transform root)
    {
        if (root == null)
            return;

        foreach (Button found in root.GetComponentsInChildren<Button>(true))
            if (found.GetComponent<DisabledButtonFeedback>() == null)
                found.gameObject.AddComponent<DisabledButtonFeedback>();
    }
}