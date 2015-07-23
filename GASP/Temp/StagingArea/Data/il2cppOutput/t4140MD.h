#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4140;
#include "t405.h"

extern "C" void m27551_gshared (t4140 * __this, MethodInfo* method);
#define m27551(__this, method) (( void (*) (t4140 *, MethodInfo*))m27551_gshared)(__this, method)
extern "C" int32_t m27552_gshared (t4140 * __this, t405  p0, t405  p1, MethodInfo* method);
#define m27552(__this, p0, p1, method) (( int32_t (*) (t4140 *, t405 , t405 , MethodInfo*))m27552_gshared)(__this, p0, p1, method)
