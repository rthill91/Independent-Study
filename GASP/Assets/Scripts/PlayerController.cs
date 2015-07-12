using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public float MoveSpeed;
	public float JumpSpeed;
	public float Gravity = 8.0f;
	public GameObject gun;

	private CharacterController cc;
	private int health = 100;
	private int BulletDamage = 10;
	private Text HealthText;

	// Use this for initialization
	void Start () {
		cc = GetComponent<CharacterController>();

		HealthText = ((transform.Find("UI").gameObject).transform.Find("Health").gameObject).GetComponent<Text>();

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

	void LateUpdate() {
		HealthText.text = health.ToString() + " HP";
	}
	

	void OnTriggerEnter(Collider other) {
		if(other.tag == "Bullet") {
			other.gameObject.SetActive(false);
			Destroy(other.gameObject);
			health -= BulletDamage;

			if(health <= 0) {
				Destroy(gameObject);
			}
		}
	}
}
