using UnityEngine;
using System.Collections;
using System.Collections.Generic;

using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

[System.Serializable]
public class HighscoreList {

    private int maxItems = 5;

    private List<string> nameList = new List<string>();
    private List<int> highscoreList = new List<int>();

    //returns true if score is in the top <maxItems>
    public bool addElement(string name, int score)
    {
        if(highscoreList.Count < maxItems)
        {
            nameList.Add(name);
            highscoreList.Add(score);
        }

        int minIndex = findMin();

        if(highscoreList[minIndex] < score)
        {
            highscoreList[minIndex] = score;
            nameList[minIndex] = name;
        }

        sortList();

        return false;
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
            for(int j=1; j<highscoreList.Count; ++j)
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
    
    public byte[] getBinaryData()
    {
        BinaryFormatter binaryFormatter = new BinaryFormatter();
        MemoryStream ms = new MemoryStream();
        binaryFormatter.Serialize(ms, this);
        byte[] b = ms.ToArray();

        return b;
    }
}
