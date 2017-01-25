using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SimpleEnemy : MonoBehaviour {
    public int damage = 10;

    private float lifeTime = 15.0f;
    private float originLifeTime = 15.0f;

	private PlayerHealth playerHealth;
    private Image progressBar;

	private bool fade;

	private int counter = 0;

	private GameObject hurtplane;


    // Use this for initialization
    void Start () {
		playerHealth = PlayerHealth.Instance;

        progressBar = transform.FindChild("ProgressBar").FindChild("Red").FindChild("RedImage").GetComponent<Image>();
        progressBar.fillAmount = 1.0f;

		hurtplane = GameObject.Find ("HurtPlane");
	}
	
	// Update is called once per frame
	void Update () {
        lifeTime -= Time.deltaTime;

        progressBar.fillAmount = lifeTime / originLifeTime;

        if(lifeTime <= 0.0f)
        {
            GameObject.Destroy(transform.gameObject);
        }
	}

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "PlayerObject")
        {
			/**
			 * Flash
			 * 
			 * */
			hurtplane.GetComponent<EnemyFadeScript> ().Fade ();

            if(playerHealth.damage(damage))
            {
                Transform t = GameObject.Find("Cameras").transform.Find("OrthographicCamera").Find("SaveHighscoreMenu");
                t.gameObject.SetActive(true);
                t.GetComponent<SaveHighscoreMenuHandler>().finishedGame();
            }

			Destroy (this.gameObject);
        }
    }

    public float LifeTime
    {
        get { return lifeTime; }
        set { lifeTime = value; originLifeTime = value; }
    }
}
