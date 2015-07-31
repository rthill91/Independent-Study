using UnityEngine;
using System.Collections;
using System;

public class NetworkLobby : MonoBehaviour {

	const string VERSION = "V1.0.0";
	private RoomInfo[] roomsList;
	private RoomOptions roomOptions;
	private int minPlayers = 2;

	// Use this for initialization
	void Start () {
		if(!PhotonNetwork.connected)
			PhotonNetwork.ConnectUsingSettings (VERSION);

		roomOptions = new RoomOptions () {
			isOpen = true,
			isVisible = true,
			maxPlayers = 4
		};
	}

	void OnGUI()
	{
		// Title
		GUIStyle titleStyle = new GUIStyle ();
		titleStyle.fontSize = 100;
		titleStyle.normal.textColor = Color.white;
		titleStyle.alignment = TextAnchor.MiddleCenter;
		GUI.Label (new Rect (Screen.width / 2 - 50, 20, 100, 50), "GASP", titleStyle);

		if (!PhotonNetwork.connected) {
			GUILayout.Label (PhotonNetwork.connectionStateDetailed.ToString ());
		} else if (PhotonNetwork.room == null) {
			// Room Name
			ApplicationModel.roomName = GUI.TextField (new Rect (100, 100, 250, 30), ApplicationModel.roomName);
			// Join Server Button
			if (GUI.Button (new Rect (100, 150, 250, 50), "Start Server")) {
				PhotonNetwork.JoinOrCreateRoom (ApplicationModel.roomName, roomOptions, TypedLobby.Default);
			}
			// Rooms List
			if (roomsList != null) {
				for (int i = 0; i < roomsList.Length; i++) {
					if(roomsList[i].playerCount >= roomsList[i].maxPlayers) {
						continue;
					}
					if (GUI.Button (new Rect (100, 250 + (110 * i), 250, 30), "Join " + roomsList [i].name)) {
						ApplicationModel.roomName = roomsList [i].name;
						PhotonNetwork.JoinRoom (ApplicationModel.roomName);
					}
				}
			}
		} else {
			if(ApplicationModel.playerId == 0) {
				ApplicationModel.playerId = PhotonNetwork.room.playerCount;
			}
			GUIStyle statsStyle = new GUIStyle ();
			statsStyle.normal.textColor = Color.white;
			statsStyle.alignment = TextAnchor.MiddleCenter;
			GUI.Label (new Rect (Screen.width / 2 - 50, 150, 100, 50), PhotonNetwork.room.playerCount.ToString() +
			           " Player(s) in '" + PhotonNetwork.room.name + "'", statsStyle);

			if(PhotonNetwork.isMasterClient) {
				if(PhotonNetwork.room.playerCount >= minPlayers) {
					if(GUI.Button(new Rect(Screen.width / 2 - 100, 200, 200, 50), "Start Game")) {
						var pv = gameObject.GetComponent<PhotonView>();
						pv.RPC("StartGame", PhotonTargets.AllViaServer);
					}
				} else {
					GUI.Label(new Rect(Screen.width / 2 - 100, 200, 200, 50), "Waiting for at least one other player");
				}
			} else {
				GUI.Label(new Rect (Screen.width / 2 - 100, 200, 200, 50),
				          "Waiting on Host to start the game.", statsStyle);
			}

			if(GUI.Button(new Rect(Screen.width / 2 - 100, 300, 200, 50), "Return To Lobby")) {
				PhotonNetwork.LeaveRoom();
			}
		}
	}

	void OnReceivedRoomListUpdate() {
		roomsList = PhotonNetwork.GetRoomList ();
	}

	[RPC]
	void StartGame() {
		Application.LoadLevel ("MainScene");
	}
}
