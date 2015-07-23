#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3319;
struct t5;
#include "t749.h"

extern "C" void m19413_gshared (t3319 * __this, MethodInfo* method);
#define m19413(__this, method) (( void (*) (t3319 *, MethodInfo*))m19413_gshared)(__this, method)
extern "C" void m19414_gshared (t5 * __this , MethodInfo* method);
#define m19414(__this , method) (( void (*) (t5 * , MethodInfo*))m19414_gshared)(__this , method)
extern "C" int32_t m19415_gshared (t3319 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m19415(__this, p0, p1, method) (( int32_t (*) (t3319 *, t5 *, t5 *, MethodInfo*))m19415_gshared)(__this, p0, p1, method)
extern "C" t3319 * m19416_gshared (t5 * __this , MethodInfo* method);
#define m19416(__this , method) (( t3319 * (*) (t5 * , MethodInfo*))m19416_gshared)(__this , method)
