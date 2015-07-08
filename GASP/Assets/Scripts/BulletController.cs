using UnityEngine;
using System.Collections;

public class BulletController : MonoBehaviour {
	

	// Use this for initialization
	void Start () {
		
	}

	void OnTriggerEnter(Collider other) {
		if(other.tag == "Platform") {
			Destroy(gameObject);
		}
	}
}
