#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2830;

extern "C" void m14359_gshared (t2830 * __this, MethodInfo* method);
#define m14359(__this, method) (( void (*) (t2830 *, MethodInfo*))m14359_gshared)(__this, method)
extern "C" int32_t m14360_gshared (t2830 * __this, uint8_t p0, MethodInfo* method);
#define m14360(__this, p0, method) (( int32_t (*) (t2830 *, uint8_t, MethodInfo*))m14360_gshared)(__this, p0, method)
extern "C" bool m14361_gshared (t2830 * __this, uint8_t p0, uint8_t p1, MethodInfo* method);
#define m14361(__this, p0, p1, method) (( bool (*) (t2830 *, uint8_t, uint8_t, MethodInfo*))m14361_gshared)(__this, p0, p1, method)
