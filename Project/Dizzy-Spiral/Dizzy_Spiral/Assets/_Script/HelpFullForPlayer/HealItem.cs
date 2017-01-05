using UnityEngine;
using System.Collections;

public class HealItem : MonoBehaviour {
    public float lifeTime = 10.0f;

    public int healPoints = 5;

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
            GameObject.Destroy(transform.gameObject);
        }
    }
}
