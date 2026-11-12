using UnityEngine;

public class MonsterIndicator : MonoBehaviour
{
    [SerializeField, Min(0.1f)] private float visibleSeconds = 2f;

    private Transform monster;
    private float hideTime;
    private float distanceFromPlayer;

    private void Awake()
    {
        distanceFromPlayer = transform.localPosition.magnitude;
    }

    public void Show(Transform target)
    {
        monster = target;
        hideTime = Time.time + visibleSeconds;
        gameObject.SetActive(true);
    }

    private void Update()
    {
        if (monster == null || Time.time >= hideTime)
        {
            gameObject.SetActive(false);
            return;
        }

        Vector2 direction = (Vector2)(monster.position - transform.parent.position);
        if (direction.sqrMagnitude < 0.001f)
            return;

        direction.Normalize();
        transform.localPosition = new Vector3(direction.x * distanceFromPlayer,
                                              direction.y * distanceFromPlayer,
                                              transform.localPosition.z);
        transform.localRotation = Quaternion.Euler(0f, 0f,
            Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg - 90f);
    }
}
