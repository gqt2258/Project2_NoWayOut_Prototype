using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// One AudioManager for the whole game. It stays loaded across scenes.
// Every sound from the cue sheet has a slot here, so clips can be dragged in from the Inspector.
// Sounds that have variations (e.g. Wall_Shift1-3) use a list. One is picked at random each time.
public class AudioManager : MonoBehaviour
{
    public static AudioManager Instance;

    // ---------- SLOT GROUPS (shown as foldouts in the Inspector) ----------

    // One entry per map. "Location" must match the job location name: Hospital, Prison or Mansion.
    [System.Serializable]
    public class LocationAudio
    {
        public string Location;
        public AudioClip Ambience;          // Ambience_Gameplay_<Location>
        public AudioClip WallWarning;       // Wall_Warning_<Location>
        public AudioClip PlayerWalk;        // Player_WalkWood / Stone / Tile
        public AudioClip MonsterWalk;       // Monster_<Location>_Walk (loop, positional)
        public AudioClip MonsterScream;     // Monster_<Location>_Scream
        public AudioClip MonsterHurt;       // Monster_<Location>_Hurt
    }

    [System.Serializable]
    public class UISounds
    {
        public AudioClip[] DefaultClicks;   // UI_DefaultClick1-4
        public AudioClip ErrorClick;
        public AudioClip BackClick;
        public AudioClip ToggleOn;
        public AudioClip ToggleOff;
        public AudioClip JobBoardOn;
        public AudioClip JobBoardOff;
        public AudioClip JobSelectClick;
        public AudioClip JobConfirmClick;
        public AudioClip LoadoutOn;
        public AudioClip LoadoutOff;
        public AudioClip StartGameClick;
        public AudioClip ShopOn;
        public AudioClip ShopOff;
        public AudioClip ShopBuy;
        public AudioClip ShopUpgrade;
        public AudioClip ShopSell;
        public AudioClip CosmeticEquipOn;
        public AudioClip CosmeticEquipOff;
        public AudioClip CaseFileOn;
        public AudioClip CaseFileOff;
        public AudioClip CoinGain;
    }

    [System.Serializable]
    public class PlayerSounds
    {
        public AudioClip[] HurtVariations;  // Player_Hurt1-3
        public AudioClip Die;
        public AudioClip Panting;
        public AudioClip HeartBeat;         // loop, own player only
        public AudioClip Grab;
        public AudioClip Drop;
        public AudioClip Deposit;
        public AudioClip Revive;
        public AudioClip Appear;
        public AudioClip Leave;
    }

    [System.Serializable]
    public class WallSounds
    {
        public AudioClip[] ShiftVariations; // Wall_Shift1-3
    }

    [System.Serializable]
    public class ToolSounds
    {
        public AudioClip NoiseMakerUse;
        public AudioClip[] NoiseMakerVoices; // Tool_NoiseMaker_Voice1-4
        public AudioClip SmokeGrenadeUse;
        public AudioClip SmokeGrenadeSmoke;
        public AudioClip BearTrapUse;
        public AudioClip BearTrapSnap;
        public AudioClip FlashbangUse;
        public AudioClip FlashbangFlash;
        public AudioClip FreezeGunShoot;
        public AudioClip FreezeGunFreeze;
        public AudioClip GridScannerUse;
        public AudioClip GridScannerBeep;
        public AudioClip EarthWandUse;
        public AudioClip ItemLocatorUse;
        public AudioClip MonsterLocatorUse;
    }

    [System.Serializable]
    public class MonsterSounds
    {
        public AudioClip[] SlashVariations; // Monster_Slash1-3
    }

    [System.Serializable]
    public class ResultsSounds
    {
        public AudioClip MachineOn;
        public AudioClip Print;
        public AudioClip CorrectItem;
        public AudioClip WrongItem;
        public AudioClip Pass;
        public AudioClip Fail;
        public AudioClip[] TypeTicks;       // Results_TypeTick1-3: one per letter typed (random pick + pitch)
        public AudioClip TypeReturn;        // optional: end of each typed line (carriage return / ding)
    }

    [System.Serializable]
    public class CoopSounds
    {
        public AudioClip PartnerDisconnect;
        public AudioClip ConnectionLost;
        public AudioClip Reconnecting;      // loop
        public AudioClip Reconnected;
    }

    // ---------- SOURCES ----------

    [Header("Sources")]
    public AudioSource MusicSource;
    public AudioSource SfxSource;
    public AudioSource PlayerMovement;
    public AudioSource AmbienceSource;

    // ---------- MUSIC ----------

    [Header("Music")]
    public AudioClip MenuMusic;             // BGM_MainMenu
    public AudioClip GameMusic;             // BGM_Gameplay_Default
    public AudioClip ChaseMusic;            // BGM_Gameplay_Chase
    [Tooltip("Seconds to fade into the chase music (short = sudden).")]
    public float chaseFadeIn = 0.5f;
    [Tooltip("Seconds to fade back to the normal music after a chase (long = calm down).")]
    public float chaseFadeOut = 2f;

    // ---------- AMBIENCE ----------

    [Header("Ambience")]
    public AudioClip LobbyAmbience;         // Ambience_Lobby
    public AudioClip PortalHum;             // Ambience_Portal (loop on the portal object)
    public AudioClip ResultsMachineHum;     // Results_MachineHum
    [Range(0f, 1f)] public float ambienceVolume = 0.3f;

    [Header("Per location (Hospital, Prison, Mansion)")]
    [Tooltip("Used when Gameplay is played directly in the Editor without picking a job.")]
    public string testLocation = "Hospital";
    public LocationAudio[] Locations =
    {
        new LocationAudio { Location = "Hospital" },
        new LocationAudio { Location = "Prison" },
        new LocationAudio { Location = "Mansion" },
    };

    // ---------- OTHER ----------

    [Header("Footsteps")]
    [Tooltip("Running plays the walk sound faster. 1 = same speed, 1.3 = 30% faster.")]
    [Range(1f, 2f)] public float runSpeed = 1.3f;
    [Tooltip("Volume of the player's walking and running (yours and your partner's). 1 = full. Can be changed while playing.")]
    [Range(0f, 1f)] public float footstepVolume = 0.6f;
    [Header("Revive")]
    [Tooltip("How fast the revive sound plays. 1 = normal, 1.5 = 50% faster (and a bit higher).")]
    [Range(0.5f, 2f)] public float reviveSoundSpeed = 1.2f;
    [Header("Monster")]
    [Tooltip("Volume of all the monster's sounds (walk loop, scream, slash, hurt). 1 = full.")]
    [Range(0f, 1f)] public float monsterVolume = 0.5f;
    [Tooltip("How far away (world units) the monster's walking can be heard.")]
    [Min(1f)] public float monsterHearingDistance = 12f;
    [Tooltip("The monster's walking loop plays this much faster while it chases. 1 = no change.")]
    [Range(1f, 2f)] public float monsterChaseSpeed = 1.3f;

    // ---------- OLD NAMES ----------
    // Other scripts still use these names. They now read from the new slots,
    // so nothing else needs to change.
    public AudioClip[] ButtonClicks => UI.DefaultClicks;
    public AudioClip SystemError => UI.ErrorClick;
    public AudioClip ShopBuy => UI.ShopBuy;
    public AudioClip BuySound => UI.ShopBuy;
    public AudioClip PlayerHurt => Pick(Player.HurtVariations, null);
    public AudioClip PlayerDied => Player.Die;
    public AudioClip PlayerRun => PlayerWalk;   // running uses the walk sound, played faster
    public AudioClip PlayerWalk { get { LocationAudio l = CurrentLocation(); return l != null ? l.PlayerWalk : null; } }
    public AudioClip WallShift => Pick(Walls.ShiftVariations, null);
    public AudioClip WallWarning { get { LocationAudio l = CurrentLocation(); return l != null ? l.WallWarning : null; } }
    public AudioClip MonsterScream { get { LocationAudio l = CurrentLocation(); return l != null ? l.MonsterScream : null; } }
    public AudioClip MonsterSlash => Pick(Monster.SlashVariations, null);
    public AudioClip GameAmbience { get { LocationAudio l = CurrentLocation(); return l != null ? l.Ambience : null; } }

    // ---------- SFX (new slots) ----------

    [Header("SFX groups (open each foldout)")]
    public UISounds UI = new UISounds();
    public PlayerSounds Player = new PlayerSounds();
    public WallSounds Walls = new WallSounds();
    public ToolSounds Tools = new ToolSounds();
    public MonsterSounds Monster = new MonsterSounds();
    public ResultsSounds Results = new ResultsSounds();
    public CoopSounds Coop = new CoopSounds();

    // ---------- VOLUME AND 3D SETTINGS ----------

    [Header("Volume")]
    [Range(0f, 1f)] public float musicVolume = 0.4f;
    [Range(0f, 1f)] public float sfxVolume = 1f;
    public float fadeTime = 0.5f; // set to 0 for instant switch

    [Header("Variation and 3D sounds")]
    [Tooltip("Random pitch range for sounds with variations, e.g. 0.05 = 0.95 to 1.05.")]
    [Range(0f, 0.3f)] public float pitchVariation = 0.05f;
    [Tooltip("How far away (in world units) a 3D sound can still be heard.")]
    public float defaultAudibleDistance = 8f;
    [Tooltip("How many sounds can play at the same time through PlaySFXAt / PlayRandomSFX.")]
    public int voiceCount = 12;

    [Header("Scene names (must match exactly)")]
    public string[] menuScenes = { "Main Menu", "MainMenu" };
    public string[] gameScenes = { "Gameplay" };

    Coroutine musicRoutine;
    readonly List<AudioSource> voices = new List<AudioSource>();
    int lastSfxFrame = -1;          // a specific 2D sound played this frame, so the default click is skipped
    AudioSource heartbeatLoop;
    int nextVoice;
    bool chasing;
    AudioListener listener;

    public bool MusicOn { get; private set; }
    public bool SFXOn { get; private set; }
    public bool IsChasing => chasing;

    void Awake()
    {
        if (Instance != null)
        {
            // A second AudioManager (e.g. the prefab in Gameplay when coming from the Main Menu):
            // silence it right away so its sources never play over the real one.
            foreach (AudioSource source in GetComponentsInChildren<AudioSource>(true))
                source.Stop();
            gameObject.SetActive(false);
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);

        CreateVoices();
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
        listener = null;   // find the new scene's listener next time
        StopAllCoroutinesExceptMusic();
        StopAllLoops();
        PlayForScene(scene.name);
    }

    // Stops looping sounds from the last scene (heartbeat, reconnecting, results hum).
    public void StopAllLoops()
    {
        foreach (AudioSource voice in voices)
            if (voice != null && voice.loop)
            {
                voice.Stop();
                voice.loop = false;
            }
        heartbeatLoop = null;
    }

    readonly List<Coroutine> effectRoutines = new List<Coroutine>();

    void StopAllCoroutinesExceptMusic()
    {
        foreach (Coroutine routine in effectRoutines)
            if (routine != null) StopCoroutine(routine);
        effectRoutines.Clear();
    }

    void PlayForScene(string sceneName)
    {
        chasing = false;

        if (System.Array.IndexOf(menuScenes, sceneName) >= 0)
        {
            PlayMusic(MenuMusic);
            StopAmbience();
        }
        else if (System.Array.IndexOf(gameScenes, sceneName) >= 0)
        {
            PlayMusic(GameMusic);
            PlayAmbience(GameAmbience);
            PlaySFX(Player.Appear);   // arriving in the map through the portal
            StartCoroutine(WarnAboutOtherMusic());
        }
    }

    // Finds other looping sounds in the scene that aren't from this AudioManager (e.g. an old
    // music object), which would play on top of the music.
    IEnumerator WarnAboutOtherMusic()
    {
        yield return new WaitForSecondsRealtime(1f);
        foreach (AudioSource source in FindObjectsByType<AudioSource>())
        {
            if (source == null || !source.isPlaying || !source.loop || source.transform.IsChildOf(transform))
                continue;
            if (source.clip != null && source.clip.length < 20f)
                continue;   // short loops (footsteps, monster walk, portal hum) are fine
            Debug.LogWarning($"[Audio] \"{source.name}\" is also playing a long loop ({source.clip?.name}). " +
                             "If that is music, remove it: the AudioManager already plays the music.", source);
        }
    }

    // ---------- LOCATION ----------

    // The audio set for the job being played (Hospital, Prison or Mansion). Null if none matches.
    public LocationAudio CurrentLocation()
    {
        if (Locations == null) return null;
        // No job when the Gameplay scene is played directly in the Editor, so use the test location.
        string name = JobSession.SelectedJob != null ? JobSession.SelectedJob.Location.ToString() : testLocation;

        foreach (LocationAudio location in Locations)
            if (location != null && string.Equals(location.Location, name, System.StringComparison.OrdinalIgnoreCase))
                return location;

        return null;
    }

    // ---------- MUSIC ----------

    public void PlayMusic(AudioClip clip)
    {
        PlayMusic(clip, fadeTime, fadeTime);
    }

    public void PlayMusic(AudioClip clip, float fadeOutTime, float fadeInTime)
    {
        if (clip == null) return;
        if (MusicSource.clip == clip && MusicSource.isPlaying) return;

        if (musicRoutine != null) StopCoroutine(musicRoutine);
        musicRoutine = StartCoroutine(SwitchMusic(clip, fadeOutTime, fadeInTime));
    }

    public void StopMusic()
    {
        if (musicRoutine != null) StopCoroutine(musicRoutine);
        MusicSource.Stop();
    }

    // Call SetChase(true) when the monster spots the player, SetChase(false) when the chase ends.
    public void SetChase(bool on)
    {
        if (on == chasing) return;
        chasing = on;

        if (on) PlayMusic(ChaseMusic, chaseFadeIn, chaseFadeIn);
        else PlayMusic(GameMusic, chaseFadeOut, chaseFadeOut);
    }

    IEnumerator SwitchMusic(AudioClip clip, float fadeOutTime, float fadeInTime)
    {
        // Fade out the current track
        if (MusicSource.isPlaying && fadeOutTime > 0f)
        {
            float startVol = MusicSource.volume;
            for (float t = 0f; t < fadeOutTime; t += Time.unscaledDeltaTime)
            {
                MusicSource.volume = Mathf.Lerp(startVol, 0f, t / fadeOutTime);
                yield return null;
            }
        }

        MusicSource.Stop();
        MusicSource.clip = clip;
        MusicSource.loop = true;
        MusicSource.volume = 0f;
        MusicSource.Play();

        // Fade in the new track
        for (float t = 0f; t < fadeInTime; t += Time.unscaledDeltaTime)
        {
            MusicSource.volume = Mathf.Lerp(0f, musicVolume, t / fadeInTime);
            yield return null;
        }
        MusicSource.volume = musicVolume;
    }

    // ---------- AMBIENCE ----------

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

    public void PlayLobbyAmbience() => PlayAmbience(LobbyAmbience);
    public void PlayResultsHum() => PlayAmbience(ResultsMachineHum);

    // ---------- SFX (2D) ----------

    public void PlaySFX(AudioClip clip)
    {
        if (clip == null) return;
        SfxSource.PlayOneShot(clip, sfxVolume);
        lastSfxFrame = Time.frameCount;
    }

    // Picks one clip at random and gives it a small random pitch. Uses fallback if the list is empty.
    public void PlayRandomSFX(AudioClip[] clips, AudioClip fallback = null)
    {
        PlayVoice(Pick(clips, fallback), false, Vector3.zero, 1f, defaultAudibleDistance, true);
    }

    // The default click. Skipped if the button already played its own sound this frame
    // (e.g. Start, Shop open, Buy), so buttons never play two sounds at once.
    public void PlayButtonClick()
    {
        if (lastSfxFrame == Time.frameCount) return;
        if (ButtonClicks == null || ButtonClicks.Length == 0) return;
        PlaySFX(ButtonClicks[rng.Next(ButtonClicks.Length)]);
    }

    // Heartbeat loop for the local player while the monster is close.
    public void SetHeartbeat(bool on)
    {
        if (on)
        {
            if (heartbeatLoop == null || !heartbeatLoop.isPlaying)
                heartbeatLoop = PlayLoop(Player.HeartBeat);
        }
        else if (heartbeatLoop != null)
        {
            StopLoop(heartbeatLoop);
            heartbeatLoop = null;
        }
    }

    // A 2D loop, e.g. Coop.Reconnecting or Player.HeartBeat. Keep the returned source and pass it to StopLoop.
    public AudioSource PlayLoop(AudioClip clip, float volumeScale = 1f)
    {
        AudioSource source = PlayVoice(clip, false, Vector3.zero, volumeScale, defaultAudibleDistance, false);
        if (source != null)
        {
            source.loop = true;
            if (!source.isPlaying) source.Play();
        }
        return source;
    }

    public void StopLoop(AudioSource source)
    {
        if (source == null) return;
        source.Stop();
        source.loop = false;
    }

    // ---------- SFX (3D / positional) ----------

    // A one-shot that plays from a point in the world, e.g. wall shift, bear trap snap, monster slash.
    public void PlaySFXAt(AudioClip clip, Vector3 position, float audibleDistance = -1f)
    {
        PlayVoice(clip, true, position, 1f, Distance(audibleDistance), false);
    }

    // Same as PlaySFXAt, but picks a random variation with a small random pitch.
    public void PlayRandomSFXAt(AudioClip[] clips, Vector3 position, AudioClip fallback = null, float audibleDistance = -1f)
    {
        PlayVoice(Pick(clips, fallback), true, position, 1f, Distance(audibleDistance), true);
    }

    // A loop that follows an object, e.g. monster walk or portal hum.
    // The source should be on a child object of the monster / portal.
    public void PlayLoopOn(AudioSource source, AudioClip clip, float audibleDistance = -1f)
    {
        if (source == null || clip == null) return;
        ConfigureSpatialSource(source, Distance(audibleDistance));
        if (source.clip == clip && source.isPlaying) return;

        source.clip = clip;
        source.loop = true;
        source.volume = sfxVolume;
        source.Play();
    }

    public void StopLoopOn(AudioSource source)
    {
        if (source != null) source.Stop();
    }

    public void ConfigureSpatialSource(AudioSource source, float audibleDistance)
    {
        if (source == null) return;

        source.playOnAwake = false;
        source.spatialBlend = 1f;
        source.rolloffMode = AudioRolloffMode.Linear;
        source.minDistance = 1f;
        source.maxDistance = audibleDistance;
        source.dopplerLevel = 0f;
        source.mute = !SFXOn;

        AudioListener current = FindListener();
        if (current != null && source.transform.parent != null)
        {
            Vector3 origin = source.transform.parent.position;
            source.transform.position = new Vector3(origin.x, origin.y, current.transform.position.z);
        }
    }

    public void PlaySpatialSFX(AudioSource source, AudioClip clip, float volumeScale = 1f)
    {
        if (!SFXOn || source == null || clip == null) return;
        source.volume = sfxVolume * volumeScale;
        source.PlayOneShot(clip);
    }

    // ---------- SHORTCUTS (pick the right clip for the current location / variations) ----------

    public void PlayWallWarning()
    {
        PlaySFX(WallWarning);
    }

    public void PlayWallShift(Vector3 position)
    {
        PlayRandomSFXAt(Walls.ShiftVariations, position);
    }

    public void PlayPlayerHurt()
    {
        PlayRandomSFX(Player.HurtVariations);
    }

    public void PlayMonsterScream(Vector3 position)
    {
        PlayVoice(MonsterScream, true, position, monsterVolume, monsterHearingDistance, false);
    }

    public void PlayMonsterHurt(Vector3 position)
    {
        LocationAudio location = CurrentLocation();
        if (location != null) PlayVoice(location.MonsterHurt, true, position, monsterVolume, monsterHearingDistance, false);
    }

    public void PlayMonsterSlash(Vector3 position)
    {
        PlayVoice(Pick(Monster.SlashVariations, null), true, position, monsterVolume, monsterHearingDistance, true);
    }

    public void PlayMonsterWalk(AudioSource monsterSource, float audibleDistance = -1f)
    {
        LocationAudio location = CurrentLocation();
        if (location != null) PlayLoopOn(monsterSource, location.MonsterWalk, audibleDistance);
        if (monsterSource != null) monsterSource.volume = sfxVolume * monsterVolume;
    }

    // The "use" sound for a tool, found from its name (e.g. "Bear Trap" -> Tools.BearTrapUse).
    public AudioClip ToolUseClip(string toolName)
    {
        string name = (toolName ?? "").Replace(" ", "").ToLowerInvariant();
        if (name.Contains("noisemaker")) return Tools.NoiseMakerUse;
        if (name.Contains("smoke")) return Tools.SmokeGrenadeUse;
        if (name.Contains("beartrap") || name.Contains("trap")) return Tools.BearTrapUse;
        if (name.Contains("flashbang") || name.Contains("flash")) return Tools.FlashbangUse;
        if (name.Contains("freeze")) return Tools.FreezeGunShoot;
        if (name.Contains("scanner")) return Tools.GridScannerUse;
        if (name.Contains("wand")) return Tools.EarthWandUse;
        if (name.Contains("monsterlocator")) return Tools.MonsterLocatorUse;
        if (name.Contains("itemlocator") || name.Contains("locator")) return Tools.ItemLocatorUse;
        return null;
    }

    public void PlayToolUse(string toolName)
    {
        AudioClip clip = ToolUseClip(toolName);
        if (clip != null) PlaySFX(clip);
        else Debug.LogWarning($"AudioManager: no use sound matches the tool \"{toolName}\".", this);
    }

    // Use sound, then the tool's effect sound where it was used (e.g. the flashbang going off).
    // The delays are placeholders until the tool effects are built. Change them in ToolEffect below.
    public void PlayToolUse(string toolName, Vector3 position)
    {
        PlayToolUse(toolName);
        effectRoutines.RemoveAll(routine => routine == null);
        effectRoutines.Add(StartCoroutine(ToolEffect(toolName, position)));
    }

    // Co-op: the other player's tool, heard only where it happened (no 2D "use" sound).
    public void PlayToolEffectAt(string toolName, Vector3 position)
    {
        effectRoutines.RemoveAll(routine => routine == null);
        effectRoutines.Add(StartCoroutine(ToolEffect(toolName, position)));
    }

    IEnumerator ToolEffect(string toolName, Vector3 position)
    {
        string name = (toolName ?? "").Replace(" ", "").ToLowerInvariant();

        if (name.Contains("flash"))
        {
            yield return new WaitForSeconds(1f);
            PlaySFXAt(Tools.FlashbangFlash, position);
            EnemyMovement enemy = FindAnyObjectByType<EnemyMovement>();
            if (enemy != null && Vector2.Distance(enemy.transform.position, position) <= 6f)
                PlayMonsterHurt(enemy.transform.position);   // stunned
        }
        else if (name.Contains("smoke"))
        {
            yield return new WaitForSeconds(0.8f);
            PlaySFXAt(Tools.SmokeGrenadeSmoke, position);
        }
        else if (name.Contains("freeze"))
        {
            yield return new WaitForSeconds(0.25f);
            PlaySFXAt(Tools.FreezeGunFreeze, position);
        }
        else if (name.Contains("scanner"))
        {
            yield return new WaitForSeconds(0.3f);
            PlaySFX(Tools.GridScannerBeep);
        }
        else if (name.Contains("noisemaker"))
        {
            // Voice lines from where it was placed, to lure the monster.
            for (int i = 0; i < 3; i++)
            {
                yield return new WaitForSeconds(i == 0 ? 0.5f : 2.5f);
                PlayNoiseMakerVoice(position);
            }
        }
    }

    // Co-op: a sound the partner made, played in 3D from where they are.
    public void PlayPartnerSound(PlayerSound sound, Vector3 position)
    {
        const float distance = 12f;
        switch (sound)
        {
            case PlayerSound.Grab: PlaySFXAt(Player.Grab, position, distance); break;
            case PlayerSound.Drop: PlaySFXAt(Player.Drop, position, distance); break;
            case PlayerSound.Deposit: PlaySFXAt(Player.Deposit, position, distance); break;
            case PlayerSound.Hurt: PlayRandomSFXAt(Player.HurtVariations, position, null, distance); break;
            case PlayerSound.Die: PlaySFXAt(Player.Die, position, distance); break;
            case PlayerSound.Revive: PlayRevive(true, position, distance); break;
            case PlayerSound.Panting: PlaySFXAt(Player.Panting, position, distance); break;
        }
    }

    // Call when the monster steps into a placed bear trap.
    public void PlayBearTrapSnap(Vector3 trapPosition)
    {
        PlaySFXAt(Tools.BearTrapSnap, trapPosition);
        PlayMonsterHurt(trapPosition);
    }

    public void PlayNoiseMakerVoice(Vector3 position)
    {
        PlayRandomSFXAt(Tools.NoiseMakerVoices, position);
    }

    // ---------- REVIVE ----------

    // The revive sound at Revive Sound Speed. 2D for this player, 3D for the partner's.
    public void PlayRevive(bool spatial = false, Vector3 position = default, float audibleDistance = -1f)
    {
        AudioSource voice = PlayVoice(Player.Revive, spatial, position, 1f, Distance(audibleDistance), false);
        if (voice != null) voice.pitch = reviveSoundSpeed;
    }

    // ---------- PLAYER FOOTSTEPS ----------

    public void PlayerMoves(AudioSource source, bool moving, bool running)
    {
        if (source == null) return;
        moving &= SFXOn;
        if (!moving)
        {
            if (source.isPlaying) source.Stop();
            return;
        }

        AudioClip clip = PlayerWalk;
        if (clip == null) return;

        source.pitch = running ? runSpeed : 1f;
        source.volume = sfxVolume * footstepVolume;   // every frame, so changing it takes effect straight away

        if (source.clip != clip)
        {
            source.clip = clip;
            source.loop = true;
            source.Play();
        }
        else if (!source.isPlaying)
        {
            source.Play();
        }
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
        foreach (AudioSource voice in voices)
            if (voice != null) voice.mute = !on;
        foreach (AudioSource source in FindObjectsByType<AudioSource>())
            if (source.spatialBlend >= 0.99f)
                source.mute = !on;
        PlayerPrefs.SetInt("sfx", on ? 1 : 0);
        PlayerPrefs.Save();
    }

    // ---------- INTERNAL ----------

    void CreateVoices()
    {
        for (int i = 0; i < Mathf.Max(1, voiceCount); i++)
        {
            GameObject voiceObject = new GameObject("SFX Voice " + i);
            voiceObject.transform.SetParent(transform);
            AudioSource voice = voiceObject.AddComponent<AudioSource>();
            voice.playOnAwake = false;
            voices.Add(voice);
        }
    }

    AudioSource PlayVoice(AudioClip clip, bool spatial, Vector3 position, float volumeScale, float audibleDistance, bool randomPitch)
    {
        if (!SFXOn || clip == null || voices.Count == 0) return null;

        AudioSource voice = FreeVoice();
        voice.Stop();
        voice.clip = clip;
        voice.loop = false;
        voice.mute = false;
        voice.volume = sfxVolume * volumeScale;
        voice.pitch = randomPitch ? RandomPitch() : 1f;
        voice.spatialBlend = spatial ? 1f : 0f;
        voice.dopplerLevel = 0f;

        if (spatial)
        {
            voice.rolloffMode = AudioRolloffMode.Linear;
            voice.minDistance = 1f;
            voice.maxDistance = audibleDistance;
            AudioListener current = FindListener();
            float z = current != null ? current.transform.position.z : position.z;
            voice.transform.position = new Vector3(position.x, position.y, z);
        }

        voice.Play();
        if (!spatial) lastSfxFrame = Time.frameCount;
        return voice;
    }

    // A voice that is not playing. If all are busy, reuses the next one that is not a loop.
    AudioSource FreeVoice()
    {
        foreach (AudioSource voice in voices)
            if (!voice.isPlaying) return voice;

        for (int i = 0; i < voices.Count; i++)
        {
            nextVoice = (nextVoice + 1) % voices.Count;
            if (!voices[nextVoice].loop) return voices[nextVoice];
        }
        return voices[0];
    }

    // Audio uses its own random numbers, so it never changes Unity's Random sequence
    // (the maze uses that with the job seed to build the same maze for both players).
    static readonly System.Random rng = new System.Random();

    public float RandomPitch() => 1f + ((float)rng.NextDouble() * 2f - 1f) * pitchVariation;

    AudioClip Pick(AudioClip[] clips, AudioClip fallback)
    {
        if (clips == null || clips.Length == 0) return fallback;
        AudioClip clip = clips[rng.Next(clips.Length)];
        return clip != null ? clip : fallback;
    }

    float Distance(float audibleDistance) => audibleDistance > 0f ? audibleDistance : defaultAudibleDistance;

    AudioListener FindListener()
    {
        if (listener != null) return listener;
        listener = Camera.main != null ? Camera.main.GetComponent<AudioListener>() : null;
        if (listener == null) listener = FindAnyObjectByType<AudioListener>();
        return listener;
    }
}