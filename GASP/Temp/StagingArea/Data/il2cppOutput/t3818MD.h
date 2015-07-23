#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3818;
struct t5;
struct t125;
struct t1239;
struct t7;

extern "C" void m24539_gshared (t3818 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m24539(__this, p0, p1, method) (( void (*) (t3818 *, t5 *, t125 *, MethodInfo*))m24539_gshared)(__this, p0, p1, method)
extern "C" void m24540_gshared (t3818 * __this, t1239 * p0, MethodInfo* method);
#define m24540(__this, p0, method) (( void (*) (t3818 *, t1239 *, MethodInfo*))m24540_gshared)(__this, p0, method)
extern "C" void m24541_gshared (t3818 * __this, t7* p0, MethodInfo* method);
#define m24541(__this, p0, method) (( void (*) (t3818 *, t7*, MethodInfo*))m24541_gshared)(__this, p0, method)
extern "C" bool m24542_gshared (t3818 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m24542(__this, p0, p1, method) (( bool (*) (t3818 *, t5 *, t125 *, MethodInfo*))m24542_gshared)(__this, p0, p1, method)
