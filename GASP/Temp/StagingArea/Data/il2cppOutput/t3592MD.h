#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3592;
struct t5;
struct t125;
struct t3593;
struct t7;

extern "C" void m21947_gshared (t3592 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m21947(__this, p0, p1, method) (( void (*) (t3592 *, t5 *, t125 *, MethodInfo*))m21947_gshared)(__this, p0, p1, method)
extern "C" void m21948_gshared (t3592 * __this, t3593 * p0, MethodInfo* method);
#define m21948(__this, p0, method) (( void (*) (t3592 *, t3593 *, MethodInfo*))m21948_gshared)(__this, p0, method)
extern "C" void m21949_gshared (t3592 * __this, t7* p0, MethodInfo* method);
#define m21949(__this, p0, method) (( void (*) (t3592 *, t7*, MethodInfo*))m21949_gshared)(__this, p0, method)
extern "C" bool m21950_gshared (t3592 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m21950(__this, p0, p1, method) (( bool (*) (t3592 *, t5 *, t125 *, MethodInfo*))m21950_gshared)(__this, p0, p1, method)
