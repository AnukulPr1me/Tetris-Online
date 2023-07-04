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
// UnityEngine.Transform[,]
struct TransformU5BU2CU5D_t3792884696;
// ParticlePlayer[]
struct ParticlePlayerU5BU5D_t259577438;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Board
struct  Board_t64356038  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform Board::m_emptySprite
	Transform_t1659122786 * ___m_emptySprite_2;
	// System.Int32 Board::m_height
	int32_t ___m_height_3;
	// System.Int32 Board::m_width
	int32_t ___m_width_4;
	// System.Int32 Board::m_header
	int32_t ___m_header_5;
	// UnityEngine.Transform[,] Board::m_grid
	TransformU5BU2CU5D_t3792884696* ___m_grid_6;
	// System.Int32 Board::m_completedRows
	int32_t ___m_completedRows_7;
	// ParticlePlayer[] Board::m_rowGlowFx
	ParticlePlayerU5BU5D_t259577438* ___m_rowGlowFx_8;

public:
	inline static int32_t get_offset_of_m_emptySprite_2() { return static_cast<int32_t>(offsetof(Board_t64356038, ___m_emptySprite_2)); }
	inline Transform_t1659122786 * get_m_emptySprite_2() const { return ___m_emptySprite_2; }
	inline Transform_t1659122786 ** get_address_of_m_emptySprite_2() { return &___m_emptySprite_2; }
	inline void set_m_emptySprite_2(Transform_t1659122786 * value)
	{
		___m_emptySprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_emptySprite_2, value);
	}

	inline static int32_t get_offset_of_m_height_3() { return static_cast<int32_t>(offsetof(Board_t64356038, ___m_height_3)); }
	inline int32_t get_m_height_3() const { return ___m_height_3; }
	inline int32_t* get_address_of_m_height_3() { return &___m_height_3; }
	inline void set_m_height_3(int32_t value)
	{
		___m_height_3 = value;
	}

	inline static int32_t get_offset_of_m_width_4() { return static_cast<int32_t>(offsetof(Board_t64356038, ___m_width_4)); }
	inline int32_t get_m_width_4() const { return ___m_width_4; }
	inline int32_t* get_address_of_m_width_4() { return &___m_width_4; }
	inline void set_m_width_4(int32_t value)
	{
		___m_width_4 = value;
	}

	inline static int32_t get_offset_of_m_header_5() { return static_cast<int32_t>(offsetof(Board_t64356038, ___m_header_5)); }
	inline int32_t get_m_header_5() const { return ___m_header_5; }
	inline int32_t* get_address_of_m_header_5() { return &___m_header_5; }
	inline void set_m_header_5(int32_t value)
	{
		___m_header_5 = value;
	}

	inline static int32_t get_offset_of_m_grid_6() { return static_cast<int32_t>(offsetof(Board_t64356038, ___m_grid_6)); }
	inline TransformU5BU2CU5D_t3792884696* get_m_grid_6() const { return ___m_grid_6; }
	inline TransformU5BU2CU5D_t3792884696** get_address_of_m_grid_6() { return &___m_grid_6; }
	inline void set_m_grid_6(TransformU5BU2CU5D_t3792884696* value)
	{
		___m_grid_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_grid_6, value);
	}

	inline static int32_t get_offset_of_m_completedRows_7() { return static_cast<int32_t>(offsetof(Board_t64356038, ___m_completedRows_7)); }
	inline int32_t get_m_completedRows_7() const { return ___m_completedRows_7; }
	inline int32_t* get_address_of_m_completedRows_7() { return &___m_completedRows_7; }
	inline void set_m_completedRows_7(int32_t value)
	{
		___m_completedRows_7 = value;
	}

	inline static int32_t get_offset_of_m_rowGlowFx_8() { return static_cast<int32_t>(offsetof(Board_t64356038, ___m_rowGlowFx_8)); }
	inline ParticlePlayerU5BU5D_t259577438* get_m_rowGlowFx_8() const { return ___m_rowGlowFx_8; }
	inline ParticlePlayerU5BU5D_t259577438** get_address_of_m_rowGlowFx_8() { return &___m_rowGlowFx_8; }
	inline void set_m_rowGlowFx_8(ParticlePlayerU5BU5D_t259577438* value)
	{
		___m_rowGlowFx_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_rowGlowFx_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
