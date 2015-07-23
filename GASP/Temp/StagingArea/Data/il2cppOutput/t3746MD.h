#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3746;
#include "t1168.h"

extern "C" void m23615_gshared (t3746 * __this, MethodInfo* method);
#define m23615(__this, method) (( void (*) (t3746 *, MethodInfo*))m23615_gshared)(__this, method)
extern "C" int32_t m23616_gshared (t3746 * __this, t1168  p0, t1168  p1, MethodInfo* method);
#define m23616(__this, p0, p1, method) (( int32_t (*) (t3746 *, t1168 , t1168 , MethodInfo*))m23616_gshared)(__this, p0, p1, method)
