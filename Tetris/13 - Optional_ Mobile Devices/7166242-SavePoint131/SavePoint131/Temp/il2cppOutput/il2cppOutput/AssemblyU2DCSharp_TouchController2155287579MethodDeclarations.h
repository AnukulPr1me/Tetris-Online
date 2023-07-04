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

// TouchController
struct TouchController_t2155287579;
// TouchController/TouchEventHandler
struct TouchEventHandler_t110604059;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TouchController_TouchEventHandler110604059.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void TouchController::.ctor()
extern "C"  void TouchController__ctor_m1747329456 (TouchController_t2155287579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchController::add_DragEvent(TouchController/TouchEventHandler)
extern "C"  void TouchController_add_DragEvent_m1215901377 (Il2CppObject * __this /* static, unused */, TouchEventHandler_t110604059 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchController::remove_DragEvent(TouchController/TouchEventHandler)
extern "C"  void TouchController_remove_DragEvent_m2405742968 (Il2CppObject * __this /* static, unused */, TouchEventHandler_t110604059 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchController::add_SwipeEvent(TouchController/TouchEventHandler)
extern "C"  void TouchController_add_SwipeEvent_m292370821 (Il2CppObject * __this /* static, unused */, TouchEventHandler_t110604059 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchController::remove_SwipeEvent(TouchController/TouchEventHandler)
extern "C"  void TouchController_remove_SwipeEvent_m2817721774 (Il2CppObject * __this /* static, unused */, TouchEventHandler_t110604059 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchController::add_TapEvent(TouchController/TouchEventHandler)
extern "C"  void TouchController_add_TapEvent_m2989305006 (Il2CppObject * __this /* static, unused */, TouchEventHandler_t110604059 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchController::remove_TapEvent(TouchController/TouchEventHandler)
extern "C"  void TouchController_remove_TapEvent_m1088024343 (Il2CppObject * __this /* static, unused */, TouchEventHandler_t110604059 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchController::OnTap()
extern "C"  void TouchController_OnTap_m1255128850 (TouchController_t2155287579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchController::OnDrag()
extern "C"  void TouchController_OnDrag_m4106503111 (TouchController_t2155287579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchController::OnSwipeEnd()
extern "C"  void TouchController_OnSwipeEnd_m1752825236 (TouchController_t2155287579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchController::Start()
extern "C"  void TouchController_Start_m694467248 (TouchController_t2155287579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchController::Diagnostic(System.String,System.String)
extern "C"  void TouchController_Diagnostic_m150291875 (TouchController_t2155287579 * __this, String_t* ___text10, String_t* ___text21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TouchController::SwipeDiagnostic(UnityEngine.Vector2)
extern "C"  String_t* TouchController_SwipeDiagnostic_m1061509192 (TouchController_t2155287579 * __this, Vector2_t4282066565  ___swipeMovement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchController::Update()
extern "C"  void TouchController_Update_m59500381 (TouchController_t2155287579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
