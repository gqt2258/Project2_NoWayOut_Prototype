using System.Collections.Generic;
using UnityEngine;

// The player's job progress: the current job, carried items and the deposited item.
// The Case File (job description) panel is opened and closed by GameplayScreenLoader.
public class PlayerJobScript : MonoBehaviour
{
    public Jobs CurrentJob { get; private set; }
    public int PickedUpCount => pickedUpCount;
    public IReadOnlyList<string> CarriedItems => carriedItems;
    public IReadOnlyList<string> DepositedItems => depositedItems;
    public bool HasDepositedCorrectItem => CurrentJob != null && depositedItems.Contains(CurrentJob.CorrectItemId);

    [Header("Item progress (Play mode)")]
    [SerializeField] private int pickedUpCount;
    [SerializeField] private List<string> carriedItems = new List<string>();
    [SerializeField] private List<string> depositedItems = new List<string>();


    private void Awake()
    {
        CurrentJob = JobSession.SelectedJob;
    }

    // Called by DepositBox. Only one item can be in the Deposit at a time:
    // the new item goes in, and the item that was there (if any) goes back to the player.
    // The job is only checked when the player leaves through the Portal (PortalExit).
    public void DepositItem(string itemId, string returnedItemId)
    {
        if (string.IsNullOrEmpty(itemId))
            return;

        carriedItems.Remove(itemId);
        depositedItems.Clear();
        depositedItems.Add(itemId);

        if (!string.IsNullOrEmpty(returnedItemId))
            carriedItems.Add(returnedItemId);

        Debug.Log(string.IsNullOrEmpty(returnedItemId)
            ? $"Deposited {itemId}."
            : $"Swapped: deposited {itemId}, took back {returnedItemId}.", this);
    }

    // Empties the carried items, for dropping them on the floor. Returns the item IDs.
    public List<string> DropCarriedItems()
    {
        var dropped = new List<string>(carriedItems);
        pickedUpCount = Mathf.Max(0, pickedUpCount - dropped.Count);
        carriedItems.Clear();
        return dropped;
    }

    public bool TryCollectItem(string itemId)
    {
        if (string.IsNullOrEmpty(itemId) || carriedItems.Contains(itemId) || depositedItems.Contains(itemId))
            return false;

        carriedItems.Add(itemId);
        pickedUpCount++;
        Debug.Log($"Picked up {itemId}.", this);
        return true;
    }
}