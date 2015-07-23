#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3407;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m20352_gshared (t3407 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m20352(__this, p0, p1, method) (( void (*) (t3407 *, t5 *, t144, MethodInfo*))m20352_gshared)(__this, p0, p1, method)
extern "C" t5 * m20353_gshared (t3407 * __this, uint64_t p0, t5 * p1, MethodInfo* method);
#define m20353(__this, p0, p1, method) (( t5 * (*) (t3407 *, uint64_t, t5 *, MethodInfo*))m20353_gshared)(__this, p0, p1, method)
extern "C" t5 * m20354_gshared (t3407 * __this, uint64_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m20354(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3407 *, uint64_t, t5 *, t142 *, t5 *, MethodInfo*))m20354_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t5 * m20355_gshared (t3407 * __this, t5 * p0, MethodInfo* method);
#define m20355(__this, p0, method) (( t5 * (*) (t3407 *, t5 *, MethodInfo*))m20355_gshared)(__this, p0, method)
