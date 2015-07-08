using UnityEngine;
using System.Collections;

public class UIController : MonoBehaviour {

	private Vector3 location;

	// Use this for initialization
	void Start () {
		location = transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		transform.position = location;
	}
}
