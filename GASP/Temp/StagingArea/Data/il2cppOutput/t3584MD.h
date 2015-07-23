#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3584;
struct t5;
struct t125;
struct t7;

extern "C" void m21915_gshared (t3584 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m21915(__this, p0, p1, method) (( void (*) (t3584 *, t5 *, t125 *, MethodInfo*))m21915_gshared)(__this, p0, p1, method)
extern "C" void m21916_gshared (t3584 * __this, t7* p0, MethodInfo* method);
#define m21916(__this, p0, method) (( void (*) (t3584 *, t7*, MethodInfo*))m21916_gshared)(__this, p0, method)
extern "C" bool m21917_gshared (t3584 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m21917(__this, p0, p1, method) (( bool (*) (t3584 *, t5 *, t125 *, MethodInfo*))m21917_gshared)(__this, p0, p1, method)
