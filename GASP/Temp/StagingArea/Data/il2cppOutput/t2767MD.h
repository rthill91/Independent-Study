#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2767;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m13793_gshared (t2767 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m13793(__this, p0, p1, method) (( void (*) (t2767 *, t5 *, t144, MethodInfo*))m13793_gshared)(__this, p0, p1, method)
extern "C" int32_t m13794_gshared (t2767 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m13794(__this, p0, p1, method) (( int32_t (*) (t2767 *, t5 *, t5 *, MethodInfo*))m13794_gshared)(__this, p0, p1, method)
extern "C" t5 * m13795_gshared (t2767 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m13795(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2767 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m13795_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m13796_gshared (t2767 * __this, t5 * p0, MethodInfo* method);
#define m13796(__this, p0, method) (( int32_t (*) (t2767 *, t5 *, MethodInfo*))m13796_gshared)(__this, p0, method)
