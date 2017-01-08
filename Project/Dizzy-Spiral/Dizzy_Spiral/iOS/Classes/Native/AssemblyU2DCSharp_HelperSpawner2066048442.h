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
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HelperSpawner
struct  HelperSpawner_t2066048442  : public MonoBehaviour_t667441552
{
public:
	// PlayerMovement HelperSpawner::playerMovement
	PlayerMovement_t3827129040 * ___playerMovement_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HelperSpawner::helperObjects
	List_1_t747900261 * ___helperObjects_3;
	// System.Collections.Generic.List`1<System.Single> HelperSpawner::randomBoundary
	List_1_t1365137228 * ___randomBoundary_4;
	// System.Single HelperSpawner::timeNeedToSpawn
	float ___timeNeedToSpawn_5;
	// System.Single HelperSpawner::minSpeed
	float ___minSpeed_6;
	// System.Single HelperSpawner::maxSpeed
	float ___maxSpeed_7;
	// System.Boolean HelperSpawner::isStartSpawn
	bool ___isStartSpawn_8;
	// System.Single HelperSpawner::nextSpawnStart
	float ___nextSpawnStart_9;
	// System.Single HelperSpawner::currentTime
	float ___currentTime_10;
	// System.Int32 HelperSpawner::objectID
	int32_t ___objectID_11;
	// UnityEngine.Vector3 HelperSpawner::pos
	Vector3_t4282066566  ___pos_12;

public:
	inline static int32_t get_offset_of_playerMovement_2() { return static_cast<int32_t>(offsetof(HelperSpawner_t2066048442, ___playerMovement_2)); }
	inline PlayerMovement_t3827129040 * get_playerMovement_2() const { return ___playerMovement_2; }
	inline PlayerMovement_t3827129040 ** get_address_of_playerMovement_2() { return &___playerMovement_2; }
	inline void set_playerMovement_2(PlayerMovement_t3827129040 * value)
	{
		___playerMovement_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerMovement_2, value);
	}

	inline static int32_t get_offset_of_helperObjects_3() { return static_cast<int32_t>(offsetof(HelperSpawner_t2066048442, ___helperObjects_3)); }
	inline List_1_t747900261 * get_helperObjects_3() const { return ___helperObjects_3; }
	inline List_1_t747900261 ** get_address_of_helperObjects_3() { return &___helperObjects_3; }
	inline void set_helperObjects_3(List_1_t747900261 * value)
	{
		___helperObjects_3 = value;
		Il2CppCodeGenWriteBarrier(&___helperObjects_3, value);
	}

	inline static int32_t get_offset_of_randomBoundary_4() { return static_cast<int32_t>(offsetof(HelperSpawner_t2066048442, ___randomBoundary_4)); }
	inline List_1_t1365137228 * get_randomBoundary_4() const { return ___randomBoundary_4; }
	inline List_1_t1365137228 ** get_address_of_randomBoundary_4() { return &___randomBoundary_4; }
	inline void set_randomBoundary_4(List_1_t1365137228 * value)
	{
		___randomBoundary_4 = value;
		Il2CppCodeGenWriteBarrier(&___randomBoundary_4, value);
	}

	inline static int32_t get_offset_of_timeNeedToSpawn_5() { return static_cast<int32_t>(offsetof(HelperSpawner_t2066048442, ___timeNeedToSpawn_5)); }
	inline float get_timeNeedToSpawn_5() const { return ___timeNeedToSpawn_5; }
	inline float* get_address_of_timeNeedToSpawn_5() { return &___timeNeedToSpawn_5; }
	inline void set_timeNeedToSpawn_5(float value)
	{
		___timeNeedToSpawn_5 = value;
	}

	inline static int32_t get_offset_of_minSpeed_6() { return static_cast<int32_t>(offsetof(HelperSpawner_t2066048442, ___minSpeed_6)); }
	inline float get_minSpeed_6() const { return ___minSpeed_6; }
	inline float* get_address_of_minSpeed_6() { return &___minSpeed_6; }
	inline void set_minSpeed_6(float value)
	{
		___minSpeed_6 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_7() { return static_cast<int32_t>(offsetof(HelperSpawner_t2066048442, ___maxSpeed_7)); }
	inline float get_maxSpeed_7() const { return ___maxSpeed_7; }
	inline float* get_address_of_maxSpeed_7() { return &___maxSpeed_7; }
	inline void set_maxSpeed_7(float value)
	{
		___maxSpeed_7 = value;
	}

	inline static int32_t get_offset_of_isStartSpawn_8() { return static_cast<int32_t>(offsetof(HelperSpawner_t2066048442, ___isStartSpawn_8)); }
	inline bool get_isStartSpawn_8() const { return ___isStartSpawn_8; }
	inline bool* get_address_of_isStartSpawn_8() { return &___isStartSpawn_8; }
	inline void set_isStartSpawn_8(bool value)
	{
		___isStartSpawn_8 = value;
	}

	inline static int32_t get_offset_of_nextSpawnStart_9() { return static_cast<int32_t>(offsetof(HelperSpawner_t2066048442, ___nextSpawnStart_9)); }
	inline float get_nextSpawnStart_9() const { return ___nextSpawnStart_9; }
	inline float* get_address_of_nextSpawnStart_9() { return &___nextSpawnStart_9; }
	inline void set_nextSpawnStart_9(float value)
	{
		___nextSpawnStart_9 = value;
	}

	inline static int32_t get_offset_of_currentTime_10() { return static_cast<int32_t>(offsetof(HelperSpawner_t2066048442, ___currentTime_10)); }
	inline float get_currentTime_10() const { return ___currentTime_10; }
	inline float* get_address_of_currentTime_10() { return &___currentTime_10; }
	inline void set_currentTime_10(float value)
	{
		___currentTime_10 = value;
	}

	inline static int32_t get_offset_of_objectID_11() { return static_cast<int32_t>(offsetof(HelperSpawner_t2066048442, ___objectID_11)); }
	inline int32_t get_objectID_11() const { return ___objectID_11; }
	inline int32_t* get_address_of_objectID_11() { return &___objectID_11; }
	inline void set_objectID_11(int32_t value)
	{
		___objectID_11 = value;
	}

	inline static int32_t get_offset_of_pos_12() { return static_cast<int32_t>(offsetof(HelperSpawner_t2066048442, ___pos_12)); }
	inline Vector3_t4282066566  get_pos_12() const { return ___pos_12; }
	inline Vector3_t4282066566 * get_address_of_pos_12() { return &___pos_12; }
	inline void set_pos_12(Vector3_t4282066566  value)
	{
		___pos_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
