using UnityEngine;
using System.Collections;

public class CoinCollection : MonoBehaviour {

    //Holds the data for the player highscore
    private HighscoreScript highscoreScript = null;
    private PlayerMovement playerMovement;

    public int pointValue = 10; 

    public GameObject particleObject;
    public float destroyTime = 2.0f;

    void Start()
    {
        highscoreScript = HighscoreScript.Instance;

        playerMovement = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerMovement>();
    }

    void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.name == "PlayerObject") {
            highscoreScript.addPoints(pointValue);
            GameObject o = (GameObject)GameObject.Instantiate(particleObject, transform.position, transform.rotation);
            // GameObject.Instantiate(this, )

            float r = Random.Range(playerMovement.MinRadius, playerMovement.MaxRadius);
            float angle = Random.Range(0.0f, Mathf.PI * 2.0f);

            Vector3 pos = new Vector3(r * Mathf.Sin(angle), 0, r * Mathf.Cos(angle));
            transform.position = pos;

            GameObject.Destroy(o, destroyTime);
        }
    }
}
