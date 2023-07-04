#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shape
struct  Shape_t79847297  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean Shape::m_canRotate
	bool ___m_canRotate_2;
	// UnityEngine.Vector3 Shape::m_queueOffset
	Vector3_t4282066566  ___m_queueOffset_3;
	// UnityEngine.GameObject[] Shape::m_glowSquareFx
	GameObjectU5BU5D_t2662109048* ___m_glowSquareFx_4;
	// System.String Shape::m_glowSquareTag
	String_t* ___m_glowSquareTag_5;

public:
	inline static int32_t get_offset_of_m_canRotate_2() { return static_cast<int32_t>(offsetof(Shape_t79847297, ___m_canRotate_2)); }
	inline bool get_m_canRotate_2() const { return ___m_canRotate_2; }
	inline bool* get_address_of_m_canRotate_2() { return &___m_canRotate_2; }
	inline void set_m_canRotate_2(bool value)
	{
		___m_canRotate_2 = value;
	}

	inline static int32_t get_offset_of_m_queueOffset_3() { return static_cast<int32_t>(offsetof(Shape_t79847297, ___m_queueOffset_3)); }
	inline Vector3_t4282066566  get_m_queueOffset_3() const { return ___m_queueOffset_3; }
	inline Vector3_t4282066566 * get_address_of_m_queueOffset_3() { return &___m_queueOffset_3; }
	inline void set_m_queueOffset_3(Vector3_t4282066566  value)
	{
		___m_queueOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_glowSquareFx_4() { return static_cast<int32_t>(offsetof(Shape_t79847297, ___m_glowSquareFx_4)); }
	inline GameObjectU5BU5D_t2662109048* get_m_glowSquareFx_4() const { return ___m_glowSquareFx_4; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_m_glowSquareFx_4() { return &___m_glowSquareFx_4; }
	inline void set_m_glowSquareFx_4(GameObjectU5BU5D_t2662109048* value)
	{
		___m_glowSquareFx_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_glowSquareFx_4, value);
	}

	inline static int32_t get_offset_of_m_glowSquareTag_5() { return static_cast<int32_t>(offsetof(Shape_t79847297, ___m_glowSquareTag_5)); }
	inline String_t* get_m_glowSquareTag_5() const { return ___m_glowSquareTag_5; }
	inline String_t** get_address_of_m_glowSquareTag_5() { return &___m_glowSquareTag_5; }
	inline void set_m_glowSquareTag_5(String_t* value)
	{
		___m_glowSquareTag_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_glowSquareTag_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
