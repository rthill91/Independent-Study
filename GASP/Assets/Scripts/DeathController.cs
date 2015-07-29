using UnityEngine;
using System.Collections;

public class DeathController : MonoBehaviour {

	void OnGUI() {
		GUIStyle style = new GUIStyle ();
		style.fontSize = 30;


		if (ApplicationModel.win) {
			style.normal.textColor = new Color (0.0f, 0.8f, 0.0f);
			GUI.Label (new Rect(Screen.width / 2 - 50, Screen.height / 2, 100, 50), "YOU WIN!!!", style);
		} else {
			style.normal.textColor = new Color (0.8f, 0.0f, 0.0f);
			GUI.Label (new Rect (Screen.width / 2 - 50, Screen.height / 2, 100, 50), "YOU LOSE", style);
		}
	}
}
