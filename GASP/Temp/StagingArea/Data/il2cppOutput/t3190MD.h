#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3190;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m18040_gshared (t3190 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m18040(__this, p0, p1, method) (( void (*) (t3190 *, t5 *, t144, MethodInfo*))m18040_gshared)(__this, p0, p1, method)
extern "C" int32_t m18041_gshared (t3190 * __this, float p0, float p1, MethodInfo* method);
#define m18041(__this, p0, p1, method) (( int32_t (*) (t3190 *, float, float, MethodInfo*))m18041_gshared)(__this, p0, p1, method)
extern "C" t5 * m18042_gshared (t3190 * __this, float p0, float p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m18042(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3190 *, float, float, t142 *, t5 *, MethodInfo*))m18042_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m18043_gshared (t3190 * __this, t5 * p0, MethodInfo* method);
#define m18043(__this, p0, method) (( int32_t (*) (t3190 *, t5 *, MethodInfo*))m18043_gshared)(__this, p0, method)
