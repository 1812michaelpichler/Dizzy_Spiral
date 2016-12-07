using UnityEngine;
using System.Collections;

public class SimpleEnemy : MonoBehaviour {

    private HighscoreScript highScoreScript = null;
    
    public float damage = 100.0f;

    private float lifeTime = 5.0f;

	// Use this for initialization
	void Start () {
        highScoreScript = HighscoreScript.Instance;
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
        if(other.gameObject.name == "PlayerObject")
            highScoreScript.addPoints((int)(-1*damage));
    }

    public float LifeTime
    {
        get { return lifeTime; }
        set { lifeTime = value; }
    }
}
