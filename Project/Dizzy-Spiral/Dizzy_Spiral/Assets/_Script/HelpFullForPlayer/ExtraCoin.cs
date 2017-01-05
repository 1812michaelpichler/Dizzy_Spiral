﻿using UnityEngine;
using System.Collections;

public class ExtraCoin : MonoBehaviour {
    public float lifeTime = 10.0f;

    public int pointValue = 5;

    void Start()
    {
    }

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
            HighscoreScript.Instance.addPoints(pointValue);
            GameObject.Destroy(transform.gameObject);
        }
    }
}