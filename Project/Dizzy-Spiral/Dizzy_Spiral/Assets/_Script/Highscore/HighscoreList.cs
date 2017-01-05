using UnityEngine;
using System.Collections;
using System.Collections.Generic;

using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

[System.Serializable]
public class HighscoreList {
    private static HighscoreList instance = null;
    private static string fileName = "DizzyHighscore";

    private int maxItems = 5;

    private List<string> nameList = new List<string>();
    private List<int> highscoreList = new List<int>();


    private HighscoreList() { }

    public static HighscoreList Instance
    {
        get
        {
            if (instance == null)
                instance = new HighscoreList();// load();

            return instance;
        }
    }

    public List<int> ScoreList
    {
        get { return highscoreList; }
    }

    public List<string> NameList
    {
        get { return nameList; }
    }

    //returns true if score is in the top <maxItems>
    public void addElement(string name, int score)
    {
        if (highscoreList.Count < maxItems)
        {
            nameList.Add(name);
            highscoreList.Add(score);
            
            sortList();
        }
        else
        {
            int minIndex = findMin();

            if (highscoreList[minIndex] < score)
            {
                highscoreList[minIndex] = score;
                nameList[minIndex] = name;
                
                sortList();
            }
        }
    }

    public bool isInTheList(int score)
    {
        bool hasInsert = false;

        if (highscoreList.Count < maxItems)
        {
            hasInsert = true;
        }
        else
        {
            int minIndex = findMin();

            if (highscoreList[minIndex] < score)
            {
                hasInsert = true;
            }
        }

        return hasInsert;
    }

    private int findMin()
    {
        int minIndex = 0;

        for(int i=1; i<highscoreList.Count; ++i)
        {
            if (highscoreList[i] < highscoreList[minIndex])
                minIndex = i;
        }

        return minIndex;
    }

    private void sortList()
    {
        for(int i=0; i<highscoreList.Count; ++i)
        {
            for(int j=0; j<highscoreList.Count; ++j)
            {
                if(highscoreList[j] < highscoreList[i])
                {
                    int scoreTmp = highscoreList[i];
                    string nameTmp = nameList[i];

                    highscoreList[i] = highscoreList[j];
                    nameList[i] = nameList[j];

                    highscoreList[j] = scoreTmp;
                    nameList[j] = nameTmp;
                }
            }
        }
    }

    public void save()
    {
#if UNITY_ANDROID
        saveOnAndroid();
#else
        saveOnPC();
#endif
    }

    private static void load()
    {
#if UNITY_ANDROID
        loadOnAndroid();
#else
        loadOnPC();
#endif
    }

    private void saveOnAndroid()
    {
        /*byte[] b = getBinaryData();

        FileInfo file = new FileInfo(Application.persistentDataPath + "/" + fileName + ".txt");
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
        w.Close();*/

        BinaryFormatter bf = new BinaryFormatter();
        FileStream file = File.Create(Application.persistentDataPath + "/" + fileName + ".txt");
        bf.Serialize(file, this);
        file.Close();
    }

    private static void loadOnAndroid()
    {
        if (File.Exists(Application.persistentDataPath + "/" + fileName + ".txt"))
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream file = File.Open(Application.persistentDataPath + "/" + fileName + ".txt", FileMode.Open);
            instance = (HighscoreList)bf.Deserialize(file);
            file.Close();
        } else
        {
            instance = new HighscoreList();
        }
    }

    private void saveOnPC()
    {
        byte[] b = getBinaryData();
    }

    private static void loadOnPC()
    {

    }

    private byte[] getBinaryData()
    {
        BinaryFormatter binaryFormatter = new BinaryFormatter();
        MemoryStream ms = new MemoryStream();
        binaryFormatter.Serialize(ms, this);
        byte[] b = ms.ToArray();

        return b;
    }

}
