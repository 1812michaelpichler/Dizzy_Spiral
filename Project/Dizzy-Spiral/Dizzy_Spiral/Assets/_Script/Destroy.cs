﻿using UnityEngine;
using System.Collections;

public class Destroy : MonoBehaviour {

    public float destroyTime = 5.0f;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
        destroyTime -= Time.deltaTime;

        if (destroyTime <= 0.0f)
            GameObject.Destroy(this.gameObject);
	}
}
