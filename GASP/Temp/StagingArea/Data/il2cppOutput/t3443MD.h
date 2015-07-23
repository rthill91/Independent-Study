#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3443;
struct t5;
struct t2;
#include "t914.h"

extern "C" void m20596_gshared (t3443 * __this, t5 * p0, t914  p1, MethodInfo* method);
#define m20596(__this, p0, p1, method) (( void (*) (t3443 *, t5 *, t914 , MethodInfo*))m20596_gshared)(__this, p0, p1, method)
extern "C" t5 * m20597_gshared (t3443 * __this, MethodInfo* method);
#define m20597(__this, method) (( t5 * (*) (t3443 *, MethodInfo*))m20597_gshared)(__this, method)
extern "C" void m20598_gshared (t3443 * __this, t5 * p0, MethodInfo* method);
#define m20598(__this, p0, method) (( void (*) (t3443 *, t5 *, MethodInfo*))m20598_gshared)(__this, p0, method)
extern "C" t914  m20599_gshared (t3443 * __this, MethodInfo* method);
#define m20599(__this, method) (( t914  (*) (t3443 *, MethodInfo*))m20599_gshared)(__this, method)
extern "C" void m20600_gshared (t3443 * __this, t914  p0, MethodInfo* method);
#define m20600(__this, p0, method) (( void (*) (t3443 *, t914 , MethodInfo*))m20600_gshared)(__this, p0, method)
extern "C" t2* m20601_gshared (t3443 * __this, MethodInfo* method);
#define m20601(__this, method) (( t2* (*) (t3443 *, MethodInfo*))m20601_gshared)(__this, method)
