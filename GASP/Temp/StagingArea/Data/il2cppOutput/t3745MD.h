#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3745;
struct t5;
#include "t1168.h"

extern "C" void m23611_gshared (t3745 * __this, MethodInfo* method);
#define m23611(__this, method) (( void (*) (t3745 *, MethodInfo*))m23611_gshared)(__this, method)
extern "C" void m23612_gshared (t5 * __this , MethodInfo* method);
#define m23612(__this , method) (( void (*) (t5 * , MethodInfo*))m23612_gshared)(__this , method)
extern "C" int32_t m23613_gshared (t3745 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m23613(__this, p0, p1, method) (( int32_t (*) (t3745 *, t5 *, t5 *, MethodInfo*))m23613_gshared)(__this, p0, p1, method)
extern "C" t3745 * m23614_gshared (t5 * __this , MethodInfo* method);
#define m23614(__this , method) (( t3745 * (*) (t5 * , MethodInfo*))m23614_gshared)(__this , method)
