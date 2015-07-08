using UnityEngine;
using System.Collections;

public class NetworkPlayer : Photon.MonoBehaviour {

	private bool isAlive = true;
	private Vector3 position;
	private float lerpSmoothing = 2f;

	// Use this for initialization
	void Start () {
		if(photonView.isMine) {
			GetComponent<PlayerController>().enabled = true;

			var ui = transform.Find("UI").gameObject;
			ui.SetActive(true);
			
		} else {
			StartCoroutine("Alive");
		}
	}
	
	void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info) {
		if(stream.isWriting) {
			stream.SendNext(transform.position);
		} else {
			position = (Vector3)stream.ReceiveNext();
		}
	}

	IEnumerator Alive() {
		while(isAlive) {
			transform.position = Vector3.Lerp (transform.position, position, Time.deltaTime * lerpSmoothing);

			yield return null;
		}
	}
}
