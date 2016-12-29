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

    public Transform arrowTransform;
    //public float nextSpawnStart = 4.0f;

    public float enemyLife = 5.0f;

    private float currentTime = 0.0f;
    private bool decideNextEnemy = true;
    private int objectID = 0;

    private Vector3 pos;
    public Vector3 forceDirection = new Vector3(0.0f, 0.0f, 50.0f);

    // Use this for initialization
    void Start () {
        playerMovement = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerMovement>();

        setPosition();
    }
	
	// Update is called once per frame
	void Update () {
        currentTime += Time.deltaTime;
        transform.Rotate(new Vector3(0.0f, currentTime / timeNeedToSpawn * (maxSpeed - minSpeed) * Time.deltaTime, 0.0f));
        arrowTransform.Rotate(new Vector3(0.0f, -currentTime / timeNeedToSpawn * (maxSpeed - minSpeed) * Time.deltaTime, 0.0f));

        if (decideNextEnemy)
        {
            setPosition();

            float randNumber = Random.Range(0.0f, 1.0f);

            objectID = 0;

            for (int j = 0; j < randomBoundary.Count; ++j)
            {
                if (randNumber <= randomBoundary[j])
                {
                    objectID = j;
                    j = randomBoundary.Count;
                }
            }

            if (objectID == 0)
            {
                arrowTransform.gameObject.SetActive(false);
            }
            else if (objectID == 1)
            {
                arrowTransform.gameObject.SetActive(true);

                randNumber = Random.Range(0.0f, 360.0f);
                arrowTransform.Rotate(new Vector3(0.0f, randNumber, 0.0f));

                forceDirection = Quaternion.AngleAxis(randNumber, Vector3.up) * forceDirection;
            }

            decideNextEnemy = false;
        }

        if (currentTime >= timeNeedToSpawn)
        {
            decideNextEnemy = true;
            GameObject o = (GameObject)GameObject.Instantiate(enemyObject[objectID], pos, Quaternion.identity);
            o.GetComponent<SimpleEnemy>().LifeTime = enemyLife;

            if (objectID == 1)
                o.GetComponent<Rigidbody>().AddForce(forceDirection);

            currentTime = 0.0f;
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
