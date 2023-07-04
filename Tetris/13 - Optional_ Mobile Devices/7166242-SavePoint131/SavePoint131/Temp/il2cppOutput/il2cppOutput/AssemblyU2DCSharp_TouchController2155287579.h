#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// TouchController/TouchEventHandler
struct TouchEventHandler_t110604059;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchController
struct  TouchController_t2155287579  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector2 TouchController::m_touchMovement
	Vector2_t4282066565  ___m_touchMovement_2;
	// System.Int32 TouchController::m_minDragDistance
	int32_t ___m_minDragDistance_3;
	// System.Int32 TouchController::m_minSwipeDistance
	int32_t ___m_minSwipeDistance_4;
	// System.Single TouchController::m_tapTimeMax
	float ___m_tapTimeMax_5;
	// System.Single TouchController::m_tapTimeWindow
	float ___m_tapTimeWindow_6;
	// UnityEngine.UI.Text TouchController::m_diagnosticText1
	Text_t9039225 * ___m_diagnosticText1_7;
	// UnityEngine.UI.Text TouchController::m_diagnosticText2
	Text_t9039225 * ___m_diagnosticText2_8;
	// System.Boolean TouchController::m_useDiagnostic
	bool ___m_useDiagnostic_9;

public:
	inline static int32_t get_offset_of_m_touchMovement_2() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___m_touchMovement_2)); }
	inline Vector2_t4282066565  get_m_touchMovement_2() const { return ___m_touchMovement_2; }
	inline Vector2_t4282066565 * get_address_of_m_touchMovement_2() { return &___m_touchMovement_2; }
	inline void set_m_touchMovement_2(Vector2_t4282066565  value)
	{
		___m_touchMovement_2 = value;
	}

	inline static int32_t get_offset_of_m_minDragDistance_3() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___m_minDragDistance_3)); }
	inline int32_t get_m_minDragDistance_3() const { return ___m_minDragDistance_3; }
	inline int32_t* get_address_of_m_minDragDistance_3() { return &___m_minDragDistance_3; }
	inline void set_m_minDragDistance_3(int32_t value)
	{
		___m_minDragDistance_3 = value;
	}

	inline static int32_t get_offset_of_m_minSwipeDistance_4() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___m_minSwipeDistance_4)); }
	inline int32_t get_m_minSwipeDistance_4() const { return ___m_minSwipeDistance_4; }
	inline int32_t* get_address_of_m_minSwipeDistance_4() { return &___m_minSwipeDistance_4; }
	inline void set_m_minSwipeDistance_4(int32_t value)
	{
		___m_minSwipeDistance_4 = value;
	}

	inline static int32_t get_offset_of_m_tapTimeMax_5() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___m_tapTimeMax_5)); }
	inline float get_m_tapTimeMax_5() const { return ___m_tapTimeMax_5; }
	inline float* get_address_of_m_tapTimeMax_5() { return &___m_tapTimeMax_5; }
	inline void set_m_tapTimeMax_5(float value)
	{
		___m_tapTimeMax_5 = value;
	}

	inline static int32_t get_offset_of_m_tapTimeWindow_6() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___m_tapTimeWindow_6)); }
	inline float get_m_tapTimeWindow_6() const { return ___m_tapTimeWindow_6; }
	inline float* get_address_of_m_tapTimeWindow_6() { return &___m_tapTimeWindow_6; }
	inline void set_m_tapTimeWindow_6(float value)
	{
		___m_tapTimeWindow_6 = value;
	}

	inline static int32_t get_offset_of_m_diagnosticText1_7() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___m_diagnosticText1_7)); }
	inline Text_t9039225 * get_m_diagnosticText1_7() const { return ___m_diagnosticText1_7; }
	inline Text_t9039225 ** get_address_of_m_diagnosticText1_7() { return &___m_diagnosticText1_7; }
	inline void set_m_diagnosticText1_7(Text_t9039225 * value)
	{
		___m_diagnosticText1_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_diagnosticText1_7, value);
	}

	inline static int32_t get_offset_of_m_diagnosticText2_8() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___m_diagnosticText2_8)); }
	inline Text_t9039225 * get_m_diagnosticText2_8() const { return ___m_diagnosticText2_8; }
	inline Text_t9039225 ** get_address_of_m_diagnosticText2_8() { return &___m_diagnosticText2_8; }
	inline void set_m_diagnosticText2_8(Text_t9039225 * value)
	{
		___m_diagnosticText2_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_diagnosticText2_8, value);
	}

	inline static int32_t get_offset_of_m_useDiagnostic_9() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___m_useDiagnostic_9)); }
	inline bool get_m_useDiagnostic_9() const { return ___m_useDiagnostic_9; }
	inline bool* get_address_of_m_useDiagnostic_9() { return &___m_useDiagnostic_9; }
	inline void set_m_useDiagnostic_9(bool value)
	{
		___m_useDiagnostic_9 = value;
	}
};

struct TouchController_t2155287579_StaticFields
{
public:
	// TouchController/TouchEventHandler TouchController::DragEvent
	TouchEventHandler_t110604059 * ___DragEvent_10;
	// TouchController/TouchEventHandler TouchController::SwipeEvent
	TouchEventHandler_t110604059 * ___SwipeEvent_11;
	// TouchController/TouchEventHandler TouchController::TapEvent
	TouchEventHandler_t110604059 * ___TapEvent_12;

public:
	inline static int32_t get_offset_of_DragEvent_10() { return static_cast<int32_t>(offsetof(TouchController_t2155287579_StaticFields, ___DragEvent_10)); }
	inline TouchEventHandler_t110604059 * get_DragEvent_10() const { return ___DragEvent_10; }
	inline TouchEventHandler_t110604059 ** get_address_of_DragEvent_10() { return &___DragEvent_10; }
	inline void set_DragEvent_10(TouchEventHandler_t110604059 * value)
	{
		___DragEvent_10 = value;
		Il2CppCodeGenWriteBarrier(&___DragEvent_10, value);
	}

	inline static int32_t get_offset_of_SwipeEvent_11() { return static_cast<int32_t>(offsetof(TouchController_t2155287579_StaticFields, ___SwipeEvent_11)); }
	inline TouchEventHandler_t110604059 * get_SwipeEvent_11() const { return ___SwipeEvent_11; }
	inline TouchEventHandler_t110604059 ** get_address_of_SwipeEvent_11() { return &___SwipeEvent_11; }
	inline void set_SwipeEvent_11(TouchEventHandler_t110604059 * value)
	{
		___SwipeEvent_11 = value;
		Il2CppCodeGenWriteBarrier(&___SwipeEvent_11, value);
	}

	inline static int32_t get_offset_of_TapEvent_12() { return static_cast<int32_t>(offsetof(TouchController_t2155287579_StaticFields, ___TapEvent_12)); }
	inline TouchEventHandler_t110604059 * get_TapEvent_12() const { return ___TapEvent_12; }
	inline TouchEventHandler_t110604059 ** get_address_of_TapEvent_12() { return &___TapEvent_12; }
	inline void set_TapEvent_12(TouchEventHandler_t110604059 * value)
	{
		___TapEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___TapEvent_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
