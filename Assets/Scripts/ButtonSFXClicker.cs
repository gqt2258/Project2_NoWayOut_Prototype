using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonClickSFX : MonoBehaviour
{
    private readonly HashSet<Button> hooked = new HashSet<Button>();

    private void Start() { AddToAll(); }

    // Call again after creating buttons at runtime
    public void AddToAll()
    {
        foreach (Button b in GetComponentsInChildren<Button>(true))
        {
            if (!hooked.Add(b)) continue;   // never hook a button twice
            b.onClick.AddListener(OnClick);
        }
    }

    private void OnClick()
    {
        if (AudioManager.Instance != null)
            AudioManager.Instance.PlayButtonClick();
    }
}