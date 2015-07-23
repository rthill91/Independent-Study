#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3010;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t297.h"

extern "C" void m16042_gshared (t3010 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m16042(__this, p0, p1, method) (( void (*) (t3010 *, t5 *, t144, MethodInfo*))m16042_gshared)(__this, p0, p1, method)
extern "C" t297  m16044_gshared (t3010 * __this, int32_t p0, t5 * p1, MethodInfo* method);
#define m16044(__this, p0, p1, method) (( t297  (*) (t3010 *, int32_t, t5 *, MethodInfo*))m16044_gshared)(__this, p0, p1, method)
extern "C" t5 * m16046_gshared (t3010 * __this, int32_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m16046(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3010 *, int32_t, t5 *, t142 *, t5 *, MethodInfo*))m16046_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t297  m16048_gshared (t3010 * __this, t5 * p0, MethodInfo* method);
#define m16048(__this, p0, method) (( t297  (*) (t3010 *, t5 *, MethodInfo*))m16048_gshared)(__this, p0, method)
