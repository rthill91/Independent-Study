#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3186;

extern "C" void m18027_gshared (t3186 * __this, MethodInfo* method);
#define m18027(__this, method) (( void (*) (t3186 *, MethodInfo*))m18027_gshared)(__this, method)
extern "C" int32_t m18028_gshared (t3186 * __this, float p0, MethodInfo* method);
#define m18028(__this, p0, method) (( int32_t (*) (t3186 *, float, MethodInfo*))m18028_gshared)(__this, p0, method)
extern "C" bool m18029_gshared (t3186 * __this, float p0, float p1, MethodInfo* method);
#define m18029(__this, p0, p1, method) (( bool (*) (t3186 *, float, float, MethodInfo*))m18029_gshared)(__this, p0, p1, method)
