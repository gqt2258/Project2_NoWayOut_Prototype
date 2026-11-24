using UnityEngine;

// Goes on the Deposit object at the safe base, next to its Interactable.
// The player selects a job item on the hotbar, walks up and presses Deposit.
// Only one item fits. Depositing another item swaps them: the new one goes in,
// and the old one goes back into the same hotbar slot.
[RequireComponent(typeof(Interactable))]
public class DepositBox : MonoBehaviour
{
    [Tooltip("Optional. A SpriteRenderer on the box that shows the deposited item's icon.")]
    [SerializeField] SpriteRenderer itemDisplay;
    [SerializeField] string depositLabel = "Deposit";
    [SerializeField] string swapLabel = "Swap";

    Interactable interactable;
    string itemId;
    string itemName;
    Sprite itemIcon;

    public static DepositBox Instance { get; private set; }

    public bool HasItem => !string.IsNullOrEmpty(itemId);
    public string DepositedItemId => itemId;
    public string DepositedItemName => itemName;

    void Awake()
    {
        Instance = this;
        interactable = GetComponent<Interactable>();
        interactable.CanInteractCheck = CanUse;
        interactable.LabelFor = user => HasItem ? swapLabel : depositLabel;
        interactable.InteractedBy += OnInteract;
        RefreshDisplay();
    }

    void OnDestroy()
    {
        if (Instance == this) Instance = null;
        if (interactable != null) interactable.InteractedBy -= OnInteract;
    }

    // The button is greyed out unless the player has a job item selected.
    bool CanUse(GameObject user)
    {
        PlayerLoadout loadout = user.GetComponent<PlayerLoadout>();
        return loadout != null && loadout.SelectedJobItemId != null;
    }

    void OnInteract(GameObject user)
    {
        PlayerLoadout loadout = user.GetComponent<PlayerLoadout>();
        if (loadout == null)
            return;

        string returnedId = itemId;
        if (!loadout.SwapSelectedJobItem(itemId, itemName, itemIcon,
                                         out string newId, out string newName, out Sprite newIcon))
            return;

        PlayerJobScript job = user.GetComponent<PlayerJobScript>();
        if (job != null)
            job.DepositItem(newId, returnedId);

        itemId = newId;
        itemName = newName;
        itemIcon = newIcon;
        RefreshDisplay();

        if (AudioManager.Instance != null)
            AudioManager.Instance.PlaySFX(AudioManager.Instance.Player.Deposit);
        NetworkJobSync.ShareSound(PlayerSound.Deposit);
    }

    void RefreshDisplay()
    {
        if (itemDisplay == null)
            return;

        itemDisplay.sprite = itemIcon;
        itemDisplay.enabled = itemIcon != null;
    }
}