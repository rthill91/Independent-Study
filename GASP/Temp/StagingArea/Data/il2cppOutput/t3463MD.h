#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3463;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3432.h"

extern "C" void m20796_gshared (t3463 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m20796(__this, p0, p1, method) (( void (*) (t3463 *, t5 *, t144, MethodInfo*))m20796_gshared)(__this, p0, p1, method)
extern "C" t3432  m20798_gshared (t3463 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m20798(__this, p0, p1, method) (( t3432  (*) (t3463 *, t5 *, t5 *, MethodInfo*))m20798_gshared)(__this, p0, p1, method)
extern "C" t5 * m20800_gshared (t3463 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m20800(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3463 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m20800_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3432  m20802_gshared (t3463 * __this, t5 * p0, MethodInfo* method);
#define m20802(__this, p0, method) (( t3432  (*) (t3463 *, t5 *, MethodInfo*))m20802_gshared)(__this, p0, method)
