#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t3186046376;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFader
struct  ScreenFader_t1601131594  : public MonoBehaviour_t667441552
{
public:
	// System.Single ScreenFader::m_startAlpha
	float ___m_startAlpha_2;
	// System.Single ScreenFader::m_targetAlpha
	float ___m_targetAlpha_3;
	// System.Single ScreenFader::m_delay
	float ___m_delay_4;
	// System.Single ScreenFader::m_timeToFade
	float ___m_timeToFade_5;
	// System.Single ScreenFader::m_inc
	float ___m_inc_6;
	// System.Single ScreenFader::m_currentAlpha
	float ___m_currentAlpha_7;
	// UnityEngine.UI.MaskableGraphic ScreenFader::m_graphic
	MaskableGraphic_t3186046376 * ___m_graphic_8;
	// UnityEngine.Color ScreenFader::m_originalColor
	Color_t4194546905  ___m_originalColor_9;

public:
	inline static int32_t get_offset_of_m_startAlpha_2() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___m_startAlpha_2)); }
	inline float get_m_startAlpha_2() const { return ___m_startAlpha_2; }
	inline float* get_address_of_m_startAlpha_2() { return &___m_startAlpha_2; }
	inline void set_m_startAlpha_2(float value)
	{
		___m_startAlpha_2 = value;
	}

	inline static int32_t get_offset_of_m_targetAlpha_3() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___m_targetAlpha_3)); }
	inline float get_m_targetAlpha_3() const { return ___m_targetAlpha_3; }
	inline float* get_address_of_m_targetAlpha_3() { return &___m_targetAlpha_3; }
	inline void set_m_targetAlpha_3(float value)
	{
		___m_targetAlpha_3 = value;
	}

	inline static int32_t get_offset_of_m_delay_4() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___m_delay_4)); }
	inline float get_m_delay_4() const { return ___m_delay_4; }
	inline float* get_address_of_m_delay_4() { return &___m_delay_4; }
	inline void set_m_delay_4(float value)
	{
		___m_delay_4 = value;
	}

	inline static int32_t get_offset_of_m_timeToFade_5() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___m_timeToFade_5)); }
	inline float get_m_timeToFade_5() const { return ___m_timeToFade_5; }
	inline float* get_address_of_m_timeToFade_5() { return &___m_timeToFade_5; }
	inline void set_m_timeToFade_5(float value)
	{
		___m_timeToFade_5 = value;
	}

	inline static int32_t get_offset_of_m_inc_6() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___m_inc_6)); }
	inline float get_m_inc_6() const { return ___m_inc_6; }
	inline float* get_address_of_m_inc_6() { return &___m_inc_6; }
	inline void set_m_inc_6(float value)
	{
		___m_inc_6 = value;
	}

	inline static int32_t get_offset_of_m_currentAlpha_7() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___m_currentAlpha_7)); }
	inline float get_m_currentAlpha_7() const { return ___m_currentAlpha_7; }
	inline float* get_address_of_m_currentAlpha_7() { return &___m_currentAlpha_7; }
	inline void set_m_currentAlpha_7(float value)
	{
		___m_currentAlpha_7 = value;
	}

	inline static int32_t get_offset_of_m_graphic_8() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___m_graphic_8)); }
	inline MaskableGraphic_t3186046376 * get_m_graphic_8() const { return ___m_graphic_8; }
	inline MaskableGraphic_t3186046376 ** get_address_of_m_graphic_8() { return &___m_graphic_8; }
	inline void set_m_graphic_8(MaskableGraphic_t3186046376 * value)
	{
		___m_graphic_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_graphic_8, value);
	}

	inline static int32_t get_offset_of_m_originalColor_9() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___m_originalColor_9)); }
	inline Color_t4194546905  get_m_originalColor_9() const { return ___m_originalColor_9; }
	inline Color_t4194546905 * get_address_of_m_originalColor_9() { return &___m_originalColor_9; }
	inline void set_m_originalColor_9(Color_t4194546905  value)
	{
		___m_originalColor_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
