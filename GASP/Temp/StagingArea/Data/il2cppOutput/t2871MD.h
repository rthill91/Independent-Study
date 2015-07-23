#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2871;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t269.h"

extern "C" void m14834_gshared (t2871 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14834(__this, p0, p1, method) (( void (*) (t2871 *, t5 *, t144, MethodInfo*))m14834_gshared)(__this, p0, p1, method)
extern "C" t269  m14835_gshared (t2871 * __this, int32_t p0, t5 * p1, MethodInfo* method);
#define m14835(__this, p0, p1, method) (( t269  (*) (t2871 *, int32_t, t5 *, MethodInfo*))m14835_gshared)(__this, p0, p1, method)
extern "C" t5 * m14836_gshared (t2871 * __this, int32_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14836(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2871 *, int32_t, t5 *, t142 *, t5 *, MethodInfo*))m14836_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t269  m14837_gshared (t2871 * __this, t5 * p0, MethodInfo* method);
#define m14837(__this, p0, method) (( t269  (*) (t2871 *, t5 *, MethodInfo*))m14837_gshared)(__this, p0, method)
