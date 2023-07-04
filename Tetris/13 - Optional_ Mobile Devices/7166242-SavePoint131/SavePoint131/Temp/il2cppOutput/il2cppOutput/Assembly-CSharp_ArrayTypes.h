#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// ParticlePlayer
struct ParticlePlayer_t2730444071;
// Shape
struct Shape_t79847297;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_ParticlePlayer2730444071.h"
#include "AssemblyU2DCSharp_Shape79847297.h"

#pragma once
// ParticlePlayer[]
struct ParticlePlayerU5BU5D_t259577438  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ParticlePlayer_t2730444071 * m_Items[1];

public:
	inline ParticlePlayer_t2730444071 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ParticlePlayer_t2730444071 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ParticlePlayer_t2730444071 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Shape[]
struct ShapeU5BU5D_t1924224348  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Shape_t79847297 * m_Items[1];

public:
	inline Shape_t79847297 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Shape_t79847297 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Shape_t79847297 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
