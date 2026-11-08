using System.Collections.Generic;
using UnityEngine;

public class ItemSpawnScript : MonoBehaviour
{
    public GameObject[] hospitalItems;
    public GameObject[] prisonItems;
    public GameObject[] mansionItems;
    public Transform[] spawnPoints;

    private void Start()
    {
        Jobs selectedJob = JobSession.SelectedJob;
        if (selectedJob == null)
        {
            Debug.LogWarning("No job was selected, so no items were spawned.", this);
            return;
        }

        GameObject[] items;
        switch (selectedJob.Location)
        {
            case JobLocation.Hospital: items = hospitalItems; break;
            case JobLocation.Prison: items = prisonItems; break;
            case JobLocation.Mansion: items = mansionItems; break;
            default: return;
        }

        var availablePoints = new List<Transform>();
        foreach (Transform point in spawnPoints)
        {
            if (point != null && !availablePoints.Contains(point))
                availablePoints.Add(point);
        }

        var usedPrefabs = new HashSet<GameObject>();
        foreach (GameObject item in items)
        {
            if (availablePoints.Count == 0)
                break;
            if (item == null || !usedPrefabs.Add(item))
                continue;

            int pointIndex = Random.Range(0, availablePoints.Count);
            Instantiate(item, availablePoints[pointIndex].position, Quaternion.identity);
            availablePoints.RemoveAt(pointIndex);
        }
    }
}
