using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Board : MonoBehaviour
{
    [Header("Element")]
    public Transform m_emptySprite;
    public int m_Height = 30;
    public int m_Width = 10;
    public int m_Header = 8;

    Transform[,] m_Grid;
    private void Awake()
    {
        m_Grid = new Transform[m_Width, m_Height];
    }

    // Start is called before the first frame update
    void Start()
    {
        DrawEmptyCells();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void DrawEmptyCells()
    {
        if (m_emptySprite != null)
        {
            for (int y = 0; y < m_Height - m_Header; y++)
            {
                for (int x = 0; x < m_Width; x++)
                {
                    Transform clone;
                    clone = Instantiate(m_emptySprite, new Vector3(x, y, 0), Quaternion.identity) as Transform;
                    clone.name = "Board Space (x = " + x.ToString() + ", y =" + y.ToString() + ")";
                    clone.transform.parent = transform;
                }
            }
        }
        else
        {
            Debug.Log("WARNING: Please assign emptySprite object!");
        }
    }
}
