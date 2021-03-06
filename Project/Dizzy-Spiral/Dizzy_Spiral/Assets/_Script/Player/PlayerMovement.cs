﻿using UnityEngine;
using System.Collections;

using UnityEngine.UI;

public class PlayerMovement : MonoBehaviour {

    //Influence the speed of the player object
    public float rotationSpeed = 10.0f;
    public float radiusChangeSpeed = 0.1f;
	private float currentRadiusChangeSpeed = 0.0f;
	private bool lastSpace = false;

    //Define the allowed range of the player object
    public float minRadius = 2.0f;
    public float maxRadius = 43.0f;

	public float increaseInDifficulty = 0.10f;

    //This variable holds the current radius relating to the arena center
    private float radius;

    private float currentYAngle = 0.0f;

	private bool clockwise = true;

    //This is the center of the field
    Transform transformPlayerObject = null;
    //The relative position in z-direction from the center to the player without rotation
    Vector3 playerVector;

    //Handles player input related to the running plattform (Android, PC)
    private bool isSpaceDown = false;

	private Text secondsRemaining = null;
	public float secondsOfEffectRemaining = 10;
	private bool effectActive = false;

	private Text hpAdded = null;
	private float secondsHP = 3;
	private bool showHPText = false;

	private float alpha;

	// Use this for initialization
	void Start () {
        radius = minRadius;

        transformPlayerObject = transform.GetChild(0).GetComponent<Transform>();
        playerVector = transformPlayerObject.position;

        #if UNITY_ANDROID       //This part is to avoid standby modus after certain seconds
            Screen.sleepTimeout = SleepTimeout.NeverSleep;
        #endif
        
		secondsRemaining = GameObject.Find("txtSeconds").GetComponent<Text>();
		secondsRemaining.text = "";

		hpAdded = GameObject.Find("txtAddedHP").GetComponent<Text>();
		hpAdded.text = "";
		GameObject currentObject = GameObject.Find ("HurtPlane");
		Color color = currentObject.GetComponent<MeshRenderer>().material.color;//SetColor("color", new Color(1,0,0,alpha));
		color.a = 0;
		currentObject.GetComponent<MeshRenderer> ().material.color = color;
    }
	
    void Update()
    {
		/*
		GameObject currentObject = GameObject.Find ("HurtPlane");
		Color color = currentObject.GetComponent<MeshRenderer>().material.color;//SetColor("color", new Color(1,0,0,alpha));
		color.a = 0;
		currentObject.GetComponent<MeshRenderer> ().material.color = color;

		Debug.Log (color);*/

        handleInput();

		if (effectActive) {
			secondsOfEffectRemaining -= Time.deltaTime;
			secondsRemaining.text = Mathf.Round (secondsOfEffectRemaining).ToString ();

			if (secondsOfEffectRemaining < 0) {
				effectActive = false;
				clockwise = true;
				secondsOfEffectRemaining = 10;
				secondsRemaining.text = "";
			}
		}

		if (showHPText) {
			secondsHP -= Time.deltaTime;
			//hpAdded.text = Mathf.Round (secondsHP).ToString ();

			if (secondsHP < 0) {
				showHPText = false;
				secondsHP = 3;
				hpAdded.text = "";
			}
		}
		// ------ NEw -----
		//Color red = Color.red;
		/*
		GameObject currentObject = GameObject.Find ("HurtPlane");

		//currentObject

		float lerp = Mathf.PingPong(Time.time, 1.0f) / 1.0f;

		float alpha = Mathf.Lerp (0.0f, 1.0f, lerp);

		//alpha = Time.deltaTime * 0.00000001f;

		//Color invisible = new Color (0, 0, 0, 0);
		Color color = currentObject.GetComponent<MeshRenderer>().material.color;//SetColor("color", new Color(1,0,0,alpha));
		color.a = alpha;
		currentObject.GetComponent<MeshRenderer> ().material.color = color;
		//Color.Lerp(red, invisible, lerp);*/
    }
    //Fixed update is by default 0.02s and handles more precise physics calculation as update (frame-drops, more time is needed) (everyFrame)
    void FixedUpdate () {

        //handleInput();

		if (isSpaceDown) {
			if (!lastSpace) {
				if (radius > 3) {
					currentRadiusChangeSpeed = -currentRadiusChangeSpeed;
				}
				lastSpace = true;
			}
				
			currentRadiusChangeSpeed += Time.fixedDeltaTime * 2f * radiusChangeSpeed;
			if (currentRadiusChangeSpeed > radiusChangeSpeed)
				currentRadiusChangeSpeed = radiusChangeSpeed;
			
			radius += Time.fixedDeltaTime * currentRadiusChangeSpeed;


		} else {
			if (lastSpace) {
				if (radius > 3) {
					currentRadiusChangeSpeed = -currentRadiusChangeSpeed;
				}
				lastSpace = false;
			}
				currentRadiusChangeSpeed += Time.fixedDeltaTime * 2f * radiusChangeSpeed;
			if (currentRadiusChangeSpeed > radiusChangeSpeed)
				currentRadiusChangeSpeed = radiusChangeSpeed;	
			
			radius -= Time.fixedDeltaTime * currentRadiusChangeSpeed;

			if (radius < minRadius) {
				radius = minRadius;
			}
        }

        if (radius > maxRadius)
        {
            radius = maxRadius;
            currentRadiusChangeSpeed = 0.0f;
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

		if (clockwise)
		{
			transform.rotation = Quaternion.AngleAxis (Time.deltaTime * customizedRotationSpeed, Vector3.up) * transform.rotation;

			//Control if player have make a round
			if(transform.rotation.eulerAngles.y < currentYAngle)
			{
				//highscoreScript.addPoints(1);
				increaseDifficulty ();
			}
		}
		else
		{
			transform.rotation = Quaternion.AngleAxis (Time.deltaTime * customizedRotationSpeed, Vector3.down) * transform.rotation;

			//Control if player have make a round
			if(transform.rotation.eulerAngles.y > currentYAngle)
			{
				//highscoreScript.addPoints(1);
				increaseDifficulty ();
			}
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

		#if UNITY_IPHONE
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

	private void increaseDifficulty()
	{
		rotationSpeed = rotationSpeed + rotationSpeed * increaseInDifficulty;
		radiusChangeSpeed = radiusChangeSpeed + radiusChangeSpeed * increaseInDifficulty;
	}

	public void counterClockWise() {
		
		this.clockwise = false;
		effectActive = true;
	}

	public void showHPExtra() {
		showHPText = true;
		hpAdded.text = "+5HP";
	}
}
