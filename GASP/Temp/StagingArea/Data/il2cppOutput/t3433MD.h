#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3433;
struct t5;
struct t36;
#include "t3432.h"

extern "C" void m20540_gshared (t3433 * __this, t36 * p0, MethodInfo* method);
#define m20540(__this, p0, method) (( void (*) (t3433 *, t36 *, MethodInfo*))m20540_gshared)(__this, p0, method)
extern "C" t5 * m20541_gshared (t3433 * __this, MethodInfo* method);
#define m20541(__this, method) (( t5 * (*) (t3433 *, MethodInfo*))m20541_gshared)(__this, method)
extern "C" void m20542_gshared (t3433 * __this, MethodInfo* method);
#define m20542(__this, method) (( void (*) (t3433 *, MethodInfo*))m20542_gshared)(__this, method)
extern "C" bool m20543_gshared (t3433 * __this, MethodInfo* method);
#define m20543(__this, method) (( bool (*) (t3433 *, MethodInfo*))m20543_gshared)(__this, method)
extern "C" t3432  m20544_gshared (t3433 * __this, MethodInfo* method);
#define m20544(__this, method) (( t3432  (*) (t3433 *, MethodInfo*))m20544_gshared)(__this, method)
