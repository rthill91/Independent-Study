using UnityEngine;
using System.Collections;

public class NetworkManager : MonoBehaviour {

	public string playerPrefabName = "Player";
	private Transform spawnPoint;
	public GameObject[] spawnPoints;

	// Use this for initialization
	void Start () {
		spawnPoints = GameObject.FindGameObjectsWithTag ("Respawn");

		RoomOptions roomOptions = new RoomOptions () {
			isOpen = true,
			isVisible = true,
			maxPlayers = 4
		};

		PhotonNetwork.JoinOrCreateRoom (ApplicationModel.roomName, roomOptions, TypedLobby.Default);
		/*
		if (PhotonNetwork.connected) {
			spawnPoint = spawnPoints [PhotonNetwork.playerList.Length - 1].transform;

			PhotonNetwork.Instantiate(playerPrefabName,
			                          spawnPoint.position,
			                          Quaternion.identity,
			                          0);

		}
		*/
	}

	void OnJoinedRoom() {
		spawnPoint = spawnPoints [PhotonNetwork.playerList.Length - 1].transform;
		
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
