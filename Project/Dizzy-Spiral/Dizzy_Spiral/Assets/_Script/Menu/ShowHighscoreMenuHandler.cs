using UnityEngine;
using System.Collections;

public class ShowHighscoreMenuHandler : MonoBehaviour {

	
    public void handleBackButton()
    {
        transform.parent.FindChild("MainMenu").gameObject.SetActive(true);
        this.gameObject.SetActive(false);
    }
}
