﻿using UnityEngine;
using System.Collections;

public class GunFiringController : MonoBehaviour {
	
	public GameObject gun;
	public GameObject bullet;
	public float BulletSpeed;
	
	private GameObject bulletSpawn;
	
	// Use this for initialization
	void Start () {
		bulletSpawn = GameObject.Find ("BulletSpawn");
	}
	
	// Update is called once per frame
	void Update () {
		// Shoot
		if(Input.GetMouseButtonDown(0)) {
			Vector3 clickPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
			clickPosition.z = 0;
			GameObject projectile = PhotonNetwork.Instantiate("Bullet", 
			                                                  bulletSpawn.transform.position, 
			                                                  bulletSpawn.transform.rotation,
			                                                  0) as GameObject;

			projectile.GetComponent<BulletController>().parent = transform.parent.name;
			
			projectile.transform.LookAt(clickPosition);
			projectile.GetComponent<Rigidbody>().AddForce(projectile.transform.forward * BulletSpeed);


		}
	}
}
