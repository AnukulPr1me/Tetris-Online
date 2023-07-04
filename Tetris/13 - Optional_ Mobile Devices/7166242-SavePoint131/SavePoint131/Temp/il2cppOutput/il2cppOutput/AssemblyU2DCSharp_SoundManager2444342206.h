#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t3001083477;
// IconToggle
struct IconToggle_t1520157005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t2444342206  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean SoundManager::m_musicEnabled
	bool ___m_musicEnabled_2;
	// System.Boolean SoundManager::m_fxEnabled
	bool ___m_fxEnabled_3;
	// System.Single SoundManager::m_musicVolume
	float ___m_musicVolume_4;
	// System.Single SoundManager::m_fxVolume
	float ___m_fxVolume_5;
	// UnityEngine.AudioClip SoundManager::m_clearRowSound
	AudioClip_t794140988 * ___m_clearRowSound_6;
	// UnityEngine.AudioClip SoundManager::m_moveSound
	AudioClip_t794140988 * ___m_moveSound_7;
	// UnityEngine.AudioClip SoundManager::m_dropSound
	AudioClip_t794140988 * ___m_dropSound_8;
	// UnityEngine.AudioClip SoundManager::m_gameOverSound
	AudioClip_t794140988 * ___m_gameOverSound_9;
	// UnityEngine.AudioClip SoundManager::m_errorSound
	AudioClip_t794140988 * ___m_errorSound_10;
	// UnityEngine.AudioClip SoundManager::m_holdSound
	AudioClip_t794140988 * ___m_holdSound_11;
	// UnityEngine.AudioSource SoundManager::m_musicSource
	AudioSource_t1740077639 * ___m_musicSource_12;
	// UnityEngine.AudioClip[] SoundManager::m_musicClips
	AudioClipU5BU5D_t3001083477* ___m_musicClips_13;
	// UnityEngine.AudioClip SoundManager::m_randomMusicClip
	AudioClip_t794140988 * ___m_randomMusicClip_14;
	// UnityEngine.AudioClip[] SoundManager::m_vocalClips
	AudioClipU5BU5D_t3001083477* ___m_vocalClips_15;
	// UnityEngine.AudioClip SoundManager::m_gameOverVocalClip
	AudioClip_t794140988 * ___m_gameOverVocalClip_16;
	// UnityEngine.AudioClip SoundManager::m_levelUpVocalClip
	AudioClip_t794140988 * ___m_levelUpVocalClip_17;
	// IconToggle SoundManager::m_musicIconToggle
	IconToggle_t1520157005 * ___m_musicIconToggle_18;
	// IconToggle SoundManager::m_fxIconToggle
	IconToggle_t1520157005 * ___m_fxIconToggle_19;

public:
	inline static int32_t get_offset_of_m_musicEnabled_2() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_musicEnabled_2)); }
	inline bool get_m_musicEnabled_2() const { return ___m_musicEnabled_2; }
	inline bool* get_address_of_m_musicEnabled_2() { return &___m_musicEnabled_2; }
	inline void set_m_musicEnabled_2(bool value)
	{
		___m_musicEnabled_2 = value;
	}

	inline static int32_t get_offset_of_m_fxEnabled_3() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_fxEnabled_3)); }
	inline bool get_m_fxEnabled_3() const { return ___m_fxEnabled_3; }
	inline bool* get_address_of_m_fxEnabled_3() { return &___m_fxEnabled_3; }
	inline void set_m_fxEnabled_3(bool value)
	{
		___m_fxEnabled_3 = value;
	}

	inline static int32_t get_offset_of_m_musicVolume_4() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_musicVolume_4)); }
	inline float get_m_musicVolume_4() const { return ___m_musicVolume_4; }
	inline float* get_address_of_m_musicVolume_4() { return &___m_musicVolume_4; }
	inline void set_m_musicVolume_4(float value)
	{
		___m_musicVolume_4 = value;
	}

	inline static int32_t get_offset_of_m_fxVolume_5() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_fxVolume_5)); }
	inline float get_m_fxVolume_5() const { return ___m_fxVolume_5; }
	inline float* get_address_of_m_fxVolume_5() { return &___m_fxVolume_5; }
	inline void set_m_fxVolume_5(float value)
	{
		___m_fxVolume_5 = value;
	}

	inline static int32_t get_offset_of_m_clearRowSound_6() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_clearRowSound_6)); }
	inline AudioClip_t794140988 * get_m_clearRowSound_6() const { return ___m_clearRowSound_6; }
	inline AudioClip_t794140988 ** get_address_of_m_clearRowSound_6() { return &___m_clearRowSound_6; }
	inline void set_m_clearRowSound_6(AudioClip_t794140988 * value)
	{
		___m_clearRowSound_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_clearRowSound_6, value);
	}

	inline static int32_t get_offset_of_m_moveSound_7() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_moveSound_7)); }
	inline AudioClip_t794140988 * get_m_moveSound_7() const { return ___m_moveSound_7; }
	inline AudioClip_t794140988 ** get_address_of_m_moveSound_7() { return &___m_moveSound_7; }
	inline void set_m_moveSound_7(AudioClip_t794140988 * value)
	{
		___m_moveSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_moveSound_7, value);
	}

	inline static int32_t get_offset_of_m_dropSound_8() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_dropSound_8)); }
	inline AudioClip_t794140988 * get_m_dropSound_8() const { return ___m_dropSound_8; }
	inline AudioClip_t794140988 ** get_address_of_m_dropSound_8() { return &___m_dropSound_8; }
	inline void set_m_dropSound_8(AudioClip_t794140988 * value)
	{
		___m_dropSound_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_dropSound_8, value);
	}

	inline static int32_t get_offset_of_m_gameOverSound_9() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_gameOverSound_9)); }
	inline AudioClip_t794140988 * get_m_gameOverSound_9() const { return ___m_gameOverSound_9; }
	inline AudioClip_t794140988 ** get_address_of_m_gameOverSound_9() { return &___m_gameOverSound_9; }
	inline void set_m_gameOverSound_9(AudioClip_t794140988 * value)
	{
		___m_gameOverSound_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_gameOverSound_9, value);
	}

	inline static int32_t get_offset_of_m_errorSound_10() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_errorSound_10)); }
	inline AudioClip_t794140988 * get_m_errorSound_10() const { return ___m_errorSound_10; }
	inline AudioClip_t794140988 ** get_address_of_m_errorSound_10() { return &___m_errorSound_10; }
	inline void set_m_errorSound_10(AudioClip_t794140988 * value)
	{
		___m_errorSound_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_errorSound_10, value);
	}

	inline static int32_t get_offset_of_m_holdSound_11() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_holdSound_11)); }
	inline AudioClip_t794140988 * get_m_holdSound_11() const { return ___m_holdSound_11; }
	inline AudioClip_t794140988 ** get_address_of_m_holdSound_11() { return &___m_holdSound_11; }
	inline void set_m_holdSound_11(AudioClip_t794140988 * value)
	{
		___m_holdSound_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_holdSound_11, value);
	}

	inline static int32_t get_offset_of_m_musicSource_12() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_musicSource_12)); }
	inline AudioSource_t1740077639 * get_m_musicSource_12() const { return ___m_musicSource_12; }
	inline AudioSource_t1740077639 ** get_address_of_m_musicSource_12() { return &___m_musicSource_12; }
	inline void set_m_musicSource_12(AudioSource_t1740077639 * value)
	{
		___m_musicSource_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_musicSource_12, value);
	}

	inline static int32_t get_offset_of_m_musicClips_13() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_musicClips_13)); }
	inline AudioClipU5BU5D_t3001083477* get_m_musicClips_13() const { return ___m_musicClips_13; }
	inline AudioClipU5BU5D_t3001083477** get_address_of_m_musicClips_13() { return &___m_musicClips_13; }
	inline void set_m_musicClips_13(AudioClipU5BU5D_t3001083477* value)
	{
		___m_musicClips_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_musicClips_13, value);
	}

	inline static int32_t get_offset_of_m_randomMusicClip_14() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_randomMusicClip_14)); }
	inline AudioClip_t794140988 * get_m_randomMusicClip_14() const { return ___m_randomMusicClip_14; }
	inline AudioClip_t794140988 ** get_address_of_m_randomMusicClip_14() { return &___m_randomMusicClip_14; }
	inline void set_m_randomMusicClip_14(AudioClip_t794140988 * value)
	{
		___m_randomMusicClip_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_randomMusicClip_14, value);
	}

	inline static int32_t get_offset_of_m_vocalClips_15() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_vocalClips_15)); }
	inline AudioClipU5BU5D_t3001083477* get_m_vocalClips_15() const { return ___m_vocalClips_15; }
	inline AudioClipU5BU5D_t3001083477** get_address_of_m_vocalClips_15() { return &___m_vocalClips_15; }
	inline void set_m_vocalClips_15(AudioClipU5BU5D_t3001083477* value)
	{
		___m_vocalClips_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_vocalClips_15, value);
	}

	inline static int32_t get_offset_of_m_gameOverVocalClip_16() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_gameOverVocalClip_16)); }
	inline AudioClip_t794140988 * get_m_gameOverVocalClip_16() const { return ___m_gameOverVocalClip_16; }
	inline AudioClip_t794140988 ** get_address_of_m_gameOverVocalClip_16() { return &___m_gameOverVocalClip_16; }
	inline void set_m_gameOverVocalClip_16(AudioClip_t794140988 * value)
	{
		___m_gameOverVocalClip_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_gameOverVocalClip_16, value);
	}

	inline static int32_t get_offset_of_m_levelUpVocalClip_17() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_levelUpVocalClip_17)); }
	inline AudioClip_t794140988 * get_m_levelUpVocalClip_17() const { return ___m_levelUpVocalClip_17; }
	inline AudioClip_t794140988 ** get_address_of_m_levelUpVocalClip_17() { return &___m_levelUpVocalClip_17; }
	inline void set_m_levelUpVocalClip_17(AudioClip_t794140988 * value)
	{
		___m_levelUpVocalClip_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_levelUpVocalClip_17, value);
	}

	inline static int32_t get_offset_of_m_musicIconToggle_18() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_musicIconToggle_18)); }
	inline IconToggle_t1520157005 * get_m_musicIconToggle_18() const { return ___m_musicIconToggle_18; }
	inline IconToggle_t1520157005 ** get_address_of_m_musicIconToggle_18() { return &___m_musicIconToggle_18; }
	inline void set_m_musicIconToggle_18(IconToggle_t1520157005 * value)
	{
		___m_musicIconToggle_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_musicIconToggle_18, value);
	}

	inline static int32_t get_offset_of_m_fxIconToggle_19() { return static_cast<int32_t>(offsetof(SoundManager_t2444342206, ___m_fxIconToggle_19)); }
	inline IconToggle_t1520157005 * get_m_fxIconToggle_19() const { return ___m_fxIconToggle_19; }
	inline IconToggle_t1520157005 ** get_address_of_m_fxIconToggle_19() { return &___m_fxIconToggle_19; }
	inline void set_m_fxIconToggle_19(IconToggle_t1520157005 * value)
	{
		___m_fxIconToggle_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_fxIconToggle_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
