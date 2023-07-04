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

// TouchController/TouchEventHandler
struct TouchEventHandler_t110604059;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void TouchController/TouchEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void TouchEventHandler__ctor_m2550116722 (TouchEventHandler_t110604059 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchController/TouchEventHandler::Invoke(UnityEngine.Vector2)
extern "C"  void TouchEventHandler_Invoke_m3113978862 (TouchEventHandler_t110604059 * __this, Vector2_t4282066565  ___swipe0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult TouchController/TouchEventHandler::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TouchEventHandler_BeginInvoke_m936381003 (TouchEventHandler_t110604059 * __this, Vector2_t4282066565  ___swipe0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchController/TouchEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void TouchEventHandler_EndInvoke_m1807330434 (TouchEventHandler_t110604059 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
