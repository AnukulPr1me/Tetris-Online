using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{

    public Shape[] m_allShape;

    Shape GetRandomShape()
    {
        int i = Random.Range(0, m_allShape.Length);
        if (m_allShape[i])
        {
            return m_allShape[i];
        }
        else
        {
            Debug.Log("Warning! Invalid Shape");
            return null;
        }
    }


    public Shape SpawnShape()
    {
        Shape shape = null;
        shape = Instantiate(GetRandomShape(), transform.position, Quaternion.identity) as Shape;
        if(shape)
        {
            return shape;
        }
        else
        {
            Debug.LogWarning("WARNING! Invalid Shape");
            return null;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        Vector2 originalVector = new Vector2(4.3f, 1.3f);
        Vector2 newVector = Vectorf.Round(originalVector);

        Debug.Log(newVector.ToString());
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
