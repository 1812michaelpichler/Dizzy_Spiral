using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SpecialItemCollection : MonoBehaviour {

    public float lifeTime = 10.0f;
    private float originLifeTime;

    private Image progressBar;

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

            GameObject.Destroy(this.gameObject);
		}
	}
		
	private PlayerMovement playerMovement;

	void Start()
	{
		playerMovement = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerMovement>();

        progressBar = transform.FindChild("ProgressBar").FindChild("Red").FindChild("RedImage").GetComponent<Image>();
        progressBar.fillAmount = 1.0f;

        originLifeTime = lifeTime;
    }

    void Update()
    {
        lifeTime -= Time.deltaTime;

        progressBar.fillAmount = lifeTime / originLifeTime;

        if (lifeTime <= 0.0f)
            GameObject.Destroy(transform.gameObject);
    }
}
