using UnityEngine;
using UnityEngine.Events;

// Put this on anything the player can interact with, such as the deposit point.
// It needs a Collider2D with Is Trigger ticked, covering the area where the
// interact button should change. The player needs PlayerInteraction.
public class Interactable : MonoBehaviour
{
    [Tooltip("Shown on the interact button, such as Deposit or Open.")]
    [SerializeField] string actionLabel = "Deposit";
    [Tooltip("Untick to show the button greyed out, such as when there is nothing to deposit.")]
    [SerializeField] bool canInteract = true;
    [Tooltip("What happens when the player presses the button here.")]
    [SerializeField] UnityEvent onInteract;

    public string ActionLabel => actionLabel;

    // Optional rules set from code (e.g. by DepositBox), based on which player is in range.
    public System.Func<GameObject, bool> CanInteractCheck;
    public System.Func<GameObject, string> LabelFor;
    public event System.Action<GameObject> InteractedBy;

    public string GetLabel(GameObject user) => LabelFor != null ? LabelFor(user) : actionLabel;

    public bool CanInteractFor(GameObject user) =>
        CanInteract && (CanInteractCheck == null || CanInteractCheck(user));

    public bool CanInteract
    {
        get => canInteract && isActiveAndEnabled;
        set => canInteract = value;
    }

    public void Interact()
    {
        if (CanInteract)
            onInteract.Invoke();
    }

    // Called by PlayerInteraction, so the action knows which player pressed the button.
    public void Interact(GameObject user)
    {
        if (!CanInteractFor(user))
            return;

        onInteract.Invoke();
        InteractedBy?.Invoke(user);
    }
}