using System.Collections;
using UnityEngine;

public class PlayerHealth : MonoBehaviour
{
    [SerializeField] private PlayerStat playerStat;
    [SerializeField] private HealthBar healthBar;
    [SerializeField, Min(0.1f)] private float invulnerabilitySeconds = 1f;
    [SerializeField, Min(0.01f)] private float flashInterval = 0.1f;

    private int currentHealth;
    private bool isInvulnerable;

    public Transform spawnPoint;

    private Collider2D[] playerColliders;
    private SpriteRenderer[] spriteRenderers;

    private void Awake()
    {

        playerColliders = GetComponents<Collider2D>();
        spriteRenderers = GetComponentsInChildren<SpriteRenderer>(true);
        currentHealth = playerStat.playerMaxHealth;
        healthBar.SetMaxHealth(currentHealth);
    }

    public void Update()
    {
        if(currentHealth <= 0)
        {
            gameObject.transform.position = spawnPoint.position;
            currentHealth = playerStat.playerMaxHealth;
        }
    }

    public void TakeDamage(Collider2D enemyCollider)
    {
        if (isInvulnerable || currentHealth <= 0)
            return;

        currentHealth -= 1;
        healthBar.SetHealth(currentHealth);

        StartCoroutine(FlashAndIgnoreEnemy(enemyCollider));
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
