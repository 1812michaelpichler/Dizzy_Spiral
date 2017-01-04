using UnityEngine;
using System.Collections;

using System.Collections.Generic;
using UnityEngine.UI;

public class ShowHighscoreMenuHandler : MonoBehaviour {

	
    public void handleBackButton()
    {
        transform.parent.FindChild("MainMenu").gameObject.SetActive(true);
        this.gameObject.SetActive(false);
    }

    void OnEnable()
    {
        HighscoreList highscoreList = HighscoreList.Instance;

        List<int> h = highscoreList.ScoreList;
        List<string> n = highscoreList.NameList;

        string text = "Highscore-List:\n";

        for(int i=0; i<h.Count; ++i)
        {
            text += "\n" + n[i] + ": " + h[i];
        }

        Text t = transform.Find("txtInfo").GetComponent<Text>();
        t.text = text;
    }
}
