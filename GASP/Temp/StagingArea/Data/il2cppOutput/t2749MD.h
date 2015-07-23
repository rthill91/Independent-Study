#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2749;
struct t5;

extern "C" void m13707_gshared (t2749 * __this, MethodInfo* method);
#define m13707(__this, method) (( void (*) (t2749 *, MethodInfo*))m13707_gshared)(__this, method)
extern "C" void m13708_gshared (t5 * __this , MethodInfo* method);
#define m13708(__this , method) (( void (*) (t5 * , MethodInfo*))m13708_gshared)(__this , method)
extern "C" int32_t m13709_gshared (t2749 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m13709(__this, p0, p1, method) (( int32_t (*) (t2749 *, t5 *, t5 *, MethodInfo*))m13709_gshared)(__this, p0, p1, method)
extern "C" t2749 * m13710_gshared (t5 * __this , MethodInfo* method);
#define m13710(__this , method) (( t2749 * (*) (t5 * , MethodInfo*))m13710_gshared)(__this , method)
