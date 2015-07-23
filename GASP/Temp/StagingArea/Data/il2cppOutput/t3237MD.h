#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3237;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3226.h"

extern "C" void m18387_gshared (t3237 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m18387(__this, p0, p1, method) (( void (*) (t3237 *, t5 *, t144, MethodInfo*))m18387_gshared)(__this, p0, p1, method)
extern "C" t3226  m18389_gshared (t3237 * __this, int32_t p0, t5 * p1, MethodInfo* method);
#define m18389(__this, p0, p1, method) (( t3226  (*) (t3237 *, int32_t, t5 *, MethodInfo*))m18389_gshared)(__this, p0, p1, method)
extern "C" t5 * m18391_gshared (t3237 * __this, int32_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m18391(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3237 *, int32_t, t5 *, t142 *, t5 *, MethodInfo*))m18391_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3226  m18393_gshared (t3237 * __this, t5 * p0, MethodInfo* method);
#define m18393(__this, p0, method) (( t3226  (*) (t3237 *, t5 *, MethodInfo*))m18393_gshared)(__this, p0, method)
