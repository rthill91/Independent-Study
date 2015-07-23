#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4152;
#include "t1486.h"

extern "C" void m27606_gshared (t4152 * __this, MethodInfo* method);
#define m27606(__this, method) (( void (*) (t4152 *, MethodInfo*))m27606_gshared)(__this, method)
extern "C" int32_t m27607_gshared (t4152 * __this, t1486  p0, t1486  p1, MethodInfo* method);
#define m27607(__this, p0, p1, method) (( int32_t (*) (t4152 *, t1486 , t1486 , MethodInfo*))m27607_gshared)(__this, p0, p1, method)
