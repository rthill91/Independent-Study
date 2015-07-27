using UnityEngine;
using System.Collections;
using System;
using UnityEngine.UI;

public class NetworkPlayer : Photon.MonoBehaviour {

	private bool isAlive = true;
	private Vector3 position;
	private float lerpSmoothing = 5f;
	private GameObject gun;
	private Quaternion gunRot;

	
	private int lives = 3;
	private int health = 100;
	private int BulletDamage = 10;
	private Text LivesText;
	private Text HealthText;

	// Use this for initialization
	void Start () {
		gun = transform.Find("GunContainer").gameObject;
		gameObject.name = Guid.NewGuid ().ToString();

		if(photonView.isMine) {

			GetComponent<PlayerController>().enabled = true;

			var ui = transform.Find("UI").gameObject;
			ui.SetActive(true);

			gun.GetComponent<GunFiringController>().enabled = true;
			gun.GetComponent<GunMovementController>().enabled = true;

			LivesText = ((transform.Find ("UI").gameObject).transform.Find ("Lives").gameObject).GetComponent<Text> ();
			HealthText = ((transform.Find("UI").gameObject).transform.Find("Health").gameObject).GetComponent<Text>();
			
		} else {
			StartCoroutine("Alive");
		}
	}
	
	void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info) {
		if(stream.isWriting) {
			stream.SendNext(transform.position);
			stream.SendNext(gun.transform.rotation);
		} else {
			position = (Vector3)stream.ReceiveNext();
			gunRot = (Quaternion)stream.ReceiveNext();

		}
	}

	IEnumerator Alive() {
		while(isAlive) {
			transform.position = Vector3.Lerp (transform.position, position, Time.deltaTime * lerpSmoothing);
			gun.transform.rotation = Quaternion.Lerp(gun.transform.rotation, gunRot, Time.deltaTime * lerpSmoothing);


			yield return null;
		}
	}

	[RPC]
	public void TakeDamage() {
		if (photonView.isMine) {
			health -= BulletDamage;
			if (health <= 0) {
				if (lives <= 1) {
					//Destroy (gameObject);
					PhotonNetwork.LeaveRoom ();
					ApplicationModel.win = false;
					Application.LoadLevel ("DeathScene");
				} else {
					lives -= 1;
					health = 100;
					gameObject.transform.position = GameObject.FindGameObjectWithTag ("Respawn").transform.position;
				}
			}
		}
	}

	void LateUpdate() {
		if (photonView.isMine) {
			LivesText.text = lives.ToString () + " Lives";
			HealthText.text = health.ToString () + " HP";
		}
	}
}
