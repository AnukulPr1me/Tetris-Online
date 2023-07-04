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

// Ghost
struct Ghost_t68778607;
// Shape
struct Shape_t79847297;
// Board
struct Board_t64356038;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Shape79847297.h"
#include "AssemblyU2DCSharp_Board64356038.h"

// System.Void Ghost::.ctor()
extern "C"  void Ghost__ctor_m2612894684 (Ghost_t68778607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ghost::DrawGhost(Shape,Board)
extern "C"  void Ghost_DrawGhost_m1209201650 (Ghost_t68778607 * __this, Shape_t79847297 * ___originalShape0, Board_t64356038 * ___gameBoard1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ghost::Reset()
extern "C"  void Ghost_Reset_m259327625 (Ghost_t68778607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
