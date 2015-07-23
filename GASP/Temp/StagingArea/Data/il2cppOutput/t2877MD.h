#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2877;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m14807_gshared (t2877 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14807(__this, p0, p1, method) (( void (*) (t2877 *, t5 *, t144, MethodInfo*))m14807_gshared)(__this, p0, p1, method)
extern "C" int32_t m14808_gshared (t2877 * __this, int32_t p0, t5 * p1, MethodInfo* method);
#define m14808(__this, p0, p1, method) (( int32_t (*) (t2877 *, int32_t, t5 *, MethodInfo*))m14808_gshared)(__this, p0, p1, method)
extern "C" t5 * m14809_gshared (t2877 * __this, int32_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14809(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2877 *, int32_t, t5 *, t142 *, t5 *, MethodInfo*))m14809_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m14810_gshared (t2877 * __this, t5 * p0, MethodInfo* method);
#define m14810(__this, p0, method) (( int32_t (*) (t2877 *, t5 *, MethodInfo*))m14810_gshared)(__this, p0, method)
