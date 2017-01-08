#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t3827129040  : public MonoBehaviour_t667441552
{
public:
	// System.Single PlayerMovement::rotationSpeed
	float ___rotationSpeed_2;
	// System.Single PlayerMovement::radiusChangeSpeed
	float ___radiusChangeSpeed_3;
	// System.Single PlayerMovement::minRadius
	float ___minRadius_4;
	// System.Single PlayerMovement::maxRadius
	float ___maxRadius_5;
	// System.Single PlayerMovement::increaseInDifficulty
	float ___increaseInDifficulty_6;
	// System.Single PlayerMovement::radius
	float ___radius_7;
	// System.Single PlayerMovement::currentYAngle
	float ___currentYAngle_8;
	// System.Boolean PlayerMovement::clockwise
	bool ___clockwise_9;
	// UnityEngine.Transform PlayerMovement::transformPlayerObject
	Transform_t1659122786 * ___transformPlayerObject_10;
	// UnityEngine.Vector3 PlayerMovement::playerVector
	Vector3_t4282066566  ___playerVector_11;
	// System.Boolean PlayerMovement::isSpaceDown
	bool ___isSpaceDown_12;
	// UnityEngine.UI.Text PlayerMovement::secondsRemaining
	Text_t9039225 * ___secondsRemaining_13;
	// System.Single PlayerMovement::secondsOfEffectRemaining
	float ___secondsOfEffectRemaining_14;
	// System.Boolean PlayerMovement::effectActive
	bool ___effectActive_15;

public:
	inline static int32_t get_offset_of_rotationSpeed_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___rotationSpeed_2)); }
	inline float get_rotationSpeed_2() const { return ___rotationSpeed_2; }
	inline float* get_address_of_rotationSpeed_2() { return &___rotationSpeed_2; }
	inline void set_rotationSpeed_2(float value)
	{
		___rotationSpeed_2 = value;
	}

	inline static int32_t get_offset_of_radiusChangeSpeed_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___radiusChangeSpeed_3)); }
	inline float get_radiusChangeSpeed_3() const { return ___radiusChangeSpeed_3; }
	inline float* get_address_of_radiusChangeSpeed_3() { return &___radiusChangeSpeed_3; }
	inline void set_radiusChangeSpeed_3(float value)
	{
		___radiusChangeSpeed_3 = value;
	}

	inline static int32_t get_offset_of_minRadius_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___minRadius_4)); }
	inline float get_minRadius_4() const { return ___minRadius_4; }
	inline float* get_address_of_minRadius_4() { return &___minRadius_4; }
	inline void set_minRadius_4(float value)
	{
		___minRadius_4 = value;
	}

	inline static int32_t get_offset_of_maxRadius_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___maxRadius_5)); }
	inline float get_maxRadius_5() const { return ___maxRadius_5; }
	inline float* get_address_of_maxRadius_5() { return &___maxRadius_5; }
	inline void set_maxRadius_5(float value)
	{
		___maxRadius_5 = value;
	}

	inline static int32_t get_offset_of_increaseInDifficulty_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___increaseInDifficulty_6)); }
	inline float get_increaseInDifficulty_6() const { return ___increaseInDifficulty_6; }
	inline float* get_address_of_increaseInDifficulty_6() { return &___increaseInDifficulty_6; }
	inline void set_increaseInDifficulty_6(float value)
	{
		___increaseInDifficulty_6 = value;
	}

	inline static int32_t get_offset_of_radius_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___radius_7)); }
	inline float get_radius_7() const { return ___radius_7; }
	inline float* get_address_of_radius_7() { return &___radius_7; }
	inline void set_radius_7(float value)
	{
		___radius_7 = value;
	}

	inline static int32_t get_offset_of_currentYAngle_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___currentYAngle_8)); }
	inline float get_currentYAngle_8() const { return ___currentYAngle_8; }
	inline float* get_address_of_currentYAngle_8() { return &___currentYAngle_8; }
	inline void set_currentYAngle_8(float value)
	{
		___currentYAngle_8 = value;
	}

	inline static int32_t get_offset_of_clockwise_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___clockwise_9)); }
	inline bool get_clockwise_9() const { return ___clockwise_9; }
	inline bool* get_address_of_clockwise_9() { return &___clockwise_9; }
	inline void set_clockwise_9(bool value)
	{
		___clockwise_9 = value;
	}

	inline static int32_t get_offset_of_transformPlayerObject_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___transformPlayerObject_10)); }
	inline Transform_t1659122786 * get_transformPlayerObject_10() const { return ___transformPlayerObject_10; }
	inline Transform_t1659122786 ** get_address_of_transformPlayerObject_10() { return &___transformPlayerObject_10; }
	inline void set_transformPlayerObject_10(Transform_t1659122786 * value)
	{
		___transformPlayerObject_10 = value;
		Il2CppCodeGenWriteBarrier(&___transformPlayerObject_10, value);
	}

	inline static int32_t get_offset_of_playerVector_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___playerVector_11)); }
	inline Vector3_t4282066566  get_playerVector_11() const { return ___playerVector_11; }
	inline Vector3_t4282066566 * get_address_of_playerVector_11() { return &___playerVector_11; }
	inline void set_playerVector_11(Vector3_t4282066566  value)
	{
		___playerVector_11 = value;
	}

	inline static int32_t get_offset_of_isSpaceDown_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___isSpaceDown_12)); }
	inline bool get_isSpaceDown_12() const { return ___isSpaceDown_12; }
	inline bool* get_address_of_isSpaceDown_12() { return &___isSpaceDown_12; }
	inline void set_isSpaceDown_12(bool value)
	{
		___isSpaceDown_12 = value;
	}

	inline static int32_t get_offset_of_secondsRemaining_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___secondsRemaining_13)); }
	inline Text_t9039225 * get_secondsRemaining_13() const { return ___secondsRemaining_13; }
	inline Text_t9039225 ** get_address_of_secondsRemaining_13() { return &___secondsRemaining_13; }
	inline void set_secondsRemaining_13(Text_t9039225 * value)
	{
		___secondsRemaining_13 = value;
		Il2CppCodeGenWriteBarrier(&___secondsRemaining_13, value);
	}

	inline static int32_t get_offset_of_secondsOfEffectRemaining_14() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___secondsOfEffectRemaining_14)); }
	inline float get_secondsOfEffectRemaining_14() const { return ___secondsOfEffectRemaining_14; }
	inline float* get_address_of_secondsOfEffectRemaining_14() { return &___secondsOfEffectRemaining_14; }
	inline void set_secondsOfEffectRemaining_14(float value)
	{
		___secondsOfEffectRemaining_14 = value;
	}

	inline static int32_t get_offset_of_effectActive_15() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___effectActive_15)); }
	inline bool get_effectActive_15() const { return ___effectActive_15; }
	inline bool* get_address_of_effectActive_15() { return &___effectActive_15; }
	inline void set_effectActive_15(bool value)
	{
		___effectActive_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
