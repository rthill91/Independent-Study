#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3189;

extern "C" void m18038_gshared (t3189 * __this, MethodInfo* method);
#define m18038(__this, method) (( void (*) (t3189 *, MethodInfo*))m18038_gshared)(__this, method)
extern "C" int32_t m18039_gshared (t3189 * __this, float p0, float p1, MethodInfo* method);
#define m18039(__this, p0, p1, method) (( int32_t (*) (t3189 *, float, float, MethodInfo*))m18039_gshared)(__this, p0, p1, method)
