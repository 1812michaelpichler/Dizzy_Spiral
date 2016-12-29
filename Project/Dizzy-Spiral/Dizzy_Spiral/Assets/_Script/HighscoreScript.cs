using UnityEngine;
using System.Collections;

using UnityEngine.UI;


//Get one point for every round
//Get ten points for every collected coin
public class HighscoreScript {
    private static HighscoreScript instance = null;

    //Hold the current points of the player
    protected int highscore = 0;

    //Textfield to show the user the current highscore
    private Text highscoreText = null;

    private HighscoreScript()
    {
        highscoreText = GameObject.Find("txtHighScore").GetComponent<Text>();
    }

    public void addPoints(int points)
    {
        highscore += points;
        highscoreText.text = "Highscore: " + highscore;
    }

    public static HighscoreScript Instance
    {
        get
        {
            if (instance == null)
                instance = new HighscoreScript();

            return instance;
        }
    }
}
