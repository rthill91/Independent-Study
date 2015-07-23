#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3626;
struct t125;
struct t2;
struct t5;
struct t868;

extern "C" void m22283_gshared (t3626 * __this, MethodInfo* method);
#define m22283(__this, method) (( void (*) (t3626 *, MethodInfo*))m22283_gshared)(__this, method)
extern "C" t125 * m22284_gshared (t3626 * __this, t2* p0, t5 * p1, MethodInfo* method);
#define m22284(__this, p0, p1, method) (( t125 * (*) (t3626 *, t2*, t5 *, MethodInfo*))m22284_gshared)(__this, p0, p1, method)
extern "C" t868 * m22285_gshared (t3626 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m22285(__this, p0, p1, method) (( t868 * (*) (t3626 *, t5 *, t125 *, MethodInfo*))m22285_gshared)(__this, p0, p1, method)
