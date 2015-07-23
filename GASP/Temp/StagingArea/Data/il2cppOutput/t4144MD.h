#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4144;
#include "t915.h"

extern "C" void m27568_gshared (t4144 * __this, MethodInfo* method);
#define m27568(__this, method) (( void (*) (t4144 *, MethodInfo*))m27568_gshared)(__this, method)
extern "C" int32_t m27569_gshared (t4144 * __this, t915  p0, t915  p1, MethodInfo* method);
#define m27569(__this, p0, p1, method) (( int32_t (*) (t4144 *, t915 , t915 , MethodInfo*))m27569_gshared)(__this, p0, p1, method)
