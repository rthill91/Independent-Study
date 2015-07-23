#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3025;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m16226_gshared (t3025 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m16226(__this, p0, p1, method) (( void (*) (t3025 *, t5 *, t144, MethodInfo*))m16226_gshared)(__this, p0, p1, method)
extern "C" int32_t m16227_gshared (t3025 * __this, t5 * p0, int32_t p1, MethodInfo* method);
#define m16227(__this, p0, p1, method) (( int32_t (*) (t3025 *, t5 *, int32_t, MethodInfo*))m16227_gshared)(__this, p0, p1, method)
extern "C" t5 * m16228_gshared (t3025 * __this, t5 * p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m16228(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3025 *, t5 *, int32_t, t142 *, t5 *, MethodInfo*))m16228_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16229_gshared (t3025 * __this, t5 * p0, MethodInfo* method);
#define m16229(__this, p0, method) (( int32_t (*) (t3025 *, t5 *, MethodInfo*))m16229_gshared)(__this, p0, method)
