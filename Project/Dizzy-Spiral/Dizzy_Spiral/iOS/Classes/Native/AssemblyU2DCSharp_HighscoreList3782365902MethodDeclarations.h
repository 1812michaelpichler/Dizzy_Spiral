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

// HighscoreList
struct HighscoreList_t3782365902;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void HighscoreList::.ctor()
extern "C"  void HighscoreList__ctor_m2665305693 (HighscoreList_t3782365902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighscoreList::.cctor()
extern "C"  void HighscoreList__cctor_m538001648 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HighscoreList HighscoreList::get_Instance()
extern "C"  HighscoreList_t3782365902 * HighscoreList_get_Instance_m1520194432 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> HighscoreList::get_ScoreList()
extern "C"  List_1_t2522024052 * HighscoreList_get_ScoreList_m2905198212 (HighscoreList_t3782365902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> HighscoreList::get_NameList()
extern "C"  List_1_t1375417109 * HighscoreList_get_NameList_m1998355720 (HighscoreList_t3782365902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighscoreList::addElement(System.String,System.Int32)
extern "C"  void HighscoreList_addElement_m1439425943 (HighscoreList_t3782365902 * __this, String_t* ___name0, int32_t ___score1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighscoreList::isInTheList(System.Int32)
extern "C"  bool HighscoreList_isInTheList_m1922741600 (HighscoreList_t3782365902 * __this, int32_t ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HighscoreList::findMin()
extern "C"  int32_t HighscoreList_findMin_m3572260034 (HighscoreList_t3782365902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighscoreList::sortList()
extern "C"  void HighscoreList_sortList_m98688131 (HighscoreList_t3782365902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighscoreList::save()
extern "C"  void HighscoreList_save_m258474340 (HighscoreList_t3782365902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighscoreList::load()
extern "C"  void HighscoreList_load_m70373005 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
