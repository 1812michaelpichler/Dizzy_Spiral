﻿using UnityEngine;
using System.Collections;

public class PlayerMovement : MonoBehaviour {

    //Influence the speed of the player object
    public float rotationSpeed = 10.0f;
    public float radiusChangeSpeed = 0.1f;

    //Define the allowed range of the player object
    public float minRadius = 2.0f;
    public float maxRadius = 43.0f;

    //This variable holds the current radius relating to the arena center
    private float radius;

    private float currentYAngle = 0.0f;

    //This is the center of the field
    Transform transformPlayerObject = null;
    //The relative position in z-direction from the center to the player without rotation
    Vector3 playerVector;

    //Handles player input related to the running plattform (Android, PC)
    private bool isSpaceDown = false;

    //Holds the data for the player highscore
    private HighscoreScript highscoreScript = null;
	private PlayerHealth playerHealth = null;

	// Use this for initialization
	void Start () {
        radius = minRadius;

        transformPlayerObject = transform.GetChild(0).GetComponent<Transform>();
        playerVector = transformPlayerObject.position;

        #if UNITY_ANDROID       //This part is to avoid standby modus after certain seconds
            Screen.sleepTimeout = SleepTimeout.NeverSleep;
        #endif

        highscoreScript = HighscoreScript.Instance;
		playerHealth = PlayerHealth.Instance;
    }
	
    void Update()
    {
        handleInput();
    }
    //Fixed update is by default 0.02s and handles more precise physics calculation as update (frame-drops, more time is needed) (everyFrame)
    void FixedUpdate () {

        //handleInput();

        if(isSpaceDown)
        {
            radius += Time.fixedDeltaTime * radiusChangeSpeed;

            if (radius > maxRadius)
                radius = maxRadius;
        }
        else
        {
            radius -= Time.fixedDeltaTime * radiusChangeSpeed;

            if(radius < minRadius)
            {
                radius = minRadius;
            }
        }

        if (radius < minRadius)
        {
            playerVector.z = minRadius;
        }
        else
        {
            playerVector.z = radius;
        }
        
        transformPlayerObject.localPosition = playerVector;

        float customizedRotationSpeed = Mathf.Sqrt(minRadius / radius) * rotationSpeed;
        transform.rotation = Quaternion.AngleAxis(Time.deltaTime * customizedRotationSpeed, Vector3.up) * transform.rotation;

        //Control if player have make a round
        if(transform.rotation.eulerAngles.y < currentYAngle)
        {
            highscoreScript.addPoints(1);
        }

        currentYAngle = transform.rotation.eulerAngles.y;
	}

    //Controls the input for different plattforms
    private void handleInput()
    {
        #if UNITY_EDITOR
                handlePCInput();
        #endif

        #if UNITY_STANDALONE
                handlePCInput();
        #endif

        #if UNITY_ANDROID
                    if (Input.touchCount > 0)
                        isSpaceDown = true;
                    else
                        isSpaceDown = false;
        #endif
    }

    //Input for the editor and pc
    private void handlePCInput()
    {
        if (Input.GetKeyDown("space") /*|| Input.touchCount > 0*/)
        {
            isSpaceDown = true;
        }
        else if (Input.GetKeyUp("space") /*|| Input.touchCount < 1*/)
        {
            isSpaceDown = false;
        }
    }

    public float MinRadius
    {
        get { return minRadius; }
    }

    public float MaxRadius
    {
        get { return maxRadius; }
    }
}
