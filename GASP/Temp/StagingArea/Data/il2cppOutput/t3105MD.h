#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3105;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m17098_gshared (t3105 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m17098(__this, p0, p1, method) (( void (*) (t3105 *, t5 *, t144, MethodInfo*))m17098_gshared)(__this, p0, p1, method)
extern "C" int32_t m17099_gshared (t3105 * __this, uint8_t p0, uint8_t p1, MethodInfo* method);
#define m17099(__this, p0, p1, method) (( int32_t (*) (t3105 *, uint8_t, uint8_t, MethodInfo*))m17099_gshared)(__this, p0, p1, method)
extern "C" t5 * m17100_gshared (t3105 * __this, uint8_t p0, uint8_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m17100(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3105 *, uint8_t, uint8_t, t142 *, t5 *, MethodInfo*))m17100_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m17101_gshared (t3105 * __this, t5 * p0, MethodInfo* method);
#define m17101(__this, p0, method) (( int32_t (*) (t3105 *, t5 *, MethodInfo*))m17101_gshared)(__this, p0, method)
