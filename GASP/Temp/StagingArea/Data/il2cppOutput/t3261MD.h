#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3261;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3253.h"

extern "C" void m18671_gshared (t3261 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m18671(__this, p0, p1, method) (( void (*) (t3261 *, t5 *, t144, MethodInfo*))m18671_gshared)(__this, p0, p1, method)
extern "C" t3253  m18673_gshared (t3261 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m18673(__this, p0, p1, method) (( t3253  (*) (t3261 *, t5 *, t5 *, MethodInfo*))m18673_gshared)(__this, p0, p1, method)
extern "C" t5 * m18675_gshared (t3261 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m18675(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3261 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m18675_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3253  m18677_gshared (t3261 * __this, t5 * p0, MethodInfo* method);
#define m18677(__this, p0, method) (( t3253  (*) (t3261 *, t5 *, MethodInfo*))m18677_gshared)(__this, p0, method)
