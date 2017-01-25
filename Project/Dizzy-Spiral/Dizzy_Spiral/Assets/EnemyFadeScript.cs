using UnityEngine;
using System.Collections;

public class EnemyFadeScript : MonoBehaviour {

	private bool fade = false;

	public float speed = 1.0f;
    public float maxAlpha = 0.45f;

	private bool halfway = false;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void FixedUpdate () {

		if (fade) {
            

            Color color = transform.GetComponent<MeshRenderer>().material.color;//SetColor("color", new Color(1,0,0,alpha));
            float alpha = 0.0f;

            if (!halfway)
            {
                alpha = color.a;

                alpha += (speed * Time.fixedDeltaTime)/255.0f;

                if (alpha > maxAlpha)
                    halfway = true;
            }
            else
            {
                alpha = color.a;

                alpha -= (speed * Time.fixedDeltaTime)/255.0f;

                if (alpha <= 0)
                {
                    halfway = false;
                    fade = false;
                }
            }

            color.a = alpha;
            transform.GetComponent<MeshRenderer>().material.color = color;
            /*float lerp = Mathf.PingPong(Time.time, speed) / speed;

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
			}*/
        }

	}

	public void Fade(){
		fade = true;
	}
}
