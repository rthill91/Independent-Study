using UnityEngine;
using System.Collections;

public class GunController : MonoBehaviour {

	public GameObject gun;
	public GameObject bullet;
	public float BulletSpeed;

	// Use this for initialization
	void Start () {

	}
	
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

		// Shoot
		if(Input.GetMouseButtonDown(0)) {
			Vector3 clickPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
			clickPosition.z = 0;
			GameObject projectile = Instantiate(bullet, gun.transform.position, Quaternion.identity) as GameObject;
			
			projectile.transform.LookAt(clickPosition);
			projectile.GetComponent<Rigidbody>().AddForce(projectile.transform.forward * BulletSpeed);
		}
	}
}
