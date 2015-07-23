#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2872;
struct t5;
struct t2;

extern "C" void m14765_gshared (t2872 * __this, int32_t p0, t5 * p1, MethodInfo* method);
#define m14765(__this, p0, p1, method) (( void (*) (t2872 *, int32_t, t5 *, MethodInfo*))m14765_gshared)(__this, p0, p1, method)
extern "C" int32_t m14766_gshared (t2872 * __this, MethodInfo* method);
#define m14766(__this, method) (( int32_t (*) (t2872 *, MethodInfo*))m14766_gshared)(__this, method)
extern "C" void m14767_gshared (t2872 * __this, int32_t p0, MethodInfo* method);
#define m14767(__this, p0, method) (( void (*) (t2872 *, int32_t, MethodInfo*))m14767_gshared)(__this, p0, method)
extern "C" t5 * m14768_gshared (t2872 * __this, MethodInfo* method);
#define m14768(__this, method) (( t5 * (*) (t2872 *, MethodInfo*))m14768_gshared)(__this, method)
extern "C" void m14769_gshared (t2872 * __this, t5 * p0, MethodInfo* method);
#define m14769(__this, p0, method) (( void (*) (t2872 *, t5 *, MethodInfo*))m14769_gshared)(__this, p0, method)
extern "C" t2* m14770_gshared (t2872 * __this, MethodInfo* method);
#define m14770(__this, method) (( t2* (*) (t2872 *, MethodInfo*))m14770_gshared)(__this, method)
