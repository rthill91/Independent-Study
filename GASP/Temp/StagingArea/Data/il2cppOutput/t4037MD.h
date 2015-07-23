#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4037;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m26838_gshared (t4037 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m26838(__this, p0, p1, method) (( void (*) (t4037 *, t5 *, t144, MethodInfo*))m26838_gshared)(__this, p0, p1, method)
extern "C" t5 * m26839_gshared (t4037 * __this, t5 * p0, uint8_t p1, MethodInfo* method);
#define m26839(__this, p0, p1, method) (( t5 * (*) (t4037 *, t5 *, uint8_t, MethodInfo*))m26839_gshared)(__this, p0, p1, method)
extern "C" t5 * m26840_gshared (t4037 * __this, t5 * p0, uint8_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m26840(__this, p0, p1, p2, p3, method) (( t5 * (*) (t4037 *, t5 *, uint8_t, t142 *, t5 *, MethodInfo*))m26840_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t5 * m26841_gshared (t4037 * __this, t5 * p0, MethodInfo* method);
#define m26841(__this, p0, method) (( t5 * (*) (t4037 *, t5 *, MethodInfo*))m26841_gshared)(__this, p0, method)
