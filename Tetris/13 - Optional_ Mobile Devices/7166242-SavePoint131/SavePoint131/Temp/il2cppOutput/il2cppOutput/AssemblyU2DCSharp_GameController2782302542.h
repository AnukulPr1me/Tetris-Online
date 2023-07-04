#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Board
struct Board_t64356038;
// Spawner
struct Spawner_t3948062024;
// SoundManager
struct SoundManager_t2444342206;
// ScoreManager
struct ScoreManager_t2519962843;
// Shape
struct Shape_t79847297;
// Ghost
struct Ghost_t68778607;
// Holder
struct Holder_t2167126476;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// IconToggle
struct IconToggle_t1520157005;
// ParticlePlayer
struct ParticlePlayer_t2730444071;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_GameController_Direction3503403998.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// Board GameController::m_gameBoard
	Board_t64356038 * ___m_gameBoard_2;
	// Spawner GameController::m_spawner
	Spawner_t3948062024 * ___m_spawner_3;
	// SoundManager GameController::m_soundManager
	SoundManager_t2444342206 * ___m_soundManager_4;
	// ScoreManager GameController::m_scoreManager
	ScoreManager_t2519962843 * ___m_scoreManager_5;
	// Shape GameController::m_activeShape
	Shape_t79847297 * ___m_activeShape_6;
	// Ghost GameController::m_ghost
	Ghost_t68778607 * ___m_ghost_7;
	// Holder GameController::m_holder
	Holder_t2167126476 * ___m_holder_8;
	// System.Single GameController::m_dropInterval
	float ___m_dropInterval_9;
	// System.Single GameController::m_dropIntervalModded
	float ___m_dropIntervalModded_10;
	// System.Single GameController::m_timeToDrop
	float ___m_timeToDrop_11;
	// System.Single GameController::m_timeToNextKeyLeftRight
	float ___m_timeToNextKeyLeftRight_12;
	// System.Single GameController::m_keyRepeatRateLeftRight
	float ___m_keyRepeatRateLeftRight_13;
	// System.Single GameController::m_timeToNextKeyDown
	float ___m_timeToNextKeyDown_14;
	// System.Single GameController::m_keyRepeatRateDown
	float ___m_keyRepeatRateDown_15;
	// System.Single GameController::m_timeToNextKeyRotate
	float ___m_timeToNextKeyRotate_16;
	// System.Single GameController::m_keyRepeatRateRotate
	float ___m_keyRepeatRateRotate_17;
	// UnityEngine.GameObject GameController::m_gameOverPanel
	GameObject_t3674682005 * ___m_gameOverPanel_18;
	// System.Boolean GameController::m_gameOver
	bool ___m_gameOver_19;
	// IconToggle GameController::m_rotIconToggle
	IconToggle_t1520157005 * ___m_rotIconToggle_20;
	// System.Boolean GameController::m_clockwise
	bool ___m_clockwise_21;
	// System.Boolean GameController::m_isPaused
	bool ___m_isPaused_22;
	// UnityEngine.GameObject GameController::m_pausePanel
	GameObject_t3674682005 * ___m_pausePanel_23;
	// ParticlePlayer GameController::m_gameOverFx
	ParticlePlayer_t2730444071 * ___m_gameOverFx_24;
	// GameController/Direction GameController::m_dragDirection
	int32_t ___m_dragDirection_25;
	// GameController/Direction GameController::m_swipeDirection
	int32_t ___m_swipeDirection_26;
	// System.Single GameController::m_timeToNextSwipe
	float ___m_timeToNextSwipe_27;
	// System.Single GameController::m_timeToNextDrag
	float ___m_timeToNextDrag_28;
	// System.Single GameController::m_minTimeToSwipe
	float ___m_minTimeToSwipe_29;
	// System.Single GameController::m_minTimeToDrag
	float ___m_minTimeToDrag_30;
	// System.Boolean GameController::m_didTap
	bool ___m_didTap_31;

public:
	inline static int32_t get_offset_of_m_gameBoard_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_gameBoard_2)); }
	inline Board_t64356038 * get_m_gameBoard_2() const { return ___m_gameBoard_2; }
	inline Board_t64356038 ** get_address_of_m_gameBoard_2() { return &___m_gameBoard_2; }
	inline void set_m_gameBoard_2(Board_t64356038 * value)
	{
		___m_gameBoard_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_gameBoard_2, value);
	}

	inline static int32_t get_offset_of_m_spawner_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_spawner_3)); }
	inline Spawner_t3948062024 * get_m_spawner_3() const { return ___m_spawner_3; }
	inline Spawner_t3948062024 ** get_address_of_m_spawner_3() { return &___m_spawner_3; }
	inline void set_m_spawner_3(Spawner_t3948062024 * value)
	{
		___m_spawner_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_spawner_3, value);
	}

	inline static int32_t get_offset_of_m_soundManager_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_soundManager_4)); }
	inline SoundManager_t2444342206 * get_m_soundManager_4() const { return ___m_soundManager_4; }
	inline SoundManager_t2444342206 ** get_address_of_m_soundManager_4() { return &___m_soundManager_4; }
	inline void set_m_soundManager_4(SoundManager_t2444342206 * value)
	{
		___m_soundManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_soundManager_4, value);
	}

	inline static int32_t get_offset_of_m_scoreManager_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_scoreManager_5)); }
	inline ScoreManager_t2519962843 * get_m_scoreManager_5() const { return ___m_scoreManager_5; }
	inline ScoreManager_t2519962843 ** get_address_of_m_scoreManager_5() { return &___m_scoreManager_5; }
	inline void set_m_scoreManager_5(ScoreManager_t2519962843 * value)
	{
		___m_scoreManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_scoreManager_5, value);
	}

	inline static int32_t get_offset_of_m_activeShape_6() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_activeShape_6)); }
	inline Shape_t79847297 * get_m_activeShape_6() const { return ___m_activeShape_6; }
	inline Shape_t79847297 ** get_address_of_m_activeShape_6() { return &___m_activeShape_6; }
	inline void set_m_activeShape_6(Shape_t79847297 * value)
	{
		___m_activeShape_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_activeShape_6, value);
	}

	inline static int32_t get_offset_of_m_ghost_7() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_ghost_7)); }
	inline Ghost_t68778607 * get_m_ghost_7() const { return ___m_ghost_7; }
	inline Ghost_t68778607 ** get_address_of_m_ghost_7() { return &___m_ghost_7; }
	inline void set_m_ghost_7(Ghost_t68778607 * value)
	{
		___m_ghost_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_ghost_7, value);
	}

	inline static int32_t get_offset_of_m_holder_8() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_holder_8)); }
	inline Holder_t2167126476 * get_m_holder_8() const { return ___m_holder_8; }
	inline Holder_t2167126476 ** get_address_of_m_holder_8() { return &___m_holder_8; }
	inline void set_m_holder_8(Holder_t2167126476 * value)
	{
		___m_holder_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_holder_8, value);
	}

	inline static int32_t get_offset_of_m_dropInterval_9() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_dropInterval_9)); }
	inline float get_m_dropInterval_9() const { return ___m_dropInterval_9; }
	inline float* get_address_of_m_dropInterval_9() { return &___m_dropInterval_9; }
	inline void set_m_dropInterval_9(float value)
	{
		___m_dropInterval_9 = value;
	}

	inline static int32_t get_offset_of_m_dropIntervalModded_10() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_dropIntervalModded_10)); }
	inline float get_m_dropIntervalModded_10() const { return ___m_dropIntervalModded_10; }
	inline float* get_address_of_m_dropIntervalModded_10() { return &___m_dropIntervalModded_10; }
	inline void set_m_dropIntervalModded_10(float value)
	{
		___m_dropIntervalModded_10 = value;
	}

	inline static int32_t get_offset_of_m_timeToDrop_11() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_timeToDrop_11)); }
	inline float get_m_timeToDrop_11() const { return ___m_timeToDrop_11; }
	inline float* get_address_of_m_timeToDrop_11() { return &___m_timeToDrop_11; }
	inline void set_m_timeToDrop_11(float value)
	{
		___m_timeToDrop_11 = value;
	}

	inline static int32_t get_offset_of_m_timeToNextKeyLeftRight_12() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_timeToNextKeyLeftRight_12)); }
	inline float get_m_timeToNextKeyLeftRight_12() const { return ___m_timeToNextKeyLeftRight_12; }
	inline float* get_address_of_m_timeToNextKeyLeftRight_12() { return &___m_timeToNextKeyLeftRight_12; }
	inline void set_m_timeToNextKeyLeftRight_12(float value)
	{
		___m_timeToNextKeyLeftRight_12 = value;
	}

	inline static int32_t get_offset_of_m_keyRepeatRateLeftRight_13() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_keyRepeatRateLeftRight_13)); }
	inline float get_m_keyRepeatRateLeftRight_13() const { return ___m_keyRepeatRateLeftRight_13; }
	inline float* get_address_of_m_keyRepeatRateLeftRight_13() { return &___m_keyRepeatRateLeftRight_13; }
	inline void set_m_keyRepeatRateLeftRight_13(float value)
	{
		___m_keyRepeatRateLeftRight_13 = value;
	}

	inline static int32_t get_offset_of_m_timeToNextKeyDown_14() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_timeToNextKeyDown_14)); }
	inline float get_m_timeToNextKeyDown_14() const { return ___m_timeToNextKeyDown_14; }
	inline float* get_address_of_m_timeToNextKeyDown_14() { return &___m_timeToNextKeyDown_14; }
	inline void set_m_timeToNextKeyDown_14(float value)
	{
		___m_timeToNextKeyDown_14 = value;
	}

	inline static int32_t get_offset_of_m_keyRepeatRateDown_15() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_keyRepeatRateDown_15)); }
	inline float get_m_keyRepeatRateDown_15() const { return ___m_keyRepeatRateDown_15; }
	inline float* get_address_of_m_keyRepeatRateDown_15() { return &___m_keyRepeatRateDown_15; }
	inline void set_m_keyRepeatRateDown_15(float value)
	{
		___m_keyRepeatRateDown_15 = value;
	}

	inline static int32_t get_offset_of_m_timeToNextKeyRotate_16() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_timeToNextKeyRotate_16)); }
	inline float get_m_timeToNextKeyRotate_16() const { return ___m_timeToNextKeyRotate_16; }
	inline float* get_address_of_m_timeToNextKeyRotate_16() { return &___m_timeToNextKeyRotate_16; }
	inline void set_m_timeToNextKeyRotate_16(float value)
	{
		___m_timeToNextKeyRotate_16 = value;
	}

	inline static int32_t get_offset_of_m_keyRepeatRateRotate_17() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_keyRepeatRateRotate_17)); }
	inline float get_m_keyRepeatRateRotate_17() const { return ___m_keyRepeatRateRotate_17; }
	inline float* get_address_of_m_keyRepeatRateRotate_17() { return &___m_keyRepeatRateRotate_17; }
	inline void set_m_keyRepeatRateRotate_17(float value)
	{
		___m_keyRepeatRateRotate_17 = value;
	}

	inline static int32_t get_offset_of_m_gameOverPanel_18() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_gameOverPanel_18)); }
	inline GameObject_t3674682005 * get_m_gameOverPanel_18() const { return ___m_gameOverPanel_18; }
	inline GameObject_t3674682005 ** get_address_of_m_gameOverPanel_18() { return &___m_gameOverPanel_18; }
	inline void set_m_gameOverPanel_18(GameObject_t3674682005 * value)
	{
		___m_gameOverPanel_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_gameOverPanel_18, value);
	}

	inline static int32_t get_offset_of_m_gameOver_19() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_gameOver_19)); }
	inline bool get_m_gameOver_19() const { return ___m_gameOver_19; }
	inline bool* get_address_of_m_gameOver_19() { return &___m_gameOver_19; }
	inline void set_m_gameOver_19(bool value)
	{
		___m_gameOver_19 = value;
	}

	inline static int32_t get_offset_of_m_rotIconToggle_20() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_rotIconToggle_20)); }
	inline IconToggle_t1520157005 * get_m_rotIconToggle_20() const { return ___m_rotIconToggle_20; }
	inline IconToggle_t1520157005 ** get_address_of_m_rotIconToggle_20() { return &___m_rotIconToggle_20; }
	inline void set_m_rotIconToggle_20(IconToggle_t1520157005 * value)
	{
		___m_rotIconToggle_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_rotIconToggle_20, value);
	}

	inline static int32_t get_offset_of_m_clockwise_21() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_clockwise_21)); }
	inline bool get_m_clockwise_21() const { return ___m_clockwise_21; }
	inline bool* get_address_of_m_clockwise_21() { return &___m_clockwise_21; }
	inline void set_m_clockwise_21(bool value)
	{
		___m_clockwise_21 = value;
	}

	inline static int32_t get_offset_of_m_isPaused_22() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_isPaused_22)); }
	inline bool get_m_isPaused_22() const { return ___m_isPaused_22; }
	inline bool* get_address_of_m_isPaused_22() { return &___m_isPaused_22; }
	inline void set_m_isPaused_22(bool value)
	{
		___m_isPaused_22 = value;
	}

	inline static int32_t get_offset_of_m_pausePanel_23() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_pausePanel_23)); }
	inline GameObject_t3674682005 * get_m_pausePanel_23() const { return ___m_pausePanel_23; }
	inline GameObject_t3674682005 ** get_address_of_m_pausePanel_23() { return &___m_pausePanel_23; }
	inline void set_m_pausePanel_23(GameObject_t3674682005 * value)
	{
		___m_pausePanel_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_pausePanel_23, value);
	}

	inline static int32_t get_offset_of_m_gameOverFx_24() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_gameOverFx_24)); }
	inline ParticlePlayer_t2730444071 * get_m_gameOverFx_24() const { return ___m_gameOverFx_24; }
	inline ParticlePlayer_t2730444071 ** get_address_of_m_gameOverFx_24() { return &___m_gameOverFx_24; }
	inline void set_m_gameOverFx_24(ParticlePlayer_t2730444071 * value)
	{
		___m_gameOverFx_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_gameOverFx_24, value);
	}

	inline static int32_t get_offset_of_m_dragDirection_25() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_dragDirection_25)); }
	inline int32_t get_m_dragDirection_25() const { return ___m_dragDirection_25; }
	inline int32_t* get_address_of_m_dragDirection_25() { return &___m_dragDirection_25; }
	inline void set_m_dragDirection_25(int32_t value)
	{
		___m_dragDirection_25 = value;
	}

	inline static int32_t get_offset_of_m_swipeDirection_26() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_swipeDirection_26)); }
	inline int32_t get_m_swipeDirection_26() const { return ___m_swipeDirection_26; }
	inline int32_t* get_address_of_m_swipeDirection_26() { return &___m_swipeDirection_26; }
	inline void set_m_swipeDirection_26(int32_t value)
	{
		___m_swipeDirection_26 = value;
	}

	inline static int32_t get_offset_of_m_timeToNextSwipe_27() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_timeToNextSwipe_27)); }
	inline float get_m_timeToNextSwipe_27() const { return ___m_timeToNextSwipe_27; }
	inline float* get_address_of_m_timeToNextSwipe_27() { return &___m_timeToNextSwipe_27; }
	inline void set_m_timeToNextSwipe_27(float value)
	{
		___m_timeToNextSwipe_27 = value;
	}

	inline static int32_t get_offset_of_m_timeToNextDrag_28() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_timeToNextDrag_28)); }
	inline float get_m_timeToNextDrag_28() const { return ___m_timeToNextDrag_28; }
	inline float* get_address_of_m_timeToNextDrag_28() { return &___m_timeToNextDrag_28; }
	inline void set_m_timeToNextDrag_28(float value)
	{
		___m_timeToNextDrag_28 = value;
	}

	inline static int32_t get_offset_of_m_minTimeToSwipe_29() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_minTimeToSwipe_29)); }
	inline float get_m_minTimeToSwipe_29() const { return ___m_minTimeToSwipe_29; }
	inline float* get_address_of_m_minTimeToSwipe_29() { return &___m_minTimeToSwipe_29; }
	inline void set_m_minTimeToSwipe_29(float value)
	{
		___m_minTimeToSwipe_29 = value;
	}

	inline static int32_t get_offset_of_m_minTimeToDrag_30() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_minTimeToDrag_30)); }
	inline float get_m_minTimeToDrag_30() const { return ___m_minTimeToDrag_30; }
	inline float* get_address_of_m_minTimeToDrag_30() { return &___m_minTimeToDrag_30; }
	inline void set_m_minTimeToDrag_30(float value)
	{
		___m_minTimeToDrag_30 = value;
	}

	inline static int32_t get_offset_of_m_didTap_31() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___m_didTap_31)); }
	inline bool get_m_didTap_31() const { return ___m_didTap_31; }
	inline bool* get_address_of_m_didTap_31() { return &___m_didTap_31; }
	inline void set_m_didTap_31(bool value)
	{
		___m_didTap_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
