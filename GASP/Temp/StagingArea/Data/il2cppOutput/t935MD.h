#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t935;
struct t286;
struct t286_marshaled;
struct t125;
struct t7;

extern "C" void m4642_gshared (t935 * __this, t286 * p0, t125 * p1, int32_t p2, MethodInfo* method);
#define m4642(__this, p0, p1, p2, method) (( void (*) (t935 *, t286 *, t125 *, int32_t, MethodInfo*))m4642_gshared)(__this, p0, p1, p2, method)
extern "C" void m21946_gshared (t935 * __this, t7* p0, MethodInfo* method);
#define m21946(__this, p0, method) (( void (*) (t935 *, t7*, MethodInfo*))m21946_gshared)(__this, p0, method)
