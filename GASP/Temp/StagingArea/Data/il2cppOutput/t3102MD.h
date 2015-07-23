#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3102;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m17088_gshared (t3102 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m17088(__this, p0, p1, method) (( void (*) (t3102 *, t5 *, t144, MethodInfo*))m17088_gshared)(__this, p0, p1, method)
extern "C" bool m17089_gshared (t3102 * __this, uint8_t p0, MethodInfo* method);
#define m17089(__this, p0, method) (( bool (*) (t3102 *, uint8_t, MethodInfo*))m17089_gshared)(__this, p0, method)
extern "C" t5 * m17090_gshared (t3102 * __this, uint8_t p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m17090(__this, p0, p1, p2, method) (( t5 * (*) (t3102 *, uint8_t, t142 *, t5 *, MethodInfo*))m17090_gshared)(__this, p0, p1, p2, method)
extern "C" bool m17091_gshared (t3102 * __this, t5 * p0, MethodInfo* method);
#define m17091(__this, p0, method) (( bool (*) (t3102 *, t5 *, MethodInfo*))m17091_gshared)(__this, p0, method)
