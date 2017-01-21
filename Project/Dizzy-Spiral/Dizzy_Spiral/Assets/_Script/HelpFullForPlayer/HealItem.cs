using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class HealItem : MonoBehaviour {
    public float lifeTime = 10.0f;
    private float originLifeTime;

    public int healPoints = 5;
    public GameObject infoText;

    private Image progressBar;

    void Start()
    {
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

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "PlayerObject")
        {
            PlayerHealth.Instance.heal(healPoints);
			PlayerMovement playerMovement = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerMovement>();
            //playerMovement.showHPExtra ();

            GameObject o = Instantiate(infoText);
            o.GetComponent<Transform>().position = transform.position;
            o.GetComponent<Transform>().Translate(new Vector3(0.0f, 3.0f, 0.0f), Space.World);

            GameObject.Destroy(transform.gameObject);
        }
    }
}
