using UnityEngine;
using UnityEngine.EventSystems;

public class SprintButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    [SerializeField] private PlayerMovement playerMovement;

    public void OnPointerDown(PointerEventData eventData)
    {
        if (playerMovement != null)
            playerMovement.SetSprintButtonHeld(true);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        ReleaseSprint();
    }

    private void OnDisable()
    {
        ReleaseSprint();
    }

    private void ReleaseSprint()
    {
        if (playerMovement != null)
            playerMovement.SetSprintButtonHeld(false);
    }
}
