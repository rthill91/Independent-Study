#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3038;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3028.h"

extern "C" void m16318_gshared (t3038 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m16318(__this, p0, p1, method) (( void (*) (t3038 *, t5 *, t144, MethodInfo*))m16318_gshared)(__this, p0, p1, method)
extern "C" t3028  m16320_gshared (t3038 * __this, t5 * p0, int32_t p1, MethodInfo* method);
#define m16320(__this, p0, p1, method) (( t3028  (*) (t3038 *, t5 *, int32_t, MethodInfo*))m16320_gshared)(__this, p0, p1, method)
extern "C" t5 * m16322_gshared (t3038 * __this, t5 * p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m16322(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3038 *, t5 *, int32_t, t142 *, t5 *, MethodInfo*))m16322_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3028  m16324_gshared (t3038 * __this, t5 * p0, MethodInfo* method);
#define m16324(__this, p0, method) (( t3028  (*) (t3038 *, t5 *, MethodInfo*))m16324_gshared)(__this, p0, method)
