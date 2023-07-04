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

// GameController
struct GameController_t2782302542;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_GameController_Direction3503403998.h"

// System.Void GameController::.ctor()
extern "C"  void GameController__ctor_m4168274701 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnEnable()
extern "C"  void GameController_OnEnable_m3048734041 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnDisable()
extern "C"  void GameController_OnDisable_m462412020 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Start()
extern "C"  void GameController_Start_m3115412493 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Update()
extern "C"  void GameController_Update_m2094358944 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::LateUpdate()
extern "C"  void GameController_LateUpdate_m475879270 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::MoveRight()
extern "C"  void GameController_MoveRight_m2015812918 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::MoveLeft()
extern "C"  void GameController_MoveLeft_m1136462607 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Rotate()
extern "C"  void GameController_Rotate_m731457970 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::MoveDown()
extern "C"  void GameController_MoveDown_m917165290 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::PlayerInput()
extern "C"  void GameController_PlayerInput_m478112724 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::LandShape()
extern "C"  void GameController_LandShape_m2954466849 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::GameOver()
extern "C"  void GameController_GameOver_m3446234109 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::GameOverRoutine()
extern "C"  Il2CppObject * GameController_GameOverRoutine_m3654345953 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Restart()
extern "C"  void GameController_Restart_m591490042 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::PlaySound(UnityEngine.AudioClip,System.Single)
extern "C"  void GameController_PlaySound_m51945186 (GameController_t2782302542 * __this, AudioClip_t794140988 * ___clip0, float ___volMultiplier1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::ToggleRotDirection()
extern "C"  void GameController_ToggleRotDirection_m3512811507 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::TogglePause()
extern "C"  void GameController_TogglePause_m1638164269 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Hold()
extern "C"  void GameController_Hold_m4214785430 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::DragHandler(UnityEngine.Vector2)
extern "C"  void GameController_DragHandler_m2633357177 (GameController_t2782302542 * __this, Vector2_t4282066565  ___dragMovement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::SwipeHandler(UnityEngine.Vector2)
extern "C"  void GameController_SwipeHandler_m1870374675 (GameController_t2782302542 * __this, Vector2_t4282066565  ___swipeMovement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::TapHandler(UnityEngine.Vector2)
extern "C"  void GameController_TapHandler_m378962556 (GameController_t2782302542 * __this, Vector2_t4282066565  ___tapMovement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameController/Direction GameController::GetDirection(UnityEngine.Vector2)
extern "C"  int32_t GameController_GetDirection_m1090700763 (GameController_t2782302542 * __this, Vector2_t4282066565  ___swipeMovement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::ResetTouchDirection()
extern "C"  void GameController_ResetTouchDirection_m1557235994 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
