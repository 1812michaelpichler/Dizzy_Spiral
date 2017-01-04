using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using System.IO;
public class SaveHighscoreMenuHandler : MonoBehaviour {
    
    public void handleSaveHighscore()
    {
        transform.parent.FindChild("ShowHighscoreMenu").gameObject.SetActive(true);
        
        HighscoreList.Instance.save();

        HighscoreScript.Instance.Highscore = 0;
        this.gameObject.SetActive(false);
    }

    public void finishedGame()
    {
        Destroy(GameObject.Find("PlayableObjects(Clone)"));

        Text t = transform.Find("InfoText").GetComponent<Text>();

        bool isIn = HighscoreList.Instance.addElement("name", HighscoreScript.Instance.Highscore);
        
        if(isIn)
            t.text = "Game Over\nYour Points:\n" + HighscoreScript.Instance.Highscore + "\nYou are in the list :)";
        else
            t.text = "Game Over\nYour Points:\n" + HighscoreScript.Instance.Highscore + "\nYou are not in the list :(";
    }

}
