#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// Shape
struct Shape_t79847297;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Holder
struct  Holder_t2167126476  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform Holder::m_holdXform
	Transform_t1659122786 * ___m_holdXform_2;
	// Shape Holder::m_heldShape
	Shape_t79847297 * ___m_heldShape_3;
	// System.Boolean Holder::m_canRelease
	bool ___m_canRelease_4;
	// System.Single Holder::m_scale
	float ___m_scale_5;

public:
	inline static int32_t get_offset_of_m_holdXform_2() { return static_cast<int32_t>(offsetof(Holder_t2167126476, ___m_holdXform_2)); }
	inline Transform_t1659122786 * get_m_holdXform_2() const { return ___m_holdXform_2; }
	inline Transform_t1659122786 ** get_address_of_m_holdXform_2() { return &___m_holdXform_2; }
	inline void set_m_holdXform_2(Transform_t1659122786 * value)
	{
		___m_holdXform_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_holdXform_2, value);
	}

	inline static int32_t get_offset_of_m_heldShape_3() { return static_cast<int32_t>(offsetof(Holder_t2167126476, ___m_heldShape_3)); }
	inline Shape_t79847297 * get_m_heldShape_3() const { return ___m_heldShape_3; }
	inline Shape_t79847297 ** get_address_of_m_heldShape_3() { return &___m_heldShape_3; }
	inline void set_m_heldShape_3(Shape_t79847297 * value)
	{
		___m_heldShape_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_heldShape_3, value);
	}

	inline static int32_t get_offset_of_m_canRelease_4() { return static_cast<int32_t>(offsetof(Holder_t2167126476, ___m_canRelease_4)); }
	inline bool get_m_canRelease_4() const { return ___m_canRelease_4; }
	inline bool* get_address_of_m_canRelease_4() { return &___m_canRelease_4; }
	inline void set_m_canRelease_4(bool value)
	{
		___m_canRelease_4 = value;
	}

	inline static int32_t get_offset_of_m_scale_5() { return static_cast<int32_t>(offsetof(Holder_t2167126476, ___m_scale_5)); }
	inline float get_m_scale_5() const { return ___m_scale_5; }
	inline float* get_address_of_m_scale_5() { return &___m_scale_5; }
	inline void set_m_scale_5(float value)
	{
		___m_scale_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
