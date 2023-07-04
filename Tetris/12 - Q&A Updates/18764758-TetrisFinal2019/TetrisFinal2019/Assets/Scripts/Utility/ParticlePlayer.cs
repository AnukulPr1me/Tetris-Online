using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ParticlePlayer : MonoBehaviour {

	public ParticleSystem[] m_allParticleSystems;

	// Use this for initialization
	void Start () {
		m_allParticleSystems = GetComponentsInChildren<ParticleSystem>();
	}
		
	// plays all child ParticleSystem components
	public void Play()
	{
		foreach (ParticleSystem ps in m_allParticleSystems)
		{
			ps.Stop();
			ps.Play();

			// this is to address some weird bug in Unity 5.3 
			// the top particle system will stop playing unless you do this
			//https://issuetracker.unity3d.com/issues/particle-system-plays-only-once
			ps.startLifetime = ps.startLifetime;
		}
	}

}
