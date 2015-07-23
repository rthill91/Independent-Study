#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t934;
struct t286;
struct t286_marshaled;
struct t125;
struct t7;

extern "C" void m4641_gshared (t934 * __this, t286 * p0, t125 * p1, float p2, MethodInfo* method);
#define m4641(__this, p0, p1, p2, method) (( void (*) (t934 *, t286 *, t125 *, float, MethodInfo*))m4641_gshared)(__this, p0, p1, p2, method)
extern "C" void m21938_gshared (t934 * __this, t7* p0, MethodInfo* method);
#define m21938(__this, p0, method) (( void (*) (t934 *, t7*, MethodInfo*))m21938_gshared)(__this, p0, method)
