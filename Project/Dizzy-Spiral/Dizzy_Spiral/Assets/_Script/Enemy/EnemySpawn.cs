using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class EnemySpawn : MonoBehaviour {

    private PlayerMovement playerMovement;

    public List<GameObject> enemyObject = new List<GameObject>();
    public List<float> randomBoundary = new List<float>();

    public float timeNeedToSpawn = 3.0f;
    public float minSpeed = 90.0f;
    public float maxSpeed = 720.0f;
    //public float nextSpawnStart = 4.0f;

    public float enemyLife = 5.0f;

    private float currentTime = 0.0f;

    Vector3 pos;
    // Use this for initialization
    void Start () {
        playerMovement = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerMovement>();

        setPosition();
    }
	
	// Update is called once per frame
	void Update () {
        currentTime += Time.deltaTime;
        transform.Rotate(new Vector3(0.0f, currentTime / timeNeedToSpawn * (maxSpeed - minSpeed) * Time.deltaTime, 0.0f));

        if(currentTime >= timeNeedToSpawn)
        {
            float randNumber = Random.Range(0.0f, 1.0f);

            int i = 0;

            for(int j=0; j < randomBoundary.Count; ++j)
            {
                if(randNumber <= randomBoundary[j])
                {
                    i = j;
                    j = randomBoundary.Count;
                }
            }

            GameObject o = (GameObject)GameObject.Instantiate(enemyObject[i], pos, Quaternion.identity);
            o.GetComponent<SimpleEnemy>().LifeTime = enemyLife;

            if (i == 1)
                o.GetComponent<Rigidbody>().AddForce(new Vector3(30.0f, 0.0f, 0.0f));

            transform.Translate(new Vector3(0.0f, -5.0f, 0.0f), Space.World);

            currentTime = 0.0f;
            setPosition();
        }
	}

    private void setPosition()
    {
        float r = Random.Range(playerMovement.MinRadius, playerMovement.MaxRadius);
        float angle = Random.Range(0.0f, Mathf.PI * 2.0f);

        pos = new Vector3(r * Mathf.Sin(angle), 2.0f, r * Mathf.Cos(angle));
        transform.position = pos;
    }
}
