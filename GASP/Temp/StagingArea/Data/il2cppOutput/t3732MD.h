#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3732;
struct t3583;
struct t5;

extern "C" void m23441_gshared (t3732 * __this, t3583 * p0, t3583 * p1, MethodInfo* method);
#define m23441(__this, p0, p1, method) (( void (*) (t3732 *, t3583 *, t3583 *, MethodInfo*))m23441_gshared)(__this, p0, p1, method)
extern "C" int32_t m23443_gshared (t3732 * __this, MethodInfo* method);
#define m23443(__this, method) (( int32_t (*) (t3732 *, MethodInfo*))m23443_gshared)(__this, method)
extern "C" void m23445_gshared (t3732 * __this, int32_t p0, MethodInfo* method);
#define m23445(__this, p0, method) (( void (*) (t3732 *, int32_t, MethodInfo*))m23445_gshared)(__this, p0, method)
extern "C" t5 * m23447_gshared (t3732 * __this, MethodInfo* method);
#define m23447(__this, method) (( t5 * (*) (t3732 *, MethodInfo*))m23447_gshared)(__this, method)
extern "C" void m23449_gshared (t3732 * __this, t5 * p0, MethodInfo* method);
#define m23449(__this, p0, method) (( void (*) (t3732 *, t5 *, MethodInfo*))m23449_gshared)(__this, p0, method)
