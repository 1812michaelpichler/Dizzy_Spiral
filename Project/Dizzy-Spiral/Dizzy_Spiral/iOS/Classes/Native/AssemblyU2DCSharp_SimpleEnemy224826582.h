#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerHealth
struct PlayerHealth_t3877793981;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleEnemy
struct  SimpleEnemy_t224826582  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 SimpleEnemy::damage
	int32_t ___damage_2;
	// System.Single SimpleEnemy::lifeTime
	float ___lifeTime_3;
	// PlayerHealth SimpleEnemy::playerHealth
	PlayerHealth_t3877793981 * ___playerHealth_4;

public:
	inline static int32_t get_offset_of_damage_2() { return static_cast<int32_t>(offsetof(SimpleEnemy_t224826582, ___damage_2)); }
	inline int32_t get_damage_2() const { return ___damage_2; }
	inline int32_t* get_address_of_damage_2() { return &___damage_2; }
	inline void set_damage_2(int32_t value)
	{
		___damage_2 = value;
	}

	inline static int32_t get_offset_of_lifeTime_3() { return static_cast<int32_t>(offsetof(SimpleEnemy_t224826582, ___lifeTime_3)); }
	inline float get_lifeTime_3() const { return ___lifeTime_3; }
	inline float* get_address_of_lifeTime_3() { return &___lifeTime_3; }
	inline void set_lifeTime_3(float value)
	{
		___lifeTime_3 = value;
	}

	inline static int32_t get_offset_of_playerHealth_4() { return static_cast<int32_t>(offsetof(SimpleEnemy_t224826582, ___playerHealth_4)); }
	inline PlayerHealth_t3877793981 * get_playerHealth_4() const { return ___playerHealth_4; }
	inline PlayerHealth_t3877793981 ** get_address_of_playerHealth_4() { return &___playerHealth_4; }
	inline void set_playerHealth_4(PlayerHealth_t3877793981 * value)
	{
		___playerHealth_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
