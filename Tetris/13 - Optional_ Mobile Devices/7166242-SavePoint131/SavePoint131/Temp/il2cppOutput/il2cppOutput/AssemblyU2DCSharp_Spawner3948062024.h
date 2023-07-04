#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Shape[]
struct ShapeU5BU5D_t1924224348;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;
// ParticlePlayer
struct ParticlePlayer_t2730444071;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spawner
struct  Spawner_t3948062024  : public MonoBehaviour_t667441552
{
public:
	// Shape[] Spawner::m_allShapes
	ShapeU5BU5D_t1924224348* ___m_allShapes_2;
	// UnityEngine.Transform[] Spawner::m_queuedXforms
	TransformU5BU5D_t3792884695* ___m_queuedXforms_3;
	// Shape[] Spawner::m_queuedShapes
	ShapeU5BU5D_t1924224348* ___m_queuedShapes_4;
	// System.Single Spawner::m_queueScale
	float ___m_queueScale_5;
	// ParticlePlayer Spawner::m_spawnFx
	ParticlePlayer_t2730444071 * ___m_spawnFx_6;

public:
	inline static int32_t get_offset_of_m_allShapes_2() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___m_allShapes_2)); }
	inline ShapeU5BU5D_t1924224348* get_m_allShapes_2() const { return ___m_allShapes_2; }
	inline ShapeU5BU5D_t1924224348** get_address_of_m_allShapes_2() { return &___m_allShapes_2; }
	inline void set_m_allShapes_2(ShapeU5BU5D_t1924224348* value)
	{
		___m_allShapes_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_allShapes_2, value);
	}

	inline static int32_t get_offset_of_m_queuedXforms_3() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___m_queuedXforms_3)); }
	inline TransformU5BU5D_t3792884695* get_m_queuedXforms_3() const { return ___m_queuedXforms_3; }
	inline TransformU5BU5D_t3792884695** get_address_of_m_queuedXforms_3() { return &___m_queuedXforms_3; }
	inline void set_m_queuedXforms_3(TransformU5BU5D_t3792884695* value)
	{
		___m_queuedXforms_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_queuedXforms_3, value);
	}

	inline static int32_t get_offset_of_m_queuedShapes_4() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___m_queuedShapes_4)); }
	inline ShapeU5BU5D_t1924224348* get_m_queuedShapes_4() const { return ___m_queuedShapes_4; }
	inline ShapeU5BU5D_t1924224348** get_address_of_m_queuedShapes_4() { return &___m_queuedShapes_4; }
	inline void set_m_queuedShapes_4(ShapeU5BU5D_t1924224348* value)
	{
		___m_queuedShapes_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_queuedShapes_4, value);
	}

	inline static int32_t get_offset_of_m_queueScale_5() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___m_queueScale_5)); }
	inline float get_m_queueScale_5() const { return ___m_queueScale_5; }
	inline float* get_address_of_m_queueScale_5() { return &___m_queueScale_5; }
	inline void set_m_queueScale_5(float value)
	{
		___m_queueScale_5 = value;
	}

	inline static int32_t get_offset_of_m_spawnFx_6() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___m_spawnFx_6)); }
	inline ParticlePlayer_t2730444071 * get_m_spawnFx_6() const { return ___m_spawnFx_6; }
	inline ParticlePlayer_t2730444071 ** get_address_of_m_spawnFx_6() { return &___m_spawnFx_6; }
	inline void set_m_spawnFx_6(ParticlePlayer_t2730444071 * value)
	{
		___m_spawnFx_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_spawnFx_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
