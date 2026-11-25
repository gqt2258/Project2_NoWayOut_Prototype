using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SettingsAudio : MonoBehaviour
{
    [Header("Button texts")]
    public TMP_Text MusicLabel;
    public TMP_Text SoundLabel;

    [Header("Buttons (optional: connected by this script, no On Click needed)")]
    public Button MusicButton;
    public Button SoundButton;

    [Header("Switch art (optional): the Image on each button shows On or Off")]
    public Image MusicSwitch;
    public Image SoundSwitch;
    public Sprite SwitchOn;
    public Sprite SwitchOff;

    void Awake()
    {
        // Skipped if the button's On Click already calls the same function in the Inspector,
        // so it never toggles twice.
        if (MusicButton != null && !CallsInInspector(MusicButton, nameof(OnMusicButton)))
            MusicButton.onClick.AddListener(OnMusicButton);
        if (SoundButton != null && !CallsInInspector(SoundButton, nameof(OnSoundButton)))
            SoundButton.onClick.AddListener(OnSoundButton);
    }

    static bool CallsInInspector(Button button, string method)
    {
        for (int i = 0; i < button.onClick.GetPersistentEventCount(); i++)
            if (button.onClick.GetPersistentMethodName(i) == method)
                return true;
        return false;
    }

    void OnEnable()
    {
        Refresh();
    }

    // Hook these to each Button's On Click event
    public void OnMusicButton()
    {
        if (AudioManager.Instance == null) return;
        bool on = !AudioManager.Instance.MusicOn;
        AudioManager.Instance.SetMusicOn(on);
        AudioManager.Instance.PlaySFX(on ? AudioManager.Instance.UI.ToggleOn : AudioManager.Instance.UI.ToggleOff);
        Refresh();
    }

    public void OnSoundButton()
    {
        if (AudioManager.Instance == null) return;
        bool on = !AudioManager.Instance.SFXOn;
        // Turning sound off: play the click first, while sound is still on.
        if (!on) AudioManager.Instance.PlaySFX(AudioManager.Instance.UI.ToggleOff);
        AudioManager.Instance.SetSFXOn(on);
        if (on) AudioManager.Instance.PlaySFX(AudioManager.Instance.UI.ToggleOn);
        Refresh();
    }

    void Refresh()
    {
        if (AudioManager.Instance == null) return;
        bool music = AudioManager.Instance.MusicOn;
        bool sound = AudioManager.Instance.SFXOn;
        if (MusicLabel != null) MusicLabel.text = music ? "ON" : "OFF";
        if (SoundLabel != null) SoundLabel.text = sound ? "ON" : "OFF";
        if (MusicSwitch != null && SwitchOn != null && SwitchOff != null) MusicSwitch.sprite = music ? SwitchOn : SwitchOff;
        if (SoundSwitch != null && SwitchOn != null && SwitchOff != null) SoundSwitch.sprite = sound ? SwitchOn : SwitchOff;
    }
}