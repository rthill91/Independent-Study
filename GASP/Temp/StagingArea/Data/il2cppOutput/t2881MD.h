#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2881;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t2872.h"

extern "C" void m14838_gshared (t2881 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14838(__this, p0, p1, method) (( void (*) (t2881 *, t5 *, t144, MethodInfo*))m14838_gshared)(__this, p0, p1, method)
extern "C" t2872  m14839_gshared (t2881 * __this, int32_t p0, t5 * p1, MethodInfo* method);
#define m14839(__this, p0, p1, method) (( t2872  (*) (t2881 *, int32_t, t5 *, MethodInfo*))m14839_gshared)(__this, p0, p1, method)
extern "C" t5 * m14840_gshared (t2881 * __this, int32_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14840(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2881 *, int32_t, t5 *, t142 *, t5 *, MethodInfo*))m14840_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2872  m14841_gshared (t2881 * __this, t5 * p0, MethodInfo* method);
#define m14841(__this, p0, method) (( t2872  (*) (t2881 *, t5 *, MethodInfo*))m14841_gshared)(__this, p0, method)
