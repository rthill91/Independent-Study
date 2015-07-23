using UnityEngine;
using System.Collections;

public class NetworkManager : MonoBehaviour {

	const string VERSION = "v0.5.0";

	public string roomName = "room1";
	public string playerPrefabName = "Player";
	private Transform spawnPoint;
	public GameObject[] spawnPoints;

	// Use this for initialization
	void Start () {
		spawnPoints = GameObject.FindGameObjectsWithTag ("Respawn");

		PhotonNetwork.ConnectUsingSettings(VERSION);
	}

	void OnJoinedLobby() {
		RoomOptions roomOptions = new RoomOptions() {
			isVisible = false,
			maxPlayers = 4
		};
		PhotonNetwork.JoinOrCreateRoom(roomName, roomOptions, TypedLobby.Default);
	}
	
	void OnJoinedRoom() {
		spawnPoint = spawnPoints [PhotonNetwork.playerList.Length - 1].transform;

		PhotonNetwork.Instantiate(playerPrefabName,
		                          spawnPoint.position,
		                          Quaternion.identity,
		                          0);
	}
}
