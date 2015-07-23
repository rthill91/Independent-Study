using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public float MoveSpeed;
	public float JumpSpeed;
	public float Gravity = 8.0f;
	public GameObject gun;

	private CharacterController cc;
	private int lives = 3;
	private int health = 100;
	private int BulletDamage = 10;
	private Text LivesText;
	private Text HealthText;
	private int playerID;

	// Use this for initialization
	void Start () {
		playerID = PhotonNetwork.player.ID;
		cc = GetComponent<CharacterController>();

		LivesText = ((transform.Find ("UI").gameObject).transform.Find ("Lives").gameObject).GetComponent<Text> ();
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
		LivesText.text = lives.ToString () + " Lives";
		HealthText.text = health.ToString() + " HP";
	}
	/*
	void OnTriggerEnter(Collider other) {
		if(other.tag == "Bullet") {
			other.gameObject.SetActive(false);
			PhotonNetwork.Destroy(other.gameObject);
			damageTest();
		}
	}
	*/
	void damageTest() {
		health -= BulletDamage;
		
		if (health <= 0) {
			if (lives <= 1) {
				Destroy (gameObject);
			} else {
				lives -= 1;
				health = 100;
				gameObject.transform.position = GameObject.FindGameObjectWithTag ("Respawn").transform.position;
			}
		}
	}

	[RPC]
	public void TakeDamage(int id) {
		//if (id == gameObject.GetInstanceID()) {
		int myID = gameObject.GetComponent<PhotonView> ().viewID;
		if(id == myID) {
			health -= BulletDamage;
			
			if (health <= 0) {
				if (lives <= 1) {
					Destroy (gameObject);
				} else {
					lives -= 1;
					health = 100;
					gameObject.transform.position = GameObject.FindGameObjectWithTag ("Respawn").transform.position;
				}
			}

			//PhotonNetwork.Destroy(bulletId);
		}
	}
}