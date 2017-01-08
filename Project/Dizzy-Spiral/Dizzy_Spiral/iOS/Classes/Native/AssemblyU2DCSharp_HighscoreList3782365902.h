#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HighscoreList
struct HighscoreList_t3782365902;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighscoreList
struct  HighscoreList_t3782365902  : public Il2CppObject
{
public:
	// System.Int32 HighscoreList::maxItems
	int32_t ___maxItems_2;
	// System.Collections.Generic.List`1<System.String> HighscoreList::nameList
	List_1_t1375417109 * ___nameList_3;
	// System.Collections.Generic.List`1<System.Int32> HighscoreList::highscoreList
	List_1_t2522024052 * ___highscoreList_4;

public:
	inline static int32_t get_offset_of_maxItems_2() { return static_cast<int32_t>(offsetof(HighscoreList_t3782365902, ___maxItems_2)); }
	inline int32_t get_maxItems_2() const { return ___maxItems_2; }
	inline int32_t* get_address_of_maxItems_2() { return &___maxItems_2; }
	inline void set_maxItems_2(int32_t value)
	{
		___maxItems_2 = value;
	}

	inline static int32_t get_offset_of_nameList_3() { return static_cast<int32_t>(offsetof(HighscoreList_t3782365902, ___nameList_3)); }
	inline List_1_t1375417109 * get_nameList_3() const { return ___nameList_3; }
	inline List_1_t1375417109 ** get_address_of_nameList_3() { return &___nameList_3; }
	inline void set_nameList_3(List_1_t1375417109 * value)
	{
		___nameList_3 = value;
		Il2CppCodeGenWriteBarrier(&___nameList_3, value);
	}

	inline static int32_t get_offset_of_highscoreList_4() { return static_cast<int32_t>(offsetof(HighscoreList_t3782365902, ___highscoreList_4)); }
	inline List_1_t2522024052 * get_highscoreList_4() const { return ___highscoreList_4; }
	inline List_1_t2522024052 ** get_address_of_highscoreList_4() { return &___highscoreList_4; }
	inline void set_highscoreList_4(List_1_t2522024052 * value)
	{
		___highscoreList_4 = value;
		Il2CppCodeGenWriteBarrier(&___highscoreList_4, value);
	}
};

struct HighscoreList_t3782365902_StaticFields
{
public:
	// HighscoreList HighscoreList::instance
	HighscoreList_t3782365902 * ___instance_0;
	// System.String HighscoreList::fileName
	String_t* ___fileName_1;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(HighscoreList_t3782365902_StaticFields, ___instance_0)); }
	inline HighscoreList_t3782365902 * get_instance_0() const { return ___instance_0; }
	inline HighscoreList_t3782365902 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(HighscoreList_t3782365902 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}

	inline static int32_t get_offset_of_fileName_1() { return static_cast<int32_t>(offsetof(HighscoreList_t3782365902_StaticFields, ___fileName_1)); }
	inline String_t* get_fileName_1() const { return ___fileName_1; }
	inline String_t** get_address_of_fileName_1() { return &___fileName_1; }
	inline void set_fileName_1(String_t* value)
	{
		___fileName_1 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
