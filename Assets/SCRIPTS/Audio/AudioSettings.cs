using UnityEngine;
using TMPro;

public class SettingsAudio : MonoBehaviour
{
    [Header("Button texts")]
    public TMP_Text MusicLabel;
    public TMP_Text SoundLabel;

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
        MusicLabel.text = AudioManager.Instance.MusicOn ? "ON" : "OFF";
        SoundLabel.text = AudioManager.Instance.SFXOn ? "ON" : "OFF";
    }
}