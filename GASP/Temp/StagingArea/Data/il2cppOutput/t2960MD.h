#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2960;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t2949.h"

extern "C" void m15570_gshared (t2960 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m15570(__this, p0, p1, method) (( void (*) (t2960 *, t5 *, t144, MethodInfo*))m15570_gshared)(__this, p0, p1, method)
extern "C" t2949  m15572_gshared (t2960 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m15572(__this, p0, p1, method) (( t2949  (*) (t2960 *, t5 *, t5 *, MethodInfo*))m15572_gshared)(__this, p0, p1, method)
extern "C" t5 * m15574_gshared (t2960 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m15574(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2960 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m15574_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2949  m15576_gshared (t2960 * __this, t5 * p0, MethodInfo* method);
#define m15576(__this, p0, method) (( t2949  (*) (t2960 *, t5 *, MethodInfo*))m15576_gshared)(__this, p0, method)
