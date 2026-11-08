using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

// Goes on the Player in the Gameplay scene. Controls the interact button:
// - near an Interactable: shows its label (such as Deposit) and does its action
// - otherwise: shows Use, and uses the item selected on the hotbar
// - greyed out when there is nothing to do
public class PlayerInteraction : MonoBehaviour
{
    [SerializeField] Button interactButton;
    [SerializeField] TMP_Text interactLabel;
    [SerializeField] PlayerLoadout loadout;
    [SerializeField] string useLabel = "Use";

    readonly List<Interactable> nearby = new List<Interactable>();

    void Awake()
    {
        if (loadout == null)
            loadout = GetComponent<PlayerLoadout>();

        if (interactButton != null)
            interactButton.onClick.AddListener(OnInteractPressed);
    }

    void Update()
    {
        RefreshButton();
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        Interactable interactable = other.GetComponentInParent<Interactable>();
        if (interactable != null && !nearby.Contains(interactable))
            nearby.Add(interactable);
    }

    void OnTriggerExit2D(Collider2D other)
    {
        Interactable interactable = other.GetComponentInParent<Interactable>();
        if (interactable != null)
            nearby.Remove(interactable);
    }

    void OnInteractPressed()
    {
        Interactable target = GetClosestInteractable();
        if (target != null)
            target.Interact();
        else if (loadout != null)
            loadout.UseSelectedItem();
    }

    void RefreshButton()
    {
        if (interactButton == null)
            return;

        Interactable target = GetClosestInteractable();
        bool usable;
        string label;

        if (target != null)
        {
            label = target.ActionLabel;
            usable = target.CanInteract;
        }
        else
        {
            label = useLabel;
            usable = loadout != null && loadout.SelectedItem != null;
        }

        interactButton.interactable = usable;
        if (interactLabel != null && interactLabel.text != label)
            interactLabel.text = label;
    }

    Interactable GetClosestInteractable()
    {
        nearby.RemoveAll(item => item == null || !item.isActiveAndEnabled);

        Interactable closest = null;
        float closestDistance = float.PositiveInfinity;
        foreach (Interactable item in nearby)
        {
            float distance = (item.transform.position - transform.position).sqrMagnitude;
            if (distance < closestDistance)
            {
                closestDistance = distance;
                closest = item;
            }
        }

        return closest;
    }
}