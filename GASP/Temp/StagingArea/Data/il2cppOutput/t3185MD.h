#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3185;

extern "C" void m18024_gshared (t3185 * __this, MethodInfo* method);
#define m18024(__this, method) (( void (*) (t3185 *, MethodInfo*))m18024_gshared)(__this, method)
extern "C" int32_t m18025_gshared (t3185 * __this, float p0, MethodInfo* method);
#define m18025(__this, p0, method) (( int32_t (*) (t3185 *, float, MethodInfo*))m18025_gshared)(__this, p0, method)
extern "C" bool m18026_gshared (t3185 * __this, float p0, float p1, MethodInfo* method);
#define m18026(__this, p0, p1, method) (( bool (*) (t3185 *, float, float, MethodInfo*))m18026_gshared)(__this, p0, p1, method)
