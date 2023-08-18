using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    Board m_gameBoard;
    Spawner m_spawner;
    Shape m_activeShape;

    float m_dropInterval = 1f;

    float m_timeToDorp ;


    // Start is called before the first frame update
    void Start()
    {
        m_gameBoard = GameObject.FindWithTag("Board").GetComponent<Board>();
        m_spawner =  GameObject.FindWithTag("Spawner").GetComponent<Spawner>();

        if (m_spawner )
        {
            if (m_activeShape == null)
            {
                m_activeShape = m_spawner.SpawnShape();

            }
            
            m_spawner.transform.position = Vectorf.Round(m_spawner.transform.position);
        }

        if(!m_gameBoard)
        {
            Debug.LogWarning("Warning! there is no Game Board");
        }

        if(!m_spawner)
        {
            Debug.LogWarning("Warning! there is no spawner defined!");
        }

    }

    // Update is called once per frame
    void Update()
    {
        if(!m_gameBoard || !m_spawner)
        {
            return;
        }
        if (Time.time > m_timeToDorp)
        {
            m_timeToDorp = Time.time + m_dropInterval;

            if (m_activeShape)
            {
                m_activeShape.MoveDown();

                if (m_gameBoard.isValidPosition(m_activeShape))
                {
                    m_activeShape.MoveUp();
                    m_gameBoard.StoreShapeInGrid(m_activeShape);
                    if (m_spawner)
                    {
                        m_activeShape = m_spawner.SpawnShape();
                    }
                }

 
            }
        }
    }
}
