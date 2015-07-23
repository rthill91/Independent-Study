#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2261;
#include "t916.h"

extern "C" void m12899_gshared (t2261 * __this, MethodInfo* method);
#define m12899(__this, method) (( void (*) (t2261 *, MethodInfo*))m12899_gshared)(__this, method)
extern "C" int32_t m27591_gshared (t2261 * __this, t916  p0, MethodInfo* method);
#define m27591(__this, p0, method) (( int32_t (*) (t2261 *, t916 , MethodInfo*))m27591_gshared)(__this, p0, method)
extern "C" bool m27592_gshared (t2261 * __this, t916  p0, t916  p1, MethodInfo* method);
#define m27592(__this, p0, p1, method) (( bool (*) (t2261 *, t916 , t916 , MethodInfo*))m27592_gshared)(__this, p0, p1, method)
