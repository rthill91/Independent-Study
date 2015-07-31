using UnityEngine;
using System.Collections;

public class LobbyCharacterController : MonoBehaviour {

	public bool up;
	private Vector3 dir;

	// Use this for initialization
	void Start () {
		if (up)
			dir = Vector3.up;
		else 
			dir = Vector3.down;
	}
	
	// Update is called once per frame
	void Update () {
		transform.RotateAround (transform.position, dir, 60 * Time.deltaTime);
	}
}
