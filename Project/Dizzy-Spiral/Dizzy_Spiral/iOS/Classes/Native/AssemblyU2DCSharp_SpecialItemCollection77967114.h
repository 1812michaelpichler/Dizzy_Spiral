#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerMovement
struct PlayerMovement_t3827129040;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpecialItemCollection
struct  SpecialItemCollection_t77967114  : public MonoBehaviour_t667441552
{
public:
	// System.Single SpecialItemCollection::lifeTime
	float ___lifeTime_2;
	// PlayerMovement SpecialItemCollection::playerMovement
	PlayerMovement_t3827129040 * ___playerMovement_3;

public:
	inline static int32_t get_offset_of_lifeTime_2() { return static_cast<int32_t>(offsetof(SpecialItemCollection_t77967114, ___lifeTime_2)); }
	inline float get_lifeTime_2() const { return ___lifeTime_2; }
	inline float* get_address_of_lifeTime_2() { return &___lifeTime_2; }
	inline void set_lifeTime_2(float value)
	{
		___lifeTime_2 = value;
	}

	inline static int32_t get_offset_of_playerMovement_3() { return static_cast<int32_t>(offsetof(SpecialItemCollection_t77967114, ___playerMovement_3)); }
	inline PlayerMovement_t3827129040 * get_playerMovement_3() const { return ___playerMovement_3; }
	inline PlayerMovement_t3827129040 ** get_address_of_playerMovement_3() { return &___playerMovement_3; }
	inline void set_playerMovement_3(PlayerMovement_t3827129040 * value)
	{
		___playerMovement_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerMovement_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
