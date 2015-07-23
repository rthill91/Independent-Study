#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3586;
struct t5;
struct t125;
struct t7;

extern "C" void m21922_gshared (t3586 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m21922(__this, p0, p1, method) (( void (*) (t3586 *, t5 *, t125 *, MethodInfo*))m21922_gshared)(__this, p0, p1, method)
extern "C" void m21923_gshared (t3586 * __this, t7* p0, MethodInfo* method);
#define m21923(__this, p0, method) (( void (*) (t3586 *, t7*, MethodInfo*))m21923_gshared)(__this, p0, method)
extern "C" bool m21924_gshared (t3586 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m21924(__this, p0, p1, method) (( bool (*) (t3586 *, t5 *, t125 *, MethodInfo*))m21924_gshared)(__this, p0, p1, method)
