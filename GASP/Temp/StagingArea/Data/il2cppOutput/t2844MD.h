#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2844;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m14518_gshared (t2844 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14518(__this, p0, p1, method) (( void (*) (t2844 *, t5 *, t144, MethodInfo*))m14518_gshared)(__this, p0, p1, method)
extern "C" uint8_t m14519_gshared (t2844 * __this, uint8_t p0, int32_t p1, MethodInfo* method);
#define m14519(__this, p0, p1, method) (( uint8_t (*) (t2844 *, uint8_t, int32_t, MethodInfo*))m14519_gshared)(__this, p0, p1, method)
extern "C" t5 * m14520_gshared (t2844 * __this, uint8_t p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14520(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2844 *, uint8_t, int32_t, t142 *, t5 *, MethodInfo*))m14520_gshared)(__this, p0, p1, p2, p3, method)
extern "C" uint8_t m14521_gshared (t2844 * __this, t5 * p0, MethodInfo* method);
#define m14521(__this, p0, method) (( uint8_t (*) (t2844 *, t5 *, MethodInfo*))m14521_gshared)(__this, p0, method)
