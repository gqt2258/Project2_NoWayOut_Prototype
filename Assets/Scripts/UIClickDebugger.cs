using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;

// TEMPORARY: finds out why a button can't be pressed. Put it on any object in the Gameplay scene
// (e.g. the EventSystem), press Play, and tap the hotbar. Remove it when the problem is fixed.
//
// Every tap logs everything under the finger, top first. The first one is what gets the tap.
// At the start (and with the H key) it also checks every hotbar slot for the usual problems.
public class UIClickDebugger : MonoBehaviour
{
    readonly List<RaycastResult> hits = new List<RaycastResult>();

    void Start()
    {
        Invoke(nameof(CheckHotbarSlots), 1f);   // the hotbar is built in PlayerLoadout's Start
    }

    void Update()
    {
        Pointer pointer = Pointer.current;
        if (pointer != null && pointer.press.wasPressedThisFrame)
            LogWhatIsUnder(pointer.position.ReadValue());

        if (Keyboard.current != null && Keyboard.current.hKey.wasPressedThisFrame)
            CheckHotbarSlots();
    }

    void LogWhatIsUnder(Vector2 screenPosition)
    {
        EventSystem events = EventSystem.current;
        if (events == null)
        {
            Debug.LogError("[UI Debug] No EventSystem in the scene, so no UI can be pressed.");
            return;
        }
        if (!events.isActiveAndEnabled)
        {
            Debug.LogError("[UI Debug] The EventSystem is turned off.", events);
            return;
        }

        hits.Clear();
        events.RaycastAll(new PointerEventData(events) { position = screenPosition }, hits);

        var log = new StringBuilder($"[UI Debug] Tap at {screenPosition}: ");
        if (hits.Count == 0)
        {
            log.Append("NOTHING under the finger. No raycast target here (see the slot check).");
        }
        else
        {
            log.Append($"{hits.Count} things, top first. The first one gets the tap:\n");
            for (int i = 0; i < hits.Count && i < 8; i++)
                log.Append($"  {i + 1}. {PathOf(hits[i].gameObject.transform)}\n");
        }
        Debug.Log(log.ToString(), hits.Count > 0 ? hits[0].gameObject : null);
    }

    void CheckHotbarSlots()
    {
        ShopItemSlot[] slots = FindObjectsByType<ShopItemSlot>(FindObjectsInactive.Include);
        if (slots.Length == 0)
        {
            Debug.LogWarning("[UI Debug] No hotbar slots found. Check Slot Prefab and Hotbar Container on PlayerLoadout.");
            return;
        }

        foreach (ShopItemSlot slot in slots)
        {
            var problems = new List<string>();

            if (!slot.gameObject.activeInHierarchy)
                problems.Add("it is hidden (not active)");

            bool hasTarget = false;
            foreach (Graphic graphic in slot.GetComponentsInChildren<Graphic>())
                if (graphic.raycastTarget && graphic.enabled) { hasTarget = true; break; }
            if (!hasTarget)
                problems.Add("no Image/Text with Raycast Target ticked, so it can't be hit. Tick Raycast Target on the slot's background Image");

            for (Transform t = slot.transform; t != null; t = t.parent)
            {
                CanvasGroup group = t.GetComponent<CanvasGroup>();
                if (group != null && !group.blocksRaycasts)
                    problems.Add($"CanvasGroup on '{t.name}' has Blocks Raycasts off");
                if (group != null && !group.interactable)
                    problems.Add($"CanvasGroup on '{t.name}' has Interactable off");
                if (group != null && group.ignoreParentGroups) break;
            }

            Rect size = ((RectTransform)slot.transform).rect;
            if (size.width < 1f || size.height < 1f)
                problems.Add($"its size is {size.width} x {size.height}, too small to tap. Give the slot prefab a Width and Height");

            Canvas canvas = slot.GetComponentInParent<Canvas>();
            if (canvas == null)
                problems.Add("it is not inside a Canvas");
            else if (canvas.GetComponent<GraphicRaycaster>() == null)
                problems.Add($"its Canvas '{canvas.name}' has no Graphic Raycaster. Add one to that object");

            if (problems.Count == 0)
                Debug.Log($"[UI Debug] Slot OK: {PathOf(slot.transform)}", slot);
            else
                Debug.LogWarning($"[UI Debug] Slot {PathOf(slot.transform)} can't be pressed: " + string.Join("; ", problems), slot);
        }
    }

    static string PathOf(Transform t)
    {
        string path = t.name;
        for (Transform p = t.parent; p != null; p = p.parent)
            path = p.name + "/" + path;
        return path;
    }
}