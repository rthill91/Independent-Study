#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3404;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m20329_gshared (t3404 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m20329(__this, p0, p1, method) (( void (*) (t3404 *, t5 *, t144, MethodInfo*))m20329_gshared)(__this, p0, p1, method)
extern "C" uint64_t m20330_gshared (t3404 * __this, uint64_t p0, t5 * p1, MethodInfo* method);
#define m20330(__this, p0, p1, method) (( uint64_t (*) (t3404 *, uint64_t, t5 *, MethodInfo*))m20330_gshared)(__this, p0, p1, method)
extern "C" t5 * m20331_gshared (t3404 * __this, uint64_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m20331(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3404 *, uint64_t, t5 *, t142 *, t5 *, MethodInfo*))m20331_gshared)(__this, p0, p1, p2, p3, method)
extern "C" uint64_t m20332_gshared (t3404 * __this, t5 * p0, MethodInfo* method);
#define m20332(__this, p0, method) (( uint64_t (*) (t3404 *, t5 *, MethodInfo*))m20332_gshared)(__this, p0, method)
