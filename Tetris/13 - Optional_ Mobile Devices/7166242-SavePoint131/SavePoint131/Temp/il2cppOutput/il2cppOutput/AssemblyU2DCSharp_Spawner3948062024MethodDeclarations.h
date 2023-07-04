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

// Spawner
struct Spawner_t3948062024;
// Shape
struct Shape_t79847297;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Shape79847297.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void Spawner::.ctor()
extern "C"  void Spawner__ctor_m1839725347 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Start()
extern "C"  void Spawner_Start_m786863139 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Shape Spawner::GetRandomShape()
extern "C"  Shape_t79847297 * Spawner_GetRandomShape_m3428758263 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Shape Spawner::SpawnShape()
extern "C"  Shape_t79847297 * Spawner_SpawnShape_m3460947957 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::InitQueue()
extern "C"  void Spawner_InitQueue_m2786540002 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::FillQueue()
extern "C"  void Spawner_FillQueue_m2680017423 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Shape Spawner::GetQueuedShape()
extern "C"  Shape_t79847297 * Spawner_GetQueuedShape_m50063431 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spawner::GrowShape(Shape,UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * Spawner_GrowShape_m585499666 (Spawner_t3948062024 * __this, Shape_t79847297 * ___shape0, Vector3_t4282066566  ___position1, float ___growTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
