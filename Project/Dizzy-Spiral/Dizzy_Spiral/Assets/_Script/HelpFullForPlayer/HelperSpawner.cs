using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class HelperSpawner : MonoBehaviour
{
    private PlayerMovement playerMovement;

    public List<GameObject> helperObjects = new List<GameObject>();
    public List<float> randomBoundary = new List<float>();

    public float timeNeedToSpawn = 3.0f;
    public float minSpeed = 90.0f;
    public float maxSpeed = 720.0f;

    private bool isStartSpawn = false;
    public float nextSpawnStart = 15.0f;
    private float currentTime = 0.0f;
    private int objectID = 0;

    private Vector3 pos;

    // Use this for initialization
    void Start()
    {
        playerMovement = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerMovement>();
        transform.GetComponent<MeshRenderer>().enabled = false;

        setPosition();
    }

    // Update is called once per frame
    void Update()
    {
        currentTime += Time.deltaTime;
        transform.Rotate(new Vector3(0.0f, currentTime / timeNeedToSpawn * (maxSpeed - minSpeed) * Time.deltaTime, 0.0f));

        if(currentTime >= nextSpawnStart && !isStartSpawn)
        {
            isStartSpawn = true;
            currentTime = 0.0f;

            transform.GetComponent<MeshRenderer>().enabled = true;
        }
        else if (currentTime >= timeNeedToSpawn && isStartSpawn)
        {
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

            GameObject.Instantiate(helperObjects[objectID], pos, Quaternion.identity, this.transform.parent);

            currentTime = 0.0f;
            isStartSpawn = false;

            transform.GetComponent<MeshRenderer>().enabled = false;
            setPosition();
        }
    }

    private void setPosition()
    {
        float r = Random.Range(playerMovement.MinRadius, playerMovement.MaxRadius);
        float angle = Random.Range(0.0f, 0.0f);

        pos = new Vector3(r * Mathf.Sin(angle), 2.0f, r * Mathf.Cos(angle));
        transform.position = pos;
    }
}
