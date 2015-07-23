#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4090;
struct t5;

extern "C" void m27212_gshared (t4090 * __this, MethodInfo* method);
#define m27212(__this, method) (( void (*) (t4090 *, MethodInfo*))m27212_gshared)(__this, method)
extern "C" int32_t m27213_gshared (t4090 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m27213(__this, p0, p1, method) (( int32_t (*) (t4090 *, t5 *, t5 *, MethodInfo*))m27213_gshared)(__this, p0, p1, method)
