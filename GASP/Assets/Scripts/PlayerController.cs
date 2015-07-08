using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public float MoveSpeed;
	public float JumpSpeed;
	public float Gravity = 8.0f;

	private CharacterController cc;
	private int health = 100;
	private int BulletDamage = 10;
	private Text HealthText;

	// Use this for initialization
	void Start () {
		cc = GetComponent<CharacterController>();

		HealthText = ((transform.Find("UI").gameObject).transform.Find("Health").gameObject).GetComponent<Text>();

		/*
		var canvas = transform.Find("UI").gameObject;
		if(canvas != null) {
			Debug.Log("FOUND SOME TEXT");
			var text = canvas.transform.Find("Health").gameObject;
			text.GetComponent<Text>().text = health.ToString() + " HP";
			
		}
		*/

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

		// Apply Gravity
		//move.y -= Gravity * Time.deltaTime;
		cc.SimpleMove(Physics.gravity);
		
		// Move controller
		cc.Move(move * Time.deltaTime);
	}

	void LateUpdate() {
		HealthText.text = health.ToString() + " HP";
	}
	

	void OnTriggerEnter(Collider other) {
		if(other.tag == "Bullet") {
			other.gameObject.SetActive(false);
			Destroy(other.gameObject);
			health -= BulletDamage;
		}
	}
}
