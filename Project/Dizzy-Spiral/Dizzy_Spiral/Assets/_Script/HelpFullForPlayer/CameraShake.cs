using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CameraShake : MonoBehaviour {
    public float lifeTime = 10.0f;
    private float originLifeTime;
    public float shakeDuration = 6.0f;
    public float max = 5.0f;

    private float time = 0.0f;

    private Vector3 originalCameraPosition;
    private Transform cameraTransform;
    private bool isShaking = false;

    private Image progressBar;
    private GameObject progressInfo;

    void Start()
    {
        originalCameraPosition = GameObject.FindWithTag("MainCameraParent").transform.position;
        cameraTransform = GameObject.FindWithTag("MainCameraParent").transform;

        progressBar = transform.FindChild("ProgressBar").FindChild("Red").FindChild("RedImage").GetComponent<Image>();
        progressBar.fillAmount = 1.0f;

        progressInfo = transform.FindChild("ProgressBar").gameObject;
        originLifeTime = lifeTime;
    }

    void Update()
    {
        if (!isShaking)
        {
            lifeTime -= Time.deltaTime;

            progressBar.fillAmount = lifeTime / originLifeTime;

            if (lifeTime <= 0.0f)
                GameObject.Destroy(transform.gameObject);
        } else
        {
            time += Time.deltaTime;

            if (time <= shakeDuration)
            {
                float percentComplete = time / shakeDuration;
                float factor = 1.0f - Mathf.Clamp(/*3 * */ percentComplete /* - 2.0f*/, 0.0f, 1.0f);
                
                float x = Random.value * 2.0f - 1.0f;
                float z = Random.value * 2.0f - 1.0f;
                x *= max * factor;
                z *= max * factor;

                cameraTransform.position = new Vector3(originalCameraPosition.x + x, originalCameraPosition.y, originalCameraPosition.z + z);
            }else
            {
                cameraTransform.position = originalCameraPosition;
                GameObject.Destroy(transform.gameObject);
            }
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "PlayerObject")
        {
            transform.GetChild(0).GetComponent<MeshRenderer>().enabled = false;
            isShaking = true;

            progressInfo.SetActive(false);
        }
    }
}
