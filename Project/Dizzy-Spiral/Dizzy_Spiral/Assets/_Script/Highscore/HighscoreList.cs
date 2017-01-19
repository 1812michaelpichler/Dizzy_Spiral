using UnityEngine;
using System.Collections;
using System.Collections.Generic;

using System;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

[System.Serializable]
public class HighscoreList {
    private static HighscoreList instance = null;

    private int maxItems = 5;

    private List<string> nameList = new List<string>();
    private List<int> highscoreList = new List<int>();

    private HighscoreList() { }

    public static HighscoreList Instance
    {
        get
        {
			if (instance == null) {
				instance = new HighscoreList ();
				load ();
			}

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
		string filename = Application.persistentDataPath + "/gamedata";

		using (Stream stream = File.OpenWrite(filename))
		{    
			BinaryFormatter formatter = new BinaryFormatter();
			formatter.Serialize(stream, HighscoreList.Instance);
		}
    }

    private static void load()
    {
		string filename = Application.persistentDataPath + "/gamedata";

		if (File.Exists (filename)) {
			try {
				using (Stream stream = File.OpenRead(filename))
				{
					BinaryFormatter formatter = new BinaryFormatter();
					HighscoreList oldList = formatter.Deserialize(stream) as HighscoreList;
					HighscoreList.Instance.nameList = oldList.nameList;
					HighscoreList.Instance.highscoreList = oldList.highscoreList;
				}
			}
			catch (Exception e)
			{
				Debug.Log(e.Message);
			}
		}
    }
}
