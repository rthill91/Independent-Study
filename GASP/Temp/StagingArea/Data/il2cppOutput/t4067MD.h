#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4067;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m27085_gshared (t4067 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m27085(__this, p0, p1, method) (( void (*) (t4067 *, t5 *, t144, MethodInfo*))m27085_gshared)(__this, p0, p1, method)
extern "C" int32_t m27086_gshared (t4067 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m27086(__this, p0, p1, method) (( int32_t (*) (t4067 *, int32_t, int32_t, MethodInfo*))m27086_gshared)(__this, p0, p1, method)
extern "C" t5 * m27087_gshared (t4067 * __this, int32_t p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m27087(__this, p0, p1, p2, p3, method) (( t5 * (*) (t4067 *, int32_t, int32_t, t142 *, t5 *, MethodInfo*))m27087_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m27088_gshared (t4067 * __this, t5 * p0, MethodInfo* method);
#define m27088(__this, p0, method) (( int32_t (*) (t4067 *, t5 *, MethodInfo*))m27088_gshared)(__this, p0, method)
