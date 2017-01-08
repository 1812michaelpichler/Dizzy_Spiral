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

// PlayerHealth
struct PlayerHealth_t3877793981;

#include "codegen/il2cpp-codegen.h"

// System.Void PlayerHealth::.ctor()
extern "C"  void PlayerHealth__ctor_m43779710 (PlayerHealth_t3877793981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::.cctor()
extern "C"  void PlayerHealth__cctor_m875074799 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerHealth::damage(System.Int32)
extern "C"  bool PlayerHealth_damage_m1109072090 (PlayerHealth_t3877793981 * __this, int32_t ___damage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::heal(System.Int32)
extern "C"  void PlayerHealth_heal_m1437587231 (PlayerHealth_t3877793981 * __this, int32_t ___healpoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::reset()
extern "C"  void PlayerHealth_reset_m320526667 (PlayerHealth_t3877793981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerHealth PlayerHealth::get_Instance()
extern "C"  PlayerHealth_t3877793981 * PlayerHealth_get_Instance_m1076620036 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
