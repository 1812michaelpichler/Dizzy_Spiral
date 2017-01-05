using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using System.IO;
public class SaveHighscoreMenuHandler : MonoBehaviour {
    
    public void handleSaveHighscore()
    {
        string personName = transform.Find("ipfName").Find("ipfNameText").GetComponent<Text>().text;
        HighscoreList.Instance.addElement(personName, HighscoreScript.Instance.Highscore);
        HighscoreList.Instance.save();

        transform.parent.FindChild("ShowHighscoreMenu").gameObject.SetActive(true);

        HighscoreScript.Instance.Highscore = 0;
        this.gameObject.SetActive(false);
    }

    public void finishedGame()
    {
        Destroy(GameObject.Find("PlayableObjects(Clone)"));
        Text t = transform.Find("InfoText").GetComponent<Text>();

        bool isIn = HighscoreList.Instance.isInTheList(HighscoreScript.Instance.Highscore);
        
        if(isIn)
            t.text = "Game Over\nYour Points:\n" + HighscoreScript.Instance.Highscore + "\nYou are in the list :)";
        else
            t.text = "Game Over\nYour Points:\n" + HighscoreScript.Instance.Highscore + "\nYou are not in the list :(";
    }

}
