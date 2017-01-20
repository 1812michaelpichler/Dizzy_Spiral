using UnityEngine;
using System.Collections;

public class HealItem : MonoBehaviour {
    public float lifeTime = 10.0f;

    public int healPoints = 5;
    public GameObject infoText;

    void Update()
    {
        lifeTime -= Time.deltaTime;

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
            GameObject.Destroy(transform.gameObject);
        }
    }
}
