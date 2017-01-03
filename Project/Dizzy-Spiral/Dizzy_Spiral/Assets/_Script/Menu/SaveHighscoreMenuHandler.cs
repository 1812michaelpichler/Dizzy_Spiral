using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SaveHighscoreMenuHandler : MonoBehaviour {
    
    void Start()
    {
    }

    public void handleSaveHighscore()
    {
        transform.parent.FindChild("ShowHighscoreMenu").gameObject.SetActive(true);
        /******
        //Save code
        *****/
        HighscoreScript.Instance.Highscore = 0;
        this.gameObject.SetActive(false);
    }

    public void finishedGame()
    {
        Destroy(GameObject.Find("PlayableObjects(Clone)"));

        Text t = transform.Find("InfoText").GetComponent<Text>();
        t.text = "Game Over\nYour Points:\n" + HighscoreScript.Instance.Highscore;
    }
}
