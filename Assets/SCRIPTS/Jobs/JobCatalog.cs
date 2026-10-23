using System;
using UnityEngine;

[Serializable]
public sealed class JobStoryEntry
{
    public JobLocation location;
    public string title;
    [TextArea(2, 4)] public string story;
}

[Serializable]
public sealed class JobItemPool
{
    public JobLocation location;
    public string[] itemIds;
}

[CreateAssetMenu(fileName = "JobCatalog", menuName = "No Way Out/Job Catalog")]
public sealed class JobCatalog : ScriptableObject
{
    [SerializeField] private JobStoryEntry[] stories;
    [SerializeField] private JobItemPool[] itemPools;

    public bool TryGetRandomStoryAndItem(JobLocation location, out string title, out string story, out string itemId)
    {
        title = null;
        story = null;
        itemId = null;

        if (stories == null || itemPools == null)
            return false;

        int storyCount = 0;
        for (int i = 0; i < stories.Length; i++)
            if (stories[i] != null && stories[i].location == location)
                storyCount++;

        JobItemPool pool = null;
        for (int i = 0; i < itemPools.Length; i++)
            if (itemPools[i] != null && itemPools[i].location == location)
            {
                pool = itemPools[i];
                break;
            }

        if (storyCount == 0 || pool == null || pool.itemIds == null || pool.itemIds.Length == 0)
            return false;

        int selectedStory = UnityEngine.Random.Range(0, storyCount);
        for (int i = 0; i < stories.Length; i++)
        {
            if (stories[i] == null || stories[i].location != location)
                continue;
            if (selectedStory-- == 0)
            {
                title = stories[i].title;
                story = stories[i].story;
                break;
            }
        }

        itemId = pool.itemIds[UnityEngine.Random.Range(0, pool.itemIds.Length)];
        return !string.IsNullOrWhiteSpace(title) && !string.IsNullOrWhiteSpace(itemId);
    }
}
