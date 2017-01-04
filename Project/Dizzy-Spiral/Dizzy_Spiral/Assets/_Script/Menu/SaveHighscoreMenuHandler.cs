using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using System.IO;
public class SaveHighscoreMenuHandler : MonoBehaviour {

    private string filename = "DizzyHighscore";

    private HighscoreList highscoreList;

    private FileInfo file;

    void Start()
    {
        highscoreList = new HighscoreList();
    }

    public void handleSaveHighscore()
    {
        transform.parent.FindChild("ShowHighscoreMenu").gameObject.SetActive(true);

#if UNITY_ANDROID
        saveOnAndroid();
#else
        saveOnPC();
#endif


        HighscoreScript.Instance.Highscore = 0;
        this.gameObject.SetActive(false);
    }

    public void finishedGame()
    {
        Destroy(GameObject.Find("PlayableObjects(Clone)"));

        Text t = transform.Find("InfoText").GetComponent<Text>();

        bool isIn =  highscoreList.addElement("name", HighscoreScript.Instance.Highscore);

        if(isIn)
            t.text = "Game Over\nYour Points:\n" + HighscoreScript.Instance.Highscore + "\nYou are in the list :)";
        else
            t.text = "Game Over\nYour Points:\n" + HighscoreScript.Instance.Highscore + "\nYou are not in the list :(";
    }

    private void saveOnAndroid()
    {
        byte[] b = highscoreList.getBinaryData();

        file = new FileInfo(Application.persistentDataPath + "/" + "name" + ".txt");
        StreamWriter w;
        if (!file.Exists)
        {
            w = file.CreateText();
        }
        else
        {
            file.Delete();
            w = file.CreateText();
        }

        w.WriteLine(b);
        w.Close();
    }

    private void saveOnPC()
    {
        byte[] b = highscoreList.getBinaryData();
    }
}
