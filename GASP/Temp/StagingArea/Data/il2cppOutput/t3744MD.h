#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3744;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t1168.h"

extern "C" void m23607_gshared (t3744 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m23607(__this, p0, p1, method) (( void (*) (t3744 *, t5 *, t144, MethodInfo*))m23607_gshared)(__this, p0, p1, method)
extern "C" bool m23608_gshared (t3744 * __this, t1168  p0, MethodInfo* method);
#define m23608(__this, p0, method) (( bool (*) (t3744 *, t1168 , MethodInfo*))m23608_gshared)(__this, p0, method)
extern "C" t5 * m23609_gshared (t3744 * __this, t1168  p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m23609(__this, p0, p1, p2, method) (( t5 * (*) (t3744 *, t1168 , t142 *, t5 *, MethodInfo*))m23609_gshared)(__this, p0, p1, p2, method)
extern "C" bool m23610_gshared (t3744 * __this, t5 * p0, MethodInfo* method);
#define m23610(__this, p0, method) (( bool (*) (t3744 *, t5 *, MethodInfo*))m23610_gshared)(__this, p0, method)
