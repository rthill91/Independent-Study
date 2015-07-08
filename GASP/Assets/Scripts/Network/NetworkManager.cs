using UnityEngine;
using System.Collections;

public class NetworkManager : MonoBehaviour {

	const string VERSION = "V0.0.2";

	public string roomName = "room1";
	public string playerPrefabName = "Player";
	public Transform spawnPoint;

	// Use this for initialization
	void Start () {
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
		PhotonNetwork.Instantiate(playerPrefabName,
		                          spawnPoint.position,
		                          Quaternion.identity,
		                          0);
	}
}
