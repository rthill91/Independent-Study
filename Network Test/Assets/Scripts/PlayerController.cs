using UnityEngine;
using System.Collections;

[RequireComponent(typeof(CharacterController))]
public class PlayerController : MonoBehaviour {
	
	public float MoveSpeed;
	public float RotationSpeed;
	public float JumpSpeed;
	CharacterController cc;
	
	// Use this for initialization
	void Start () {
		cc = GetComponent<CharacterController>();
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 forward = Input.GetAxis("Vertical") * transform.TransformDirection(Vector3.forward) * MoveSpeed;
		if(Input.GetButton ("Jump")) {
			forward.y = JumpSpeed;
		}
		cc.Move (forward * Time.deltaTime);
		transform.Rotate (new Vector3(
			0,
			Input.GetAxis("Horizontal") * RotationSpeed * Time.deltaTime,
			0
		));

		cc.SimpleMove(Physics.gravity);
	}
}
