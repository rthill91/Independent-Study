#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3639;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3629.h"

extern "C" void m22409_gshared (t3639 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m22409(__this, p0, p1, method) (( void (*) (t3639 *, t5 *, t144, MethodInfo*))m22409_gshared)(__this, p0, p1, method)
extern "C" t3629  m22411_gshared (t3639 * __this, int32_t p0, t5 * p1, MethodInfo* method);
#define m22411(__this, p0, p1, method) (( t3629  (*) (t3639 *, int32_t, t5 *, MethodInfo*))m22411_gshared)(__this, p0, p1, method)
extern "C" t5 * m22413_gshared (t3639 * __this, int32_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m22413(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3639 *, int32_t, t5 *, t142 *, t5 *, MethodInfo*))m22413_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3629  m22415_gshared (t3639 * __this, t5 * p0, MethodInfo* method);
#define m22415(__this, p0, method) (( t3629  (*) (t3639 *, t5 *, MethodInfo*))m22415_gshared)(__this, p0, method)
