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

// Board
struct Board_t64356038;
// Shape
struct Shape_t79847297;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Shape79847297.h"

// System.Void Board::.ctor()
extern "C"  void Board__ctor_m1925908837 (Board_t64356038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Board::Awake()
extern "C"  void Board_Awake_m2163514056 (Board_t64356038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Board::Start()
extern "C"  void Board_Start_m873046629 (Board_t64356038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Board::Update()
extern "C"  void Board_Update_m1300493896 (Board_t64356038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Board::IsWithinBoard(System.Int32,System.Int32)
extern "C"  bool Board_IsWithinBoard_m3814206078 (Board_t64356038 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Board::IsOccupied(System.Int32,System.Int32,Shape)
extern "C"  bool Board_IsOccupied_m1429748062 (Board_t64356038 * __this, int32_t ___x0, int32_t ___y1, Shape_t79847297 * ___shape2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Board::IsValidPosition(Shape)
extern "C"  bool Board_IsValidPosition_m2347672159 (Board_t64356038 * __this, Shape_t79847297 * ___shape0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Board::DrawEmptyCells()
extern "C"  void Board_DrawEmptyCells_m696774183 (Board_t64356038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Board::StoreShapeInGrid(Shape)
extern "C"  void Board_StoreShapeInGrid_m1532780711 (Board_t64356038 * __this, Shape_t79847297 * ___shape0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Board::IsComplete(System.Int32)
extern "C"  bool Board_IsComplete_m4077796767 (Board_t64356038 * __this, int32_t ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Board::ClearRow(System.Int32)
extern "C"  void Board_ClearRow_m1219175581 (Board_t64356038 * __this, int32_t ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Board::ShiftOneRowDown(System.Int32)
extern "C"  void Board_ShiftOneRowDown_m1858861388 (Board_t64356038 * __this, int32_t ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Board::ShiftRowsDown(System.Int32)
extern "C"  void Board_ShiftRowsDown_m2746481489 (Board_t64356038 * __this, int32_t ___startY0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Board::ClearAllRows()
extern "C"  Il2CppObject * Board_ClearAllRows_m2181860548 (Board_t64356038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Board::IsOverLimit(Shape)
extern "C"  bool Board_IsOverLimit_m1413534749 (Board_t64356038 * __this, Shape_t79847297 * ___shape0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Board::ClearRowFX(System.Int32,System.Int32)
extern "C"  void Board_ClearRowFX_m560656904 (Board_t64356038 * __this, int32_t ___idx0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
