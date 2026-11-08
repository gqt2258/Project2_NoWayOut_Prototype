using System.Collections;
using NoWayOut.Maze;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PlayerHealth : MonoBehaviour
{
    [SerializeField] private PlayerStat playerStat;
    [SerializeField] private HealthBar healthBar;
    [SerializeField, Min(0.1f)] private float invulnerabilitySeconds = 1f;
    [SerializeField, Min(0.01f)] private float flashInterval = 0.1f;

    [Header("Revive")]
    [Tooltip("Revives each player gets per match.")]
    [SerializeField, Min(0)] private int revivesPerMatch = 1;
    [Tooltip("Optional. The Revive Bar under Stats: full while a revive is left, empty once it is used.")]
    [SerializeField] private Slider reviveBar;
    [Tooltip("How far apart dropped items are scattered, in units.")]
    [SerializeField, Min(0f)] private float dropScatter = 0.4f;
    [Tooltip("Loaded when the job fails. Your results screen there shows the result.")]
    [SerializeField] private string mainMenuSceneName = "Main Menu";

    private int currentHealth;
    private int revivesLeft;
    private bool isInvulnerable;
    private bool jobFailed;

    public Transform spawnPoint;

    private Collider2D[] playerColliders;
    private SpriteRenderer[] spriteRenderers;
    private Rigidbody2D body;

    public int RevivesLeft => revivesLeft;

    private void Awake()
    {
        playerColliders = GetComponents<Collider2D>();
        spriteRenderers = GetComponentsInChildren<SpriteRenderer>(true);
        body = GetComponent<Rigidbody2D>();

        currentHealth = playerStat.playerMaxHealth;
        healthBar.SetMaxHealth(currentHealth);

        revivesLeft = revivesPerMatch;
        RefreshReviveBar();
    }

    // Returns true only when damage was actually taken
    public bool TakeDamage(Collider2D enemyCollider)
    {
        if (isInvulnerable || currentHealth <= 0 || jobFailed)
            return false;

        currentHealth -= 1;
        healthBar.SetHealth(currentHealth);

        if (AudioManager.Instance != null)
            AudioManager.Instance.PlaySFX(AudioManager.Instance.PlayerHurt);

        if (currentHealth <= 0)
            HandleAllHeartsLost();
        else
            StartCoroutine(FlashAndIgnoreEnemy(enemyCollider));

        return true;
    }

    private void HandleAllHeartsLost()
    {
        if (revivesLeft <= 0)
        {
            FailJob();
            return;
        }

        revivesLeft--;
        RefreshReviveBar();

        DropEverything();
        Respawn();
        Debug.Log($"Player revived at the safe base. Revives left: {revivesLeft}.", this);
    }

    // Leaves the carried job items and hotbar tools where the player went down.
    private void DropEverything()
    {
        Vector3 dropPoint = transform.position;
        MazeGenerator maze = FindAnyObjectByType<MazeGenerator>();
        if (maze == null)
        {
            Debug.LogWarning("No MazeGenerator in the scene, so carried items could not be dropped.", this);
            return;
        }

        PlayerJobScript playerJob = GetComponent<PlayerJobScript>();
        if (playerJob != null)
        {
            foreach (string itemId in playerJob.DropCarriedItems())
                maze.DropJobItem(itemId, Scatter(dropPoint));
        }

        PlayerLoadout loadout = GetComponent<PlayerLoadout>();
        if (loadout != null)
        {
            foreach (ShopItem tool in loadout.DropAllItems())
                maze.DropTool(tool, Scatter(dropPoint));
        }
    }

    private Vector3 Scatter(Vector3 point)
    {
        Vector2 offset = Random.insideUnitCircle * dropScatter;
        return new Vector3(point.x + offset.x, point.y + offset.y, point.z);
    }

    private void Respawn()
    {
        if (spawnPoint == null)
        {
            GameObject found = GameObject.Find("SpawnPoint");
            if (found != null)
                spawnPoint = found.transform;
        }

        if (spawnPoint != null)
        {
            Vector3 position = new Vector3(spawnPoint.position.x, spawnPoint.position.y, transform.position.z);
            transform.position = position;
            if (body != null)
            {
                body.position = position;
                body.linearVelocity = Vector2.zero;
            }
        }
        else
        {
            Debug.LogWarning("No spawn point found, so the player was revived where they went down.", this);
        }

        currentHealth = playerStat.playerMaxHealth;
        healthBar.SetHealth(currentHealth);
        StartCoroutine(FlashAndIgnoreEnemy(null));   // a moment of safety after respawning
    }

    private void FailJob()
    {
        jobFailed = true;
        Debug.Log("No revives left. The job has failed.", this);

        JobSession.ReportResult(JobResult.Failed);
        Time.timeScale = 1f;
        SceneManager.LoadScene(mainMenuSceneName);
    }

    private void RefreshReviveBar()
    {
        if (reviveBar == null)
            return;

        reviveBar.maxValue = Mathf.Max(1, revivesPerMatch);
        reviveBar.value = revivesLeft;
    }

    private IEnumerator FlashAndIgnoreEnemy(Collider2D enemyCollider)
    {
        isInvulnerable = true;
        SetEnemyCollisionIgnored(enemyCollider, true);

        float elapsed = 0f;
        while (elapsed < invulnerabilitySeconds)
        {
            foreach (SpriteRenderer sprite in spriteRenderers)
                sprite.enabled = !sprite.enabled;

            yield return new WaitForSeconds(flashInterval);
            elapsed += flashInterval;
        }

        foreach (SpriteRenderer sprite in spriteRenderers)
            sprite.enabled = true;

        SetEnemyCollisionIgnored(enemyCollider, false);
        isInvulnerable = false;
    }

    private void SetEnemyCollisionIgnored(Collider2D enemyCollider, bool ignore)
    {
        if (enemyCollider == null)
            return;

        foreach (Collider2D playerCollider in playerColliders)
            Physics2D.IgnoreCollision(playerCollider, enemyCollider, ignore);
    }
}