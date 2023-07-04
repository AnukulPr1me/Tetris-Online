#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SoundManager
struct SoundManager_t2444342206;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t3001083477;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"

// System.Void SoundManager::.ctor()
extern "C"  void SoundManager__ctor_m4124152989 (SoundManager_t2444342206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::Start()
extern "C"  void SoundManager_Start_m3071290781 (SoundManager_t2444342206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip SoundManager::GetRandomClip(UnityEngine.AudioClip[])
extern "C"  AudioClip_t794140988 * SoundManager_GetRandomClip_m2268993569 (SoundManager_t2444342206 * __this, AudioClipU5BU5D_t3001083477* ___clips0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlayBackgroundMusic(UnityEngine.AudioClip)
extern "C"  void SoundManager_PlayBackgroundMusic_m2908206373 (SoundManager_t2444342206 * __this, AudioClip_t794140988 * ___musicClip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::UpdateMusic()
extern "C"  void SoundManager_UpdateMusic_m1475254807 (SoundManager_t2444342206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::Update()
extern "C"  void SoundManager_Update_m726585872 (SoundManager_t2444342206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::ToggleMusic()
extern "C"  void SoundManager_ToggleMusic_m939341100 (SoundManager_t2444342206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::ToggleFX()
extern "C"  void SoundManager_ToggleFX_m1908747181 (SoundManager_t2444342206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
