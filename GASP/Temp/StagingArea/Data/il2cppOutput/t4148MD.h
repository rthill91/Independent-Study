#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4148;
#include "t916.h"

extern "C" void m27589_gshared (t4148 * __this, MethodInfo* method);
#define m27589(__this, method) (( void (*) (t4148 *, MethodInfo*))m27589_gshared)(__this, method)
extern "C" int32_t m27590_gshared (t4148 * __this, t916  p0, t916  p1, MethodInfo* method);
#define m27590(__this, p0, p1, method) (( int32_t (*) (t4148 *, t916 , t916 , MethodInfo*))m27590_gshared)(__this, p0, p1, method)
