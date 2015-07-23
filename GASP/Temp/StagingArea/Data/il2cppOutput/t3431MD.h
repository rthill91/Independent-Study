#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3431;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m20495_gshared (t3431 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m20495(__this, p0, p1, method) (( void (*) (t3431 *, t5 *, t144, MethodInfo*))m20495_gshared)(__this, p0, p1, method)
extern "C" void m20497_gshared (t3431 * __this, t5 * p0, MethodInfo* method);
#define m20497(__this, p0, method) (( void (*) (t3431 *, t5 *, MethodInfo*))m20497_gshared)(__this, p0, method)
extern "C" t5 * m20499_gshared (t3431 * __this, t5 * p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m20499(__this, p0, p1, p2, method) (( t5 * (*) (t3431 *, t5 *, t142 *, t5 *, MethodInfo*))m20499_gshared)(__this, p0, p1, p2, method)
extern "C" void m20501_gshared (t3431 * __this, t5 * p0, MethodInfo* method);
#define m20501(__this, p0, method) (( void (*) (t3431 *, t5 *, MethodInfo*))m20501_gshared)(__this, p0, method)
