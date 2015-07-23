using UnityEngine;
using System.Collections;

public class BulletController : Photon.MonoBehaviour {

	private bool atomicTrigger = true;

	void OnTriggerEnter(Collider other) {
		if (other.tag == "Platform") {
			PhotonNetwork.Destroy (gameObject);
		} else if (other.tag == "Player" && atomicTrigger) {
			atomicTrigger = false;

			PhotonView otherPV = other.gameObject.GetComponent<PhotonView>();
			PhotonView myPV = gameObject.GetComponent<PhotonView>();

			if(otherPV == null) {
				Debug.LogError("BulletController get PV failed");
			}
			otherPV.RPC("TakeDamage", PhotonTargets.AllViaServer, otherPV.viewID);
			PhotonNetwork.Destroy(gameObject);
		}
	}
}
