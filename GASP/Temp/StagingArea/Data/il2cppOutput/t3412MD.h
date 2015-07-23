#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3412;

extern "C" void m20378_gshared (t3412 * __this, MethodInfo* method);
#define m20378(__this, method) (( void (*) (t3412 *, MethodInfo*))m20378_gshared)(__this, method)
extern "C" int32_t m20379_gshared (t3412 * __this, uint64_t p0, MethodInfo* method);
#define m20379(__this, p0, method) (( int32_t (*) (t3412 *, uint64_t, MethodInfo*))m20379_gshared)(__this, p0, method)
extern "C" bool m20380_gshared (t3412 * __this, uint64_t p0, uint64_t p1, MethodInfo* method);
#define m20380(__this, p0, p1, method) (( bool (*) (t3412 *, uint64_t, uint64_t, MethodInfo*))m20380_gshared)(__this, p0, p1, method)
