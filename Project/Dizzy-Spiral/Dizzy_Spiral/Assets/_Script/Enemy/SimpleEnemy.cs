using UnityEngine;
using System.Collections;

public class SimpleEnemy : MonoBehaviour {

    private HighscoreScript highScoreScript = null;
    
    public int damage = 10;

    private float lifeTime = 5.0f;

	private PlayerHealth playerHealth;
    
	// Use this for initialization
	void Start () {
        highScoreScript = HighscoreScript.Instance;
		playerHealth = PlayerHealth.Instance;
	}
	
	// Update is called once per frame
	void Update () {
        lifeTime -= Time.deltaTime;

        if(lifeTime <= 0.0f)
        {
            GameObject.Destroy(transform.gameObject);
        }
	}

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "PlayerObject")
        {
            if(playerHealth.damage(damage))
            {
                Transform t = GameObject.Find("Cameras").transform.Find("OrthographicCamera").Find("SaveHighscoreMenu");
                t.gameObject.SetActive(true);
                t.GetComponent<SaveHighscoreMenuHandler>().finishedGame();
            }

            Destroy(this.gameObject);
        }
    }

    public float LifeTime
    {
        get { return lifeTime; }
        set { lifeTime = value; }
    }
}
