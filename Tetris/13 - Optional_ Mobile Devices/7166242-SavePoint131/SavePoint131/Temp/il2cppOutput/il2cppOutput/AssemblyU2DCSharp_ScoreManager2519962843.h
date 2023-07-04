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
// ParticlePlayer
struct ParticlePlayer_t2730444071;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreManager
struct  ScoreManager_t2519962843  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 ScoreManager::m_score
	int32_t ___m_score_4;
	// System.Int32 ScoreManager::m_lines
	int32_t ___m_lines_5;
	// System.Int32 ScoreManager::m_level
	int32_t ___m_level_6;
	// System.Int32 ScoreManager::m_linesPerLevel
	int32_t ___m_linesPerLevel_7;
	// UnityEngine.UI.Text ScoreManager::m_linesText
	Text_t9039225 * ___m_linesText_8;
	// UnityEngine.UI.Text ScoreManager::m_levelText
	Text_t9039225 * ___m_levelText_9;
	// UnityEngine.UI.Text ScoreManager::m_scoreText
	Text_t9039225 * ___m_scoreText_10;
	// System.Boolean ScoreManager::didLevelUp
	bool ___didLevelUp_11;
	// ParticlePlayer ScoreManager::m_levelUpFx
	ParticlePlayer_t2730444071 * ___m_levelUpFx_12;

public:
	inline static int32_t get_offset_of_m_score_4() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___m_score_4)); }
	inline int32_t get_m_score_4() const { return ___m_score_4; }
	inline int32_t* get_address_of_m_score_4() { return &___m_score_4; }
	inline void set_m_score_4(int32_t value)
	{
		___m_score_4 = value;
	}

	inline static int32_t get_offset_of_m_lines_5() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___m_lines_5)); }
	inline int32_t get_m_lines_5() const { return ___m_lines_5; }
	inline int32_t* get_address_of_m_lines_5() { return &___m_lines_5; }
	inline void set_m_lines_5(int32_t value)
	{
		___m_lines_5 = value;
	}

	inline static int32_t get_offset_of_m_level_6() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___m_level_6)); }
	inline int32_t get_m_level_6() const { return ___m_level_6; }
	inline int32_t* get_address_of_m_level_6() { return &___m_level_6; }
	inline void set_m_level_6(int32_t value)
	{
		___m_level_6 = value;
	}

	inline static int32_t get_offset_of_m_linesPerLevel_7() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___m_linesPerLevel_7)); }
	inline int32_t get_m_linesPerLevel_7() const { return ___m_linesPerLevel_7; }
	inline int32_t* get_address_of_m_linesPerLevel_7() { return &___m_linesPerLevel_7; }
	inline void set_m_linesPerLevel_7(int32_t value)
	{
		___m_linesPerLevel_7 = value;
	}

	inline static int32_t get_offset_of_m_linesText_8() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___m_linesText_8)); }
	inline Text_t9039225 * get_m_linesText_8() const { return ___m_linesText_8; }
	inline Text_t9039225 ** get_address_of_m_linesText_8() { return &___m_linesText_8; }
	inline void set_m_linesText_8(Text_t9039225 * value)
	{
		___m_linesText_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_linesText_8, value);
	}

	inline static int32_t get_offset_of_m_levelText_9() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___m_levelText_9)); }
	inline Text_t9039225 * get_m_levelText_9() const { return ___m_levelText_9; }
	inline Text_t9039225 ** get_address_of_m_levelText_9() { return &___m_levelText_9; }
	inline void set_m_levelText_9(Text_t9039225 * value)
	{
		___m_levelText_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_levelText_9, value);
	}

	inline static int32_t get_offset_of_m_scoreText_10() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___m_scoreText_10)); }
	inline Text_t9039225 * get_m_scoreText_10() const { return ___m_scoreText_10; }
	inline Text_t9039225 ** get_address_of_m_scoreText_10() { return &___m_scoreText_10; }
	inline void set_m_scoreText_10(Text_t9039225 * value)
	{
		___m_scoreText_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_scoreText_10, value);
	}

	inline static int32_t get_offset_of_didLevelUp_11() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___didLevelUp_11)); }
	inline bool get_didLevelUp_11() const { return ___didLevelUp_11; }
	inline bool* get_address_of_didLevelUp_11() { return &___didLevelUp_11; }
	inline void set_didLevelUp_11(bool value)
	{
		___didLevelUp_11 = value;
	}

	inline static int32_t get_offset_of_m_levelUpFx_12() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___m_levelUpFx_12)); }
	inline ParticlePlayer_t2730444071 * get_m_levelUpFx_12() const { return ___m_levelUpFx_12; }
	inline ParticlePlayer_t2730444071 ** get_address_of_m_levelUpFx_12() { return &___m_levelUpFx_12; }
	inline void set_m_levelUpFx_12(ParticlePlayer_t2730444071 * value)
	{
		___m_levelUpFx_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_levelUpFx_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
