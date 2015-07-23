#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3591;
struct t5;
struct t125;
struct t1372;
struct t7;

extern "C" void m21939_gshared (t3591 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m21939(__this, p0, p1, method) (( void (*) (t3591 *, t5 *, t125 *, MethodInfo*))m21939_gshared)(__this, p0, p1, method)
extern "C" void m21940_gshared (t3591 * __this, t1372 * p0, MethodInfo* method);
#define m21940(__this, p0, method) (( void (*) (t3591 *, t1372 *, MethodInfo*))m21940_gshared)(__this, p0, method)
extern "C" void m21941_gshared (t3591 * __this, t7* p0, MethodInfo* method);
#define m21941(__this, p0, method) (( void (*) (t3591 *, t7*, MethodInfo*))m21941_gshared)(__this, p0, method)
extern "C" bool m21942_gshared (t3591 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m21942(__this, p0, p1, method) (( bool (*) (t3591 *, t5 *, t125 *, MethodInfo*))m21942_gshared)(__this, p0, p1, method)
