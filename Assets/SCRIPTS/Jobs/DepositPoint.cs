using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class DepositPoint : MonoBehaviour
{
    [SerializeField] private List<GameObject> depositedItems = new List<GameObject>();
    [SerializeField] private TMP_Text itemsText;

    public IReadOnlyList<GameObject> DepositedItems => depositedItems;

    private void Awake()
    {
        if (itemsText == null)
        {
            GameObject canvas = GameObject.Find("Mobile Controls");
            if (canvas != null)
            {
                GameObject label = new GameObject("Deposited Items Text", typeof(RectTransform), typeof(TextMeshProUGUI));
                label.transform.SetParent(canvas.transform, false);
                itemsText = label.GetComponent<TextMeshProUGUI>();
                itemsText.fontSize = 18;
                itemsText.color = Color.white;
                itemsText.alignment = TextAlignmentOptions.TopLeft;
                itemsText.raycastTarget = false;

                RectTransform rect = label.GetComponent<RectTransform>();
                rect.anchorMin = rect.anchorMax = new Vector2(0f, 1f);
                rect.pivot = new Vector2(0f, 1f);
                rect.anchoredPosition = new Vector2(16f, -16f);
                rect.sizeDelta = new Vector2(320f, 250f);
            }
        }

        UpdateText();
    }

    public void Deposit(GameObject item)
    {
        if (item == null)
            return;

        item.SetActive(false);
        item.transform.SetParent(transform);
        item.transform.localPosition = Vector3.zero;
        depositedItems.Add(item);
        UpdateText();
    }

    private void UpdateText()
    {
        if (itemsText == null)
            return;

        string text = "Deposited Items:";
        if (depositedItems.Count == 0)
            text += " None";
        else
            foreach (GameObject item in depositedItems)
                text += "\n" + item.name.Replace("(Clone)", "").Replace('_', ' ');

        itemsText.text = text;
    }
}
