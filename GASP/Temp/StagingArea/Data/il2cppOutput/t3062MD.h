#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3062;
struct t5;

extern "C" void m16596_gshared (t3062 * __this, MethodInfo* method);
#define m16596(__this, method) (( void (*) (t3062 *, MethodInfo*))m16596_gshared)(__this, method)
extern "C" void m16597_gshared (t5 * __this , MethodInfo* method);
#define m16597(__this , method) (( void (*) (t5 * , MethodInfo*))m16597_gshared)(__this , method)
extern "C" int32_t m16598_gshared (t3062 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m16598(__this, p0, p1, method) (( int32_t (*) (t3062 *, t5 *, t5 *, MethodInfo*))m16598_gshared)(__this, p0, p1, method)
extern "C" t3062 * m16599_gshared (t5 * __this , MethodInfo* method);
#define m16599(__this , method) (( t3062 * (*) (t5 * , MethodInfo*))m16599_gshared)(__this , method)
