using UnityEngine;
using System.Collections;

public class NetworkPlayer : Photon.MonoBehaviour {

	private bool isAlive = true;
	private Vector3 position;
	private float lerpSmoothing = 5f;
	private GameObject gun;
	private Quaternion gunRot;

	// Use this for initialization
	void Start () {
		gun = transform.Find("GunContainer").gameObject;

		if(photonView.isMine) {
			GetComponent<PlayerController>().enabled = true;

			var ui = transform.Find("UI").gameObject;
			ui.SetActive(true);

			gun.GetComponent<GunFiringController>().enabled = true;
			gun.GetComponent<GunMovementController>().enabled = true;
			
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
}
