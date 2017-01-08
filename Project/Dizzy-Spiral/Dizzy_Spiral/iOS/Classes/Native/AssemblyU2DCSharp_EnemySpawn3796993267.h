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
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawn
struct  EnemySpawn_t3796993267  : public MonoBehaviour_t667441552
{
public:
	// PlayerMovement EnemySpawn::playerMovement
	PlayerMovement_t3827129040 * ___playerMovement_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnemySpawn::enemyObject
	List_1_t747900261 * ___enemyObject_3;
	// System.Collections.Generic.List`1<System.Single> EnemySpawn::randomBoundary
	List_1_t1365137228 * ___randomBoundary_4;
	// System.Single EnemySpawn::timeNeedToSpawn
	float ___timeNeedToSpawn_5;
	// System.Single EnemySpawn::minSpeed
	float ___minSpeed_6;
	// System.Single EnemySpawn::maxSpeed
	float ___maxSpeed_7;
	// UnityEngine.Transform EnemySpawn::arrowTransform
	Transform_t1659122786 * ___arrowTransform_8;
	// System.Single EnemySpawn::enemyLife
	float ___enemyLife_9;
	// System.Single EnemySpawn::currentTime
	float ___currentTime_10;
	// System.Boolean EnemySpawn::decideNextEnemy
	bool ___decideNextEnemy_11;
	// System.Int32 EnemySpawn::objectID
	int32_t ___objectID_12;
	// UnityEngine.Vector3 EnemySpawn::pos
	Vector3_t4282066566  ___pos_13;
	// UnityEngine.Vector3 EnemySpawn::forceDirection
	Vector3_t4282066566  ___forceDirection_14;

public:
	inline static int32_t get_offset_of_playerMovement_2() { return static_cast<int32_t>(offsetof(EnemySpawn_t3796993267, ___playerMovement_2)); }
	inline PlayerMovement_t3827129040 * get_playerMovement_2() const { return ___playerMovement_2; }
	inline PlayerMovement_t3827129040 ** get_address_of_playerMovement_2() { return &___playerMovement_2; }
	inline void set_playerMovement_2(PlayerMovement_t3827129040 * value)
	{
		___playerMovement_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerMovement_2, value);
	}

	inline static int32_t get_offset_of_enemyObject_3() { return static_cast<int32_t>(offsetof(EnemySpawn_t3796993267, ___enemyObject_3)); }
	inline List_1_t747900261 * get_enemyObject_3() const { return ___enemyObject_3; }
	inline List_1_t747900261 ** get_address_of_enemyObject_3() { return &___enemyObject_3; }
	inline void set_enemyObject_3(List_1_t747900261 * value)
	{
		___enemyObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___enemyObject_3, value);
	}

	inline static int32_t get_offset_of_randomBoundary_4() { return static_cast<int32_t>(offsetof(EnemySpawn_t3796993267, ___randomBoundary_4)); }
	inline List_1_t1365137228 * get_randomBoundary_4() const { return ___randomBoundary_4; }
	inline List_1_t1365137228 ** get_address_of_randomBoundary_4() { return &___randomBoundary_4; }
	inline void set_randomBoundary_4(List_1_t1365137228 * value)
	{
		___randomBoundary_4 = value;
		Il2CppCodeGenWriteBarrier(&___randomBoundary_4, value);
	}

	inline static int32_t get_offset_of_timeNeedToSpawn_5() { return static_cast<int32_t>(offsetof(EnemySpawn_t3796993267, ___timeNeedToSpawn_5)); }
	inline float get_timeNeedToSpawn_5() const { return ___timeNeedToSpawn_5; }
	inline float* get_address_of_timeNeedToSpawn_5() { return &___timeNeedToSpawn_5; }
	inline void set_timeNeedToSpawn_5(float value)
	{
		___timeNeedToSpawn_5 = value;
	}

	inline static int32_t get_offset_of_minSpeed_6() { return static_cast<int32_t>(offsetof(EnemySpawn_t3796993267, ___minSpeed_6)); }
	inline float get_minSpeed_6() const { return ___minSpeed_6; }
	inline float* get_address_of_minSpeed_6() { return &___minSpeed_6; }
	inline void set_minSpeed_6(float value)
	{
		___minSpeed_6 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_7() { return static_cast<int32_t>(offsetof(EnemySpawn_t3796993267, ___maxSpeed_7)); }
	inline float get_maxSpeed_7() const { return ___maxSpeed_7; }
	inline float* get_address_of_maxSpeed_7() { return &___maxSpeed_7; }
	inline void set_maxSpeed_7(float value)
	{
		___maxSpeed_7 = value;
	}

	inline static int32_t get_offset_of_arrowTransform_8() { return static_cast<int32_t>(offsetof(EnemySpawn_t3796993267, ___arrowTransform_8)); }
	inline Transform_t1659122786 * get_arrowTransform_8() const { return ___arrowTransform_8; }
	inline Transform_t1659122786 ** get_address_of_arrowTransform_8() { return &___arrowTransform_8; }
	inline void set_arrowTransform_8(Transform_t1659122786 * value)
	{
		___arrowTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___arrowTransform_8, value);
	}

	inline static int32_t get_offset_of_enemyLife_9() { return static_cast<int32_t>(offsetof(EnemySpawn_t3796993267, ___enemyLife_9)); }
	inline float get_enemyLife_9() const { return ___enemyLife_9; }
	inline float* get_address_of_enemyLife_9() { return &___enemyLife_9; }
	inline void set_enemyLife_9(float value)
	{
		___enemyLife_9 = value;
	}

	inline static int32_t get_offset_of_currentTime_10() { return static_cast<int32_t>(offsetof(EnemySpawn_t3796993267, ___currentTime_10)); }
	inline float get_currentTime_10() const { return ___currentTime_10; }
	inline float* get_address_of_currentTime_10() { return &___currentTime_10; }
	inline void set_currentTime_10(float value)
	{
		___currentTime_10 = value;
	}

	inline static int32_t get_offset_of_decideNextEnemy_11() { return static_cast<int32_t>(offsetof(EnemySpawn_t3796993267, ___decideNextEnemy_11)); }
	inline bool get_decideNextEnemy_11() const { return ___decideNextEnemy_11; }
	inline bool* get_address_of_decideNextEnemy_11() { return &___decideNextEnemy_11; }
	inline void set_decideNextEnemy_11(bool value)
	{
		___decideNextEnemy_11 = value;
	}

	inline static int32_t get_offset_of_objectID_12() { return static_cast<int32_t>(offsetof(EnemySpawn_t3796993267, ___objectID_12)); }
	inline int32_t get_objectID_12() const { return ___objectID_12; }
	inline int32_t* get_address_of_objectID_12() { return &___objectID_12; }
	inline void set_objectID_12(int32_t value)
	{
		___objectID_12 = value;
	}

	inline static int32_t get_offset_of_pos_13() { return static_cast<int32_t>(offsetof(EnemySpawn_t3796993267, ___pos_13)); }
	inline Vector3_t4282066566  get_pos_13() const { return ___pos_13; }
	inline Vector3_t4282066566 * get_address_of_pos_13() { return &___pos_13; }
	inline void set_pos_13(Vector3_t4282066566  value)
	{
		___pos_13 = value;
	}

	inline static int32_t get_offset_of_forceDirection_14() { return static_cast<int32_t>(offsetof(EnemySpawn_t3796993267, ___forceDirection_14)); }
	inline Vector3_t4282066566  get_forceDirection_14() const { return ___forceDirection_14; }
	inline Vector3_t4282066566 * get_address_of_forceDirection_14() { return &___forceDirection_14; }
	inline void set_forceDirection_14(Vector3_t4282066566  value)
	{
		___forceDirection_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
