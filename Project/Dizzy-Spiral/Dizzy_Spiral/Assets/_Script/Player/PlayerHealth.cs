using UnityEngine;
using System.Collections;


using UnityEngine.UI;


public class PlayerHealth {

	private static PlayerHealth instance = null;

	private int health = 50;
    private int startHealth;

	private Text txtHealth = null;

	private PlayerHealth() {
		txtHealth = GameObject.Find("txtPlayerHealth").GetComponent<Text>();

		txtHealth.text = "Health: " + health;

        startHealth = health;
    }

	public bool damage (int damage) {

		health -= damage;
		txtHealth.text = "Health: " + health;

		if (health <= 0)
			return true;

		return false;
	}

	public void heal (int healpoint)
	{
		health += healpoint;
        txtHealth.text = "Health: " + health;
    }

    public void reset()
    {
        health = startHealth;
        txtHealth.text = "Health: " + health;
    }

	public static PlayerHealth Instance {
		get{ 
			if (instance == null)
				instance = new PlayerHealth ();

			return instance;
		}
	}
}
