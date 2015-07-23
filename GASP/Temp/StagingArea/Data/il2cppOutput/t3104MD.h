#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3104;

extern "C" void m17096_gshared (t3104 * __this, MethodInfo* method);
#define m17096(__this, method) (( void (*) (t3104 *, MethodInfo*))m17096_gshared)(__this, method)
extern "C" int32_t m17097_gshared (t3104 * __this, uint8_t p0, uint8_t p1, MethodInfo* method);
#define m17097(__this, p0, p1, method) (( int32_t (*) (t3104 *, uint8_t, uint8_t, MethodInfo*))m17097_gshared)(__this, p0, p1, method)
