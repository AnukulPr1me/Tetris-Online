using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SettingsPanel : MonoBehaviour 
{
    GameController m_gameController;
    TouchController m_touchController;

    public Slider m_dragDistanceSlider;
    public Slider m_swipeDistanceSlider;



	void Start () 
    {
        m_gameController = GameObject.FindObjectOfType<GameController>().GetComponent<GameController>();
        m_touchController = GameObject.FindObjectOfType<TouchController>().GetComponent<TouchController>();

        if (m_dragDistanceSlider != null)
        {
            m_dragDistanceSlider.value = 50;
            m_dragDistanceSlider.minValue = 50;
            m_dragDistanceSlider.maxValue = 150;
        }

        if (m_swipeDistanceSlider != null)
        {
            m_swipeDistanceSlider.value = 50;
            m_swipeDistanceSlider.minValue = 20;
            m_swipeDistanceSlider.maxValue = 250;
        }
	}
	
    public void UpdatePanel()
    {
        if (m_dragDistanceSlider != null && m_touchController != null)
        {
            m_touchController.m_minDragDistance = (int) m_dragDistanceSlider.value;
        }

        if (m_swipeDistanceSlider != null && m_touchController != null)
        {
            m_touchController.m_minSwipeDistance = (int) m_swipeDistanceSlider.value;
        }

    }


}
