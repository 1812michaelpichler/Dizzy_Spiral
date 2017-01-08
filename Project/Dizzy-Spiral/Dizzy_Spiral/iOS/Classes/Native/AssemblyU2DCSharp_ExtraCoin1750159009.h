#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExtraCoin
struct  ExtraCoin_t1750159009  : public MonoBehaviour_t667441552
{
public:
	// System.Single ExtraCoin::lifeTime
	float ___lifeTime_2;
	// System.Int32 ExtraCoin::pointValue
	int32_t ___pointValue_3;

public:
	inline static int32_t get_offset_of_lifeTime_2() { return static_cast<int32_t>(offsetof(ExtraCoin_t1750159009, ___lifeTime_2)); }
	inline float get_lifeTime_2() const { return ___lifeTime_2; }
	inline float* get_address_of_lifeTime_2() { return &___lifeTime_2; }
	inline void set_lifeTime_2(float value)
	{
		___lifeTime_2 = value;
	}

	inline static int32_t get_offset_of_pointValue_3() { return static_cast<int32_t>(offsetof(ExtraCoin_t1750159009, ___pointValue_3)); }
	inline int32_t get_pointValue_3() const { return ___pointValue_3; }
	inline int32_t* get_address_of_pointValue_3() { return &___pointValue_3; }
	inline void set_pointValue_3(int32_t value)
	{
		___pointValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
