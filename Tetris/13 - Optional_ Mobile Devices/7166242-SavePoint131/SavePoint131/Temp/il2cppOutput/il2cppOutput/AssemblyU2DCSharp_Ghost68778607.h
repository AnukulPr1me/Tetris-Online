#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Shape
struct Shape_t79847297;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ghost
struct  Ghost_t68778607  : public MonoBehaviour_t667441552
{
public:
	// Shape Ghost::m_ghostShape
	Shape_t79847297 * ___m_ghostShape_2;
	// System.Boolean Ghost::m_hitBottom
	bool ___m_hitBottom_3;
	// UnityEngine.Color Ghost::m_color
	Color_t4194546905  ___m_color_4;

public:
	inline static int32_t get_offset_of_m_ghostShape_2() { return static_cast<int32_t>(offsetof(Ghost_t68778607, ___m_ghostShape_2)); }
	inline Shape_t79847297 * get_m_ghostShape_2() const { return ___m_ghostShape_2; }
	inline Shape_t79847297 ** get_address_of_m_ghostShape_2() { return &___m_ghostShape_2; }
	inline void set_m_ghostShape_2(Shape_t79847297 * value)
	{
		___m_ghostShape_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_ghostShape_2, value);
	}

	inline static int32_t get_offset_of_m_hitBottom_3() { return static_cast<int32_t>(offsetof(Ghost_t68778607, ___m_hitBottom_3)); }
	inline bool get_m_hitBottom_3() const { return ___m_hitBottom_3; }
	inline bool* get_address_of_m_hitBottom_3() { return &___m_hitBottom_3; }
	inline void set_m_hitBottom_3(bool value)
	{
		___m_hitBottom_3 = value;
	}

	inline static int32_t get_offset_of_m_color_4() { return static_cast<int32_t>(offsetof(Ghost_t68778607, ___m_color_4)); }
	inline Color_t4194546905  get_m_color_4() const { return ___m_color_4; }
	inline Color_t4194546905 * get_address_of_m_color_4() { return &___m_color_4; }
	inline void set_m_color_4(Color_t4194546905  value)
	{
		___m_color_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
