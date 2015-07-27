using UnityEngine;
using System.Collections;
using System;

public class NetworkLobby : MonoBehaviour {

	const string VERSION = "V0.6.0";
	private RoomInfo[] roomsList;

	// Use this for initialization
	void Start () {
		PhotonNetwork.ConnectUsingSettings (VERSION);
	}

	void OnGUI()
	{
		// Title
		GUIStyle titleStyle = new GUIStyle ();
		titleStyle.fontSize = 30;
		titleStyle.normal.textColor = Color.white;
		GUI.Label (new Rect (Screen.width / 2, 20, 100, 50), "GASP", titleStyle);

		if (!PhotonNetwork.connected) {
			GUILayout.Label (PhotonNetwork.connectionStateDetailed.ToString ());
		} else if (PhotonNetwork.room == null) {
			// Room Name
			ApplicationModel.roomName = GUI.TextField (new Rect (100, 100, 250, 30), ApplicationModel.roomName);
			// Player Name
			//ApplicationModel.playerName = GUI.TextField (new Rect (400, 100, 250, 30), ApplicationModel.playerName);
			// Join Server Button
			if (GUI.Button (new Rect (100, 150, 250, 50), "Start Server")) {
				//PhotonNetwork.CreateRoom (ApplicationModel.roomName, true, true, 4);
				Application.LoadLevel("MainScene");
			}
			// Rooms List
			if (roomsList != null) {
				for (int i = 0; i < roomsList.Length; i++) {
					if (GUI.Button (new Rect (100, 250 + (110 * i), 250, 30), "Join " + roomsList [i].name)) {
						//PhotonNetwork.JoinRoom (roomsList [i].name);
						Application.LoadLevel("MainScene");
					}
				}
			}
		}
	}

	void OnReceivedRoomListUpdate() {
		roomsList = PhotonNetwork.GetRoomList ();
	}
	/*
	void OnJoinedRoom() {
		Debug.Log ("Connected to Room");
		Application.LoadLevel ("MainScene");
	}
	*/
}
