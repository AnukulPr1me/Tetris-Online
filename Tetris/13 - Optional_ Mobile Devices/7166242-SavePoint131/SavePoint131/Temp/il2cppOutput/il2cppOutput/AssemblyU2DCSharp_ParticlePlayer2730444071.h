#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t1536434148;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticlePlayer
struct  ParticlePlayer_t2730444071  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.ParticleSystem[] ParticlePlayer::allParticles
	ParticleSystemU5BU5D_t1536434148* ___allParticles_2;

public:
	inline static int32_t get_offset_of_allParticles_2() { return static_cast<int32_t>(offsetof(ParticlePlayer_t2730444071, ___allParticles_2)); }
	inline ParticleSystemU5BU5D_t1536434148* get_allParticles_2() const { return ___allParticles_2; }
	inline ParticleSystemU5BU5D_t1536434148** get_address_of_allParticles_2() { return &___allParticles_2; }
	inline void set_allParticles_2(ParticleSystemU5BU5D_t1536434148* value)
	{
		___allParticles_2 = value;
		Il2CppCodeGenWriteBarrier(&___allParticles_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
