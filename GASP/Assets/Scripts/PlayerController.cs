using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public float MoveSpeed;
	public float JumpSpeed;
	public float Gravity = 8.0f;
	public GameObject gun;

	private CharacterController cc;

	// Use this for initialization
	void Start () {
		cc = GetComponent<CharacterController>();

		gameObject.GetComponent<Renderer> ().material.color = Color.blue;
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 move = new Vector3(Input.GetAxis("Horizontal"), 0, 0);
		move = transform.TransformDirection(move);
		move *= MoveSpeed;

		// Jump
		if(Input.GetButton("Jump")) {
			move.y = JumpSpeed;
		}

		cc.SimpleMove(Physics.gravity);
		
		// Move controller
		cc.Move(move * Time.deltaTime);

	}
}