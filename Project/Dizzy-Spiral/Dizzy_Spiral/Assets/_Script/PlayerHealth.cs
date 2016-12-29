using UnityEngine;
using System.Collections;


using UnityEngine.UI;


public class PlayerHealth {

	private static PlayerHealth instance = null;

	public int health = 50;

	private Text txtHealth = null;

	private PlayerHealth() {
		txtHealth = GameObject.Find("txtPlayerHealth").GetComponent<Text>();

		txtHealth.text = "Health: " + health;
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
	}

	public static PlayerHealth Instance {
		get{ 
			if (instance == null)
				instance = new PlayerHealth ();

			return instance;
		}
	}
}
