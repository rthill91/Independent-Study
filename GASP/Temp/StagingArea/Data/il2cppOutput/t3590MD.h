#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3590;
struct t286;
struct t286_marshaled;
struct t125;
struct t5;
struct t7;

extern "C" void m21936_gshared (t3590 * __this, t286 * p0, t125 * p1, t5 * p2, MethodInfo* method);
#define m21936(__this, p0, p1, p2, method) (( void (*) (t3590 *, t286 *, t125 *, t5 *, MethodInfo*))m21936_gshared)(__this, p0, p1, p2, method)
extern "C" void m21937_gshared (t3590 * __this, t7* p0, MethodInfo* method);
#define m21937(__this, p0, method) (( void (*) (t3590 *, t7*, MethodInfo*))m21937_gshared)(__this, p0, method)
