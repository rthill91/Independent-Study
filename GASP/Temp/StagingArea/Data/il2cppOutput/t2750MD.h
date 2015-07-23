#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2750;
struct t5;

extern "C" void m13711_gshared (t2750 * __this, MethodInfo* method);
#define m13711(__this, method) (( void (*) (t2750 *, MethodInfo*))m13711_gshared)(__this, method)
extern "C" int32_t m13712_gshared (t2750 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m13712(__this, p0, p1, method) (( int32_t (*) (t2750 *, t5 *, t5 *, MethodInfo*))m13712_gshared)(__this, p0, p1, method)
