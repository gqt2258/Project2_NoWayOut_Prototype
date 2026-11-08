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
}