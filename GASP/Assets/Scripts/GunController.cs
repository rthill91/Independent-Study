using UnityEngine;
using System.Collections;

public class GunController : MonoBehaviour {

	public GameObject bullet;
	public float BulletSpeed;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
		Vector3 mouseLoc = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		mouseLoc.z = 0;
		transform.LookAt(mouseLoc);
		transform.rotation = Quaternion.FromToRotation(Vector3.up, Vector3.right) * transform.rotation;




		// Shoot
		if(Input.GetMouseButtonDown(0)) {
			Vector3 clickPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
			clickPosition.z = 0;
			GameObject projectile = Instantiate(bullet, transform.position, Quaternion.identity) as GameObject;
			
			projectile.transform.LookAt(clickPosition);
			projectile.GetComponent<Rigidbody>().AddForce(projectile.transform.forward * BulletSpeed);
		}
	}
}
