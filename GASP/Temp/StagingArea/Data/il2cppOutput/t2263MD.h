#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2263;
#include "t1486.h"

extern "C" void m12910_gshared (t2263 * __this, MethodInfo* method);
#define m12910(__this, method) (( void (*) (t2263 *, MethodInfo*))m12910_gshared)(__this, method)
extern "C" int32_t m27608_gshared (t2263 * __this, t1486  p0, MethodInfo* method);
#define m27608(__this, p0, method) (( int32_t (*) (t2263 *, t1486 , MethodInfo*))m27608_gshared)(__this, p0, method)
extern "C" bool m27609_gshared (t2263 * __this, t1486  p0, t1486  p1, MethodInfo* method);
#define m27609(__this, p0, p1, method) (( bool (*) (t2263 *, t1486 , t1486 , MethodInfo*))m27609_gshared)(__this, p0, p1, method)
