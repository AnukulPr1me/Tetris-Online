#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IconToggle
struct  IconToggle_t1520157005  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Sprite IconToggle::m_iconTrue
	Sprite_t3199167241 * ___m_iconTrue_2;
	// UnityEngine.Sprite IconToggle::m_iconFalse
	Sprite_t3199167241 * ___m_iconFalse_3;
	// System.Boolean IconToggle::m_defaultIconState
	bool ___m_defaultIconState_4;
	// UnityEngine.UI.Image IconToggle::m_image
	Image_t538875265 * ___m_image_5;

public:
	inline static int32_t get_offset_of_m_iconTrue_2() { return static_cast<int32_t>(offsetof(IconToggle_t1520157005, ___m_iconTrue_2)); }
	inline Sprite_t3199167241 * get_m_iconTrue_2() const { return ___m_iconTrue_2; }
	inline Sprite_t3199167241 ** get_address_of_m_iconTrue_2() { return &___m_iconTrue_2; }
	inline void set_m_iconTrue_2(Sprite_t3199167241 * value)
	{
		___m_iconTrue_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_iconTrue_2, value);
	}

	inline static int32_t get_offset_of_m_iconFalse_3() { return static_cast<int32_t>(offsetof(IconToggle_t1520157005, ___m_iconFalse_3)); }
	inline Sprite_t3199167241 * get_m_iconFalse_3() const { return ___m_iconFalse_3; }
	inline Sprite_t3199167241 ** get_address_of_m_iconFalse_3() { return &___m_iconFalse_3; }
	inline void set_m_iconFalse_3(Sprite_t3199167241 * value)
	{
		___m_iconFalse_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_iconFalse_3, value);
	}

	inline static int32_t get_offset_of_m_defaultIconState_4() { return static_cast<int32_t>(offsetof(IconToggle_t1520157005, ___m_defaultIconState_4)); }
	inline bool get_m_defaultIconState_4() const { return ___m_defaultIconState_4; }
	inline bool* get_address_of_m_defaultIconState_4() { return &___m_defaultIconState_4; }
	inline void set_m_defaultIconState_4(bool value)
	{
		___m_defaultIconState_4 = value;
	}

	inline static int32_t get_offset_of_m_image_5() { return static_cast<int32_t>(offsetof(IconToggle_t1520157005, ___m_image_5)); }
	inline Image_t538875265 * get_m_image_5() const { return ___m_image_5; }
	inline Image_t538875265 ** get_address_of_m_image_5() { return &___m_image_5; }
	inline void set_m_image_5(Image_t538875265 * value)
	{
		___m_image_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_image_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
