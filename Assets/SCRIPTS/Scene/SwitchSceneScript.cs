using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SwitchSceneScript : MonoBehaviour
{

    [SerializeField] private Button returnButton;

    private void Awake()
    {
        returnButton.onClick.AddListener(ReturnToMainMenu);
    }

    public void ReturnToMainMenu()
    {
        Time.timeScale = 1f;
        JobSession.ClearResult();
        SceneManager.LoadScene("Main Menu");
    }
}
