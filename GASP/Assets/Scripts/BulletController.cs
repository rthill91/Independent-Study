using UnityEngine;
using System.Collections;

public class BulletController : Photon.MonoBehaviour {
	
	void OnTriggerEnter(Collider other) {
		if (other.tag == "Platform") {
			PhotonNetwork.Destroy (gameObject);
		} else if (other.tag == "Player") {
			var otherID = other.gameObject.GetComponent<PhotonView>().viewID;
			PhotonPlayer target = PhotonPlayer.Find(otherID);

			GetComponent<PhotonView>().RPC (
				"takeDamage",
				target);

			PhotonNetwork.Destroy(gameObject);
		}
	}
}
