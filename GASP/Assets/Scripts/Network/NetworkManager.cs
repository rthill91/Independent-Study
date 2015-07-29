using UnityEngine;
using System.Collections;

public class NetworkManager : MonoBehaviour {
		
	public string playerPrefabName = "Player";
	private Transform spawnPoint;
	public GameObject[] spawnPoints;

	// Use this for initialization
	void Start () {
		spawnPoints = GameObject.FindGameObjectsWithTag ("Respawn");

		spawnPoint = spawnPoints [ApplicationModel.playerId - 1].transform;

		PhotonNetwork.Instantiate (playerPrefabName,
		                           spawnPoint.position,
		                           Quaternion.identity,
		                           0);

	}

	void OnGUI() {
		if(PhotonNetwork.room != null)
			GUILayout.Label (PhotonNetwork.room.name);
	}
}
