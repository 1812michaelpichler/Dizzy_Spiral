using UnityEngine;
using System.Collections;

public class MainMenuHandler : MonoBehaviour {

    public GameObject playableObjects;

    public void handleStartGame()
    {
        Instantiate(playableObjects);
        PlayerHealth.Instance.reset();
        this.gameObject.SetActive(false);
    }

    public void handleShowHighscore()
    {
        transform.parent.FindChild("ShowHighscoreMenu").gameObject.SetActive(true);
        this.gameObject.SetActive(false);
    }
}
