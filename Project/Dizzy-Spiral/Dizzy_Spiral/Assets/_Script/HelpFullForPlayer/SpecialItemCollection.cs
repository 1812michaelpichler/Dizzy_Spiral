using UnityEngine;
using System.Collections;

public class SpecialItemCollection : MonoBehaviour {

    public float lifeTime = 10.0f;

	void OnTriggerEnter(Collider other)
	{
		if(other.gameObject.name == "PlayerObject") {
			//highscoreScript.addPoints(pointValue);
			//GameObject o = (GameObject)GameObject.Instantiate(particleObject, transform.position, transform.rotation);
			// GameObject.Instantiate(this, )

			//float r = Random.Range(playerMovement.MinRadius, playerMovement.MaxRadius);
			//float angle = Random.Range(0.0f, Mathf.PI * 2.0f);

			//Vector3 pos = new Vector3(r * Mathf.Sin(angle), 0, r * Mathf.Cos(angle));
			//transform.position = pos;

			//GameObject.Destroy(o, destroyTime);

			playerMovement.counterClockWise ();
		}
	}
		
	private PlayerMovement playerMovement;

	void Start()
	{
		playerMovement = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerMovement>();
	}

    void Update()
    {
        lifeTime -= Time.deltaTime;

        if (lifeTime <= 0.0f)
            GameObject.Destroy(transform.gameObject);
    }
}
