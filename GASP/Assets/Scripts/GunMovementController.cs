using UnityEngine;
using System.Collections;

public class GunMovementController : MonoBehaviour {

	public GameObject gun;
	
	// Update is called once per frame
	void Update () {
		// Rotate gun container
		Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		mousePos.z = 0;
		Vector3 screenPos = Camera.main.ScreenToWorldPoint(new Vector3(mousePos.x, mousePos.y, transform.position.z - Camera.main.transform.position.z));
		transform.eulerAngles = new Vector3(0,0,Mathf.Atan2((mousePos.y - transform.position.y), (mousePos.x - transform.position.x))*Mathf.Rad2Deg);

		// Rotate gun
		gun.transform.LookAt(mousePos);
		gun.transform.rotation = Quaternion.FromToRotation(Vector3.up, Vector3.right) * transform.rotation;
	}
}
