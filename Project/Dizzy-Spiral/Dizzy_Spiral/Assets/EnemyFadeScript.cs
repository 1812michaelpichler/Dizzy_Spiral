using UnityEngine;
using System.Collections;

public class EnemyFadeScript : MonoBehaviour {

	private bool fade = false;

	public float speed = 1.0f;

	private bool halfway = false;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		if (fade) {
			float lerp = Mathf.PingPong(Time.time, speed) / speed;

			float alpha = Mathf.Lerp (0.0f, 1.0f, lerp);

			//alpha = Time.deltaTime * 0.00000001f;

			//Color invisible = new Color (0, 0, 0, 0);
			Color color = transform.GetComponent<MeshRenderer>().material.color;//SetColor("color", new Color(1,0,0,alpha));
			color.a = alpha;
			transform.GetComponent<MeshRenderer> ().material.color = color;

			if (alpha > 0.9)
				halfway = true;

			if (halfway && alpha < 0.1) {
				fade = false;
				Color color2 = transform.GetComponent<MeshRenderer>().material.color;//SetColor("color", new Color(1,0,0,alpha));
				color2.a = 0;
				transform.GetComponent<MeshRenderer> ().material.color = color2;
			}
		}

	}

	public void Fade(){
		fade = true;
	}
}
