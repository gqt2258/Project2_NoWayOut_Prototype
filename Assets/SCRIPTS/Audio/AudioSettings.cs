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
        AudioManager.Instance.SetMusicOn(!AudioManager.Instance.MusicOn);
        Refresh();
    }

    public void OnSoundButton()
    {
        if (AudioManager.Instance == null) return;
        AudioManager.Instance.SetSFXOn(!AudioManager.Instance.SFXOn);
        Refresh();
    }

    void Refresh()
    {
        if (AudioManager.Instance == null) return;
        MusicLabel.text = AudioManager.Instance.MusicOn ? "ON" : "OFF";
        SoundLabel.text = AudioManager.Instance.SFXOn ? "ON" : "OFF";
    }
}