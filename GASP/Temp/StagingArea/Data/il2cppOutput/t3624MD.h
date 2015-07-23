#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3624;
struct t125;
struct t2;
struct t5;
struct t868;

extern "C" void m22277_gshared (t3624 * __this, MethodInfo* method);
#define m22277(__this, method) (( void (*) (t3624 *, MethodInfo*))m22277_gshared)(__this, method)
extern "C" t125 * m22278_gshared (t3624 * __this, t2* p0, t5 * p1, MethodInfo* method);
#define m22278(__this, p0, p1, method) (( t125 * (*) (t3624 *, t2*, t5 *, MethodInfo*))m22278_gshared)(__this, p0, p1, method)
extern "C" t868 * m22279_gshared (t3624 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m22279(__this, p0, p1, method) (( t868 * (*) (t3624 *, t5 *, t125 *, MethodInfo*))m22279_gshared)(__this, p0, p1, method)
