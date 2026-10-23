using UnityEngine;

public class PlayerJobScript : MonoBehaviour
{
    public Jobs CurrentJob { get; private set; }

    private void Awake()
    {
        CurrentJob = JobSession.SelectedJob;
    }
}
