using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AudioManager : MonoBehaviour
{
    public static AudioManager Instance;

    [Header("Sources")]
    public AudioSource MusicSource;
    public AudioSource SfxSource;
    public AudioSource PlayerMovement;
    public AudioSource AmbienceSource;

    [Header("Music")]
    public AudioClip MenuMusic;
    public AudioClip GameMusic;

    [Header("Ambience")]
    public AudioClip GameAmbience;
    [Range(0f, 1f)] public float ambienceVolume = 0.3f;

    [Header("SFX")]
    public AudioClip SystemError;
    public AudioClip[] ButtonClicks;
    public AudioClip PlayerHurt;
    public AudioClip PlayerDied;
    public AudioClip PlayerWalk;
    public AudioClip PlayerRun;
    public AudioClip PlayerBleed;
    public AudioClip WallShift;
    public AudioClip WallWarning;
    public AudioClip MonsterSeenBass;
    public AudioClip MonsterScream;
    public AudioClip MonsterSlash;


    [Header("Volume")]
    [Range(0f, 1f)] public float musicVolume = 0.4f;
    [Range(0f, 1f)] public float sfxVolume = 1f;
    public float fadeTime = 0.5f; // set to 0 for instant switch

    [Header("Scene names (must match exactly)")]
    public string[] menuScenes = { "MainMenu"};
    public string[] gameScenes = { "Gameplay" };

    Coroutine musicRoutine;

    public bool MusicOn { get; private set; }
    public bool SFXOn { get; private set; }

    void Awake()
    {
        if (Instance != null) { Destroy(gameObject); return; }
        Instance = this;
        DontDestroyOnLoad(gameObject);

        SceneManager.sceneLoaded += OnSceneLoaded;

        SfxSource.volume = sfxVolume;
        SetMusicOn(PlayerPrefs.GetInt("music", 1) == 1);
        SetSFXOn(PlayerPrefs.GetInt("sfx", 1) == 1);

        // Play music for the scene we start in
        PlayForScene(SceneManager.GetActiveScene().name);
    }

    void OnDestroy()
    {
        if (Instance == this) SceneManager.sceneLoaded -= OnSceneLoaded;
    }

    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        PlayForScene(scene.name);
    }

    void PlayForScene(string sceneName)
    {
        if (System.Array.IndexOf(menuScenes, sceneName) >= 0)
        {
            PlayMusic(MenuMusic);
            StopAmbience();
        }
        else if (System.Array.IndexOf(gameScenes, sceneName) >= 0)
        {
            PlayMusic(GameMusic);
            PlayAmbience(GameAmbience);
        }
    }

    // ---------- MUSIC ----------
    public void PlayMusic(AudioClip clip)
    {
        if (clip == null) return;
        if (MusicSource.clip == clip && MusicSource.isPlaying) return;

        if (musicRoutine != null) StopCoroutine(musicRoutine);
        musicRoutine = StartCoroutine(SwitchMusic(clip));
    }

    public void StopMusic()
    {
        if (musicRoutine != null) StopCoroutine(musicRoutine);
        MusicSource.Stop();
    }

    IEnumerator SwitchMusic(AudioClip clip)
    {
        // Fade out the current track
        if (MusicSource.isPlaying && fadeTime > 0f)
        {
            float startVol = MusicSource.volume;
            for (float t = 0f; t < fadeTime; t += Time.unscaledDeltaTime)
            {
                MusicSource.volume = Mathf.Lerp(startVol, 0f, t / fadeTime);
                yield return null;
            }
        }

        MusicSource.Stop();
        MusicSource.clip = clip;
        MusicSource.loop = true;
        MusicSource.volume = 0f;
        MusicSource.Play();

        // Fade in the new track
        for (float t = 0f; t < fadeTime; t += Time.unscaledDeltaTime)
        {
            MusicSource.volume = Mathf.Lerp(0f, musicVolume, t / fadeTime);
            yield return null;
        }
        MusicSource.volume = musicVolume;
    }

    public void PlayAmbience(AudioClip clip)
    {
        if (clip == null || AmbienceSource == null) return;
        if (AmbienceSource.clip == clip && AmbienceSource.isPlaying) return;

        AmbienceSource.clip = clip;
        AmbienceSource.loop = true;
        AmbienceSource.volume = ambienceVolume;
        AmbienceSource.Play();
    }

    public void StopAmbience()
    {
        if (AmbienceSource != null) AmbienceSource.Stop();
    }

    // ---------- SFX ----------
    public void PlaySFX(AudioClip clip)
    {
        if (clip != null) SfxSource.PlayOneShot(clip, sfxVolume);
    }
    public void PlayerMoves(bool moving, bool running)
    {
        if (!moving)
        {
            if (PlayerMovement.isPlaying) PlayerMovement.Stop();
            return;
        }

        AudioClip clip = running ? PlayerRun : PlayerWalk;
        if (clip == null) return;

        if (PlayerMovement.clip != clip)
        {
            PlayerMovement.clip = clip;
            PlayerMovement.loop = true;
            PlayerMovement.volume = sfxVolume;
            PlayerMovement.Play();
        }
        else if (!PlayerMovement.isPlaying)
        {
            PlayerMovement.Play();
        }
    }

    public void PlayButtonClick()
    {
        if (ButtonClicks == null || ButtonClicks.Length == 0) return;
        PlaySFX(ButtonClicks[Random.Range(0, ButtonClicks.Length)]);
    }
    // ---------- SETTINGS ----------
    public void SetMusicOn(bool on)
    {
        MusicOn = on;
        MusicSource.mute = !on;
        PlayerPrefs.SetInt("music", on ? 1 : 0);
        PlayerPrefs.Save();
    }

    public void SetSFXOn(bool on)
    {
        SFXOn = on;
        SfxSource.mute = !on;
        AmbienceSource.mute = !on;
        PlayerPrefs.SetInt("sfx", on ? 1 : 0);
        PlayerPrefs.Save();
    }
}
