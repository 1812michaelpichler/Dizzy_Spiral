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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraShake
struct  CameraShake_t3715592897  : public MonoBehaviour_t667441552
{
public:
	// System.Single CameraShake::lifeTime
	float ___lifeTime_2;
	// System.Single CameraShake::shakeDuration
	float ___shakeDuration_3;
	// System.Single CameraShake::max
	float ___max_4;
	// System.Single CameraShake::time
	float ___time_5;
	// UnityEngine.Vector3 CameraShake::originalCameraPosition
	Vector3_t4282066566  ___originalCameraPosition_6;
	// UnityEngine.Transform CameraShake::cameraTransform
	Transform_t1659122786 * ___cameraTransform_7;
	// System.Boolean CameraShake::isShaking
	bool ___isShaking_8;

public:
	inline static int32_t get_offset_of_lifeTime_2() { return static_cast<int32_t>(offsetof(CameraShake_t3715592897, ___lifeTime_2)); }
	inline float get_lifeTime_2() const { return ___lifeTime_2; }
	inline float* get_address_of_lifeTime_2() { return &___lifeTime_2; }
	inline void set_lifeTime_2(float value)
	{
		___lifeTime_2 = value;
	}

	inline static int32_t get_offset_of_shakeDuration_3() { return static_cast<int32_t>(offsetof(CameraShake_t3715592897, ___shakeDuration_3)); }
	inline float get_shakeDuration_3() const { return ___shakeDuration_3; }
	inline float* get_address_of_shakeDuration_3() { return &___shakeDuration_3; }
	inline void set_shakeDuration_3(float value)
	{
		___shakeDuration_3 = value;
	}

	inline static int32_t get_offset_of_max_4() { return static_cast<int32_t>(offsetof(CameraShake_t3715592897, ___max_4)); }
	inline float get_max_4() const { return ___max_4; }
	inline float* get_address_of_max_4() { return &___max_4; }
	inline void set_max_4(float value)
	{
		___max_4 = value;
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(CameraShake_t3715592897, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_originalCameraPosition_6() { return static_cast<int32_t>(offsetof(CameraShake_t3715592897, ___originalCameraPosition_6)); }
	inline Vector3_t4282066566  get_originalCameraPosition_6() const { return ___originalCameraPosition_6; }
	inline Vector3_t4282066566 * get_address_of_originalCameraPosition_6() { return &___originalCameraPosition_6; }
	inline void set_originalCameraPosition_6(Vector3_t4282066566  value)
	{
		___originalCameraPosition_6 = value;
	}

	inline static int32_t get_offset_of_cameraTransform_7() { return static_cast<int32_t>(offsetof(CameraShake_t3715592897, ___cameraTransform_7)); }
	inline Transform_t1659122786 * get_cameraTransform_7() const { return ___cameraTransform_7; }
	inline Transform_t1659122786 ** get_address_of_cameraTransform_7() { return &___cameraTransform_7; }
	inline void set_cameraTransform_7(Transform_t1659122786 * value)
	{
		___cameraTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_7, value);
	}

	inline static int32_t get_offset_of_isShaking_8() { return static_cast<int32_t>(offsetof(CameraShake_t3715592897, ___isShaking_8)); }
	inline bool get_isShaking_8() const { return ___isShaking_8; }
	inline bool* get_address_of_isShaking_8() { return &___isShaking_8; }
	inline void set_isShaking_8(bool value)
	{
		___isShaking_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
