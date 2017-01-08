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
// UnityEngine.UI.Text
struct Text_t9039225;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighscoreScript
struct  HighscoreScript_t1506125563  : public Il2CppObject
{
public:
	// System.Int32 HighscoreScript::highscore
	int32_t ___highscore_1;
	// UnityEngine.UI.Text HighscoreScript::highscoreText
	Text_t9039225 * ___highscoreText_2;

public:
	inline static int32_t get_offset_of_highscore_1() { return static_cast<int32_t>(offsetof(HighscoreScript_t1506125563, ___highscore_1)); }
	inline int32_t get_highscore_1() const { return ___highscore_1; }
	inline int32_t* get_address_of_highscore_1() { return &___highscore_1; }
	inline void set_highscore_1(int32_t value)
	{
		___highscore_1 = value;
	}

	inline static int32_t get_offset_of_highscoreText_2() { return static_cast<int32_t>(offsetof(HighscoreScript_t1506125563, ___highscoreText_2)); }
	inline Text_t9039225 * get_highscoreText_2() const { return ___highscoreText_2; }
	inline Text_t9039225 ** get_address_of_highscoreText_2() { return &___highscoreText_2; }
	inline void set_highscoreText_2(Text_t9039225 * value)
	{
		___highscoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___highscoreText_2, value);
	}
};

struct HighscoreScript_t1506125563_StaticFields
{
public:
	// HighscoreScript HighscoreScript::instance
	HighscoreScript_t1506125563 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(HighscoreScript_t1506125563_StaticFields, ___instance_0)); }
	inline HighscoreScript_t1506125563 * get_instance_0() const { return ___instance_0; }
	inline HighscoreScript_t1506125563 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(HighscoreScript_t1506125563 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
