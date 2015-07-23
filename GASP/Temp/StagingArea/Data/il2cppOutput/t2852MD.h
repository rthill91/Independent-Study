#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2852;

extern "C" void m14567_gshared (t2852 * __this, MethodInfo* method);
#define m14567(__this, method) (( void (*) (t2852 *, MethodInfo*))m14567_gshared)(__this, method)
extern "C" int32_t m14568_gshared (t2852 * __this, int32_t p0, MethodInfo* method);
#define m14568(__this, p0, method) (( int32_t (*) (t2852 *, int32_t, MethodInfo*))m14568_gshared)(__this, p0, method)
extern "C" bool m14569_gshared (t2852 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m14569(__this, p0, p1, method) (( bool (*) (t2852 *, int32_t, int32_t, MethodInfo*))m14569_gshared)(__this, p0, p1, method)
