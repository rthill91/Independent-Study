#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2260;
#include "t916.h"

extern "C" void m12898_gshared (t2260 * __this, MethodInfo* method);
#define m12898(__this, method) (( void (*) (t2260 *, MethodInfo*))m12898_gshared)(__this, method)
extern "C" int32_t m27584_gshared (t2260 * __this, t916  p0, t916  p1, MethodInfo* method);
#define m27584(__this, p0, p1, method) (( int32_t (*) (t2260 *, t916 , t916 , MethodInfo*))m27584_gshared)(__this, p0, p1, method)
