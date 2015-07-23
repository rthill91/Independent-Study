#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3063;

extern "C" void m16600_gshared (t3063 * __this, MethodInfo* method);
#define m16600(__this, method) (( void (*) (t3063 *, MethodInfo*))m16600_gshared)(__this, method)
extern "C" int32_t m16601_gshared (t3063 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m16601(__this, p0, p1, method) (( int32_t (*) (t3063 *, int32_t, int32_t, MethodInfo*))m16601_gshared)(__this, p0, p1, method)
