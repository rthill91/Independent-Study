using UnityEngine;
using System.Collections;

public class DeathController : MonoBehaviour {

	void OnGUI() {
		GUIStyle style = new GUIStyle ();
		style.fontSize = 30;
		style.normal.textColor = Color.green;

		if (ApplicationModel.win) {
			GUI.Label (new Rect(Screen.width / 2, Screen.height / 2 - 50, 100, 50), "YOU WIN!!!", style);
		} else {
			GUI.Label (new Rect (Screen.width / 2, Screen.height / 2 - 50, 100, 50), "YOU LOSE", style);
		}
	}
}
