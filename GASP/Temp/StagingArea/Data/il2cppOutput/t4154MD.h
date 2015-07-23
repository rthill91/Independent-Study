#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4154;
#include "t1486.h"

extern "C" void m27615_gshared (t4154 * __this, MethodInfo* method);
#define m27615(__this, method) (( void (*) (t4154 *, MethodInfo*))m27615_gshared)(__this, method)
extern "C" int32_t m27616_gshared (t4154 * __this, t1486  p0, MethodInfo* method);
#define m27616(__this, p0, method) (( int32_t (*) (t4154 *, t1486 , MethodInfo*))m27616_gshared)(__this, p0, method)
extern "C" bool m27617_gshared (t4154 * __this, t1486  p0, t1486  p1, MethodInfo* method);
#define m27617(__this, p0, p1, method) (( bool (*) (t4154 *, t1486 , t1486 , MethodInfo*))m27617_gshared)(__this, p0, p1, method)
