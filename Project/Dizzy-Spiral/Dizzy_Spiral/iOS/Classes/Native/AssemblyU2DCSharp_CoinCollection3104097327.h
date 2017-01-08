#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HighscoreScript
struct HighscoreScript_t1506125563;
// PlayerMovement
struct PlayerMovement_t3827129040;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoinCollection
struct  CoinCollection_t3104097327  : public MonoBehaviour_t667441552
{
public:
	// HighscoreScript CoinCollection::highscoreScript
	HighscoreScript_t1506125563 * ___highscoreScript_2;
	// PlayerMovement CoinCollection::playerMovement
	PlayerMovement_t3827129040 * ___playerMovement_3;
	// System.Int32 CoinCollection::pointValue
	int32_t ___pointValue_4;
	// UnityEngine.GameObject CoinCollection::particleObject
	GameObject_t3674682005 * ___particleObject_5;
	// System.Single CoinCollection::destroyTime
	float ___destroyTime_6;

public:
	inline static int32_t get_offset_of_highscoreScript_2() { return static_cast<int32_t>(offsetof(CoinCollection_t3104097327, ___highscoreScript_2)); }
	inline HighscoreScript_t1506125563 * get_highscoreScript_2() const { return ___highscoreScript_2; }
	inline HighscoreScript_t1506125563 ** get_address_of_highscoreScript_2() { return &___highscoreScript_2; }
	inline void set_highscoreScript_2(HighscoreScript_t1506125563 * value)
	{
		___highscoreScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___highscoreScript_2, value);
	}

	inline static int32_t get_offset_of_playerMovement_3() { return static_cast<int32_t>(offsetof(CoinCollection_t3104097327, ___playerMovement_3)); }
	inline PlayerMovement_t3827129040 * get_playerMovement_3() const { return ___playerMovement_3; }
	inline PlayerMovement_t3827129040 ** get_address_of_playerMovement_3() { return &___playerMovement_3; }
	inline void set_playerMovement_3(PlayerMovement_t3827129040 * value)
	{
		___playerMovement_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerMovement_3, value);
	}

	inline static int32_t get_offset_of_pointValue_4() { return static_cast<int32_t>(offsetof(CoinCollection_t3104097327, ___pointValue_4)); }
	inline int32_t get_pointValue_4() const { return ___pointValue_4; }
	inline int32_t* get_address_of_pointValue_4() { return &___pointValue_4; }
	inline void set_pointValue_4(int32_t value)
	{
		___pointValue_4 = value;
	}

	inline static int32_t get_offset_of_particleObject_5() { return static_cast<int32_t>(offsetof(CoinCollection_t3104097327, ___particleObject_5)); }
	inline GameObject_t3674682005 * get_particleObject_5() const { return ___particleObject_5; }
	inline GameObject_t3674682005 ** get_address_of_particleObject_5() { return &___particleObject_5; }
	inline void set_particleObject_5(GameObject_t3674682005 * value)
	{
		___particleObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___particleObject_5, value);
	}

	inline static int32_t get_offset_of_destroyTime_6() { return static_cast<int32_t>(offsetof(CoinCollection_t3104097327, ___destroyTime_6)); }
	inline float get_destroyTime_6() const { return ___destroyTime_6; }
	inline float* get_address_of_destroyTime_6() { return &___destroyTime_6; }
	inline void set_destroyTime_6(float value)
	{
		___destroyTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
