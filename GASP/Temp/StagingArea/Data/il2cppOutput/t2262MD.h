#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2262;
#include "t1486.h"

extern "C" void m12909_gshared (t2262 * __this, MethodInfo* method);
#define m12909(__this, method) (( void (*) (t2262 *, MethodInfo*))m12909_gshared)(__this, method)
extern "C" int32_t m27601_gshared (t2262 * __this, t1486  p0, t1486  p1, MethodInfo* method);
#define m27601(__this, p0, p1, method) (( int32_t (*) (t2262 *, t1486 , t1486 , MethodInfo*))m27601_gshared)(__this, p0, p1, method)
