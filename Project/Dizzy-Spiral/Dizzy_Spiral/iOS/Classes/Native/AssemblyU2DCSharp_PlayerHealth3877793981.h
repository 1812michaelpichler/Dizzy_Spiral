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
// UnityEngine.UI.Text
struct Text_t9039225;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerHealth
struct  PlayerHealth_t3877793981  : public Il2CppObject
{
public:
	// System.Int32 PlayerHealth::health
	int32_t ___health_1;
	// System.Int32 PlayerHealth::startHealth
	int32_t ___startHealth_2;
	// UnityEngine.UI.Text PlayerHealth::txtHealth
	Text_t9039225 * ___txtHealth_3;

public:
	inline static int32_t get_offset_of_health_1() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___health_1)); }
	inline int32_t get_health_1() const { return ___health_1; }
	inline int32_t* get_address_of_health_1() { return &___health_1; }
	inline void set_health_1(int32_t value)
	{
		___health_1 = value;
	}

	inline static int32_t get_offset_of_startHealth_2() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___startHealth_2)); }
	inline int32_t get_startHealth_2() const { return ___startHealth_2; }
	inline int32_t* get_address_of_startHealth_2() { return &___startHealth_2; }
	inline void set_startHealth_2(int32_t value)
	{
		___startHealth_2 = value;
	}

	inline static int32_t get_offset_of_txtHealth_3() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___txtHealth_3)); }
	inline Text_t9039225 * get_txtHealth_3() const { return ___txtHealth_3; }
	inline Text_t9039225 ** get_address_of_txtHealth_3() { return &___txtHealth_3; }
	inline void set_txtHealth_3(Text_t9039225 * value)
	{
		___txtHealth_3 = value;
		Il2CppCodeGenWriteBarrier(&___txtHealth_3, value);
	}
};

struct PlayerHealth_t3877793981_StaticFields
{
public:
	// PlayerHealth PlayerHealth::instance
	PlayerHealth_t3877793981 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981_StaticFields, ___instance_0)); }
	inline PlayerHealth_t3877793981 * get_instance_0() const { return ___instance_0; }
	inline PlayerHealth_t3877793981 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(PlayerHealth_t3877793981 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
