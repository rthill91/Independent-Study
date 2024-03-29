﻿using UnityEngine;
using System.Collections;

public class BulletController : Photon.MonoBehaviour {

	private bool atomicTrigger = true;
	public string parent;

	void OnTriggerEnter(Collider other) {
		if (other.tag == "Platform") {
			PhotonNetwork.Destroy (gameObject);
		} else if (other.name == parent) {
			PhotonNetwork.Destroy(gameObject);
		} else if (other.tag == "Player" 
		           && atomicTrigger) {
			atomicTrigger = false;

			PhotonView otherPV = other.gameObject.GetComponent<PhotonView>();

			otherPV.RPC("TakeDamage", PhotonTargets.AllViaServer);
			PhotonNetwork.Destroy(gameObject);
		}
	}
}
