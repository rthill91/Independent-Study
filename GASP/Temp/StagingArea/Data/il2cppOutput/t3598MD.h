#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3598;
struct t5;
struct t125;
struct t3599;
struct t7;

extern "C" void m21967_gshared (t3598 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m21967(__this, p0, p1, method) (( void (*) (t3598 *, t5 *, t125 *, MethodInfo*))m21967_gshared)(__this, p0, p1, method)
extern "C" void m21968_gshared (t3598 * __this, t3599 * p0, MethodInfo* method);
#define m21968(__this, p0, method) (( void (*) (t3598 *, t3599 *, MethodInfo*))m21968_gshared)(__this, p0, method)
extern "C" void m21969_gshared (t3598 * __this, t7* p0, MethodInfo* method);
#define m21969(__this, p0, method) (( void (*) (t3598 *, t7*, MethodInfo*))m21969_gshared)(__this, p0, method)
extern "C" bool m21970_gshared (t3598 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m21970(__this, p0, p1, method) (( bool (*) (t3598 *, t5 *, t125 *, MethodInfo*))m21970_gshared)(__this, p0, p1, method)
