#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3022;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m16203_gshared (t3022 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m16203(__this, p0, p1, method) (( void (*) (t3022 *, t5 *, t144, MethodInfo*))m16203_gshared)(__this, p0, p1, method)
extern "C" t5 * m16204_gshared (t3022 * __this, t5 * p0, int32_t p1, MethodInfo* method);
#define m16204(__this, p0, p1, method) (( t5 * (*) (t3022 *, t5 *, int32_t, MethodInfo*))m16204_gshared)(__this, p0, p1, method)
extern "C" t5 * m16205_gshared (t3022 * __this, t5 * p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m16205(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3022 *, t5 *, int32_t, t142 *, t5 *, MethodInfo*))m16205_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t5 * m16206_gshared (t3022 * __this, t5 * p0, MethodInfo* method);
#define m16206(__this, p0, method) (( t5 * (*) (t3022 *, t5 *, MethodInfo*))m16206_gshared)(__this, p0, method)
