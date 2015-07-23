#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3017;
struct t5;
struct t2;

extern "C" void m16161_gshared (t3017 * __this, t5 * p0, int32_t p1, MethodInfo* method);
#define m16161(__this, p0, p1, method) (( void (*) (t3017 *, t5 *, int32_t, MethodInfo*))m16161_gshared)(__this, p0, p1, method)
extern "C" t5 * m16162_gshared (t3017 * __this, MethodInfo* method);
#define m16162(__this, method) (( t5 * (*) (t3017 *, MethodInfo*))m16162_gshared)(__this, method)
extern "C" void m16163_gshared (t3017 * __this, t5 * p0, MethodInfo* method);
#define m16163(__this, p0, method) (( void (*) (t3017 *, t5 *, MethodInfo*))m16163_gshared)(__this, p0, method)
extern "C" int32_t m16164_gshared (t3017 * __this, MethodInfo* method);
#define m16164(__this, method) (( int32_t (*) (t3017 *, MethodInfo*))m16164_gshared)(__this, method)
extern "C" void m16165_gshared (t3017 * __this, int32_t p0, MethodInfo* method);
#define m16165(__this, p0, method) (( void (*) (t3017 *, int32_t, MethodInfo*))m16165_gshared)(__this, p0, method)
extern "C" t2* m16166_gshared (t3017 * __this, MethodInfo* method);
#define m16166(__this, method) (( t2* (*) (t3017 *, MethodInfo*))m16166_gshared)(__this, method)
