#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3273;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t892.h"

extern "C" void m18804_gshared (t3273 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m18804(__this, p0, p1, method) (( void (*) (t3273 *, t5 *, t144, MethodInfo*))m18804_gshared)(__this, p0, p1, method)
extern "C" t892  m18806_gshared (t3273 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m18806(__this, p0, p1, method) (( t892  (*) (t3273 *, t5 *, t5 *, MethodInfo*))m18806_gshared)(__this, p0, p1, method)
extern "C" t5 * m18808_gshared (t3273 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m18808(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3273 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m18808_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t892  m18810_gshared (t3273 * __this, t5 * p0, MethodInfo* method);
#define m18810(__this, p0, method) (( t892  (*) (t3273 *, t5 *, MethodInfo*))m18810_gshared)(__this, p0, method)
