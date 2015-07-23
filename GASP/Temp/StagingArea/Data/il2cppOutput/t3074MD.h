#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3074;
struct t5;
struct t36;
#include "t3066.h"

extern "C" void m16666_gshared (t3074 * __this, t36 * p0, MethodInfo* method);
#define m16666(__this, p0, method) (( void (*) (t3074 *, t36 *, MethodInfo*))m16666_gshared)(__this, p0, method)
extern "C" t5 * m16667_gshared (t3074 * __this, MethodInfo* method);
#define m16667(__this, method) (( t5 * (*) (t3074 *, MethodInfo*))m16667_gshared)(__this, method)
extern "C" void m16668_gshared (t3074 * __this, MethodInfo* method);
#define m16668(__this, method) (( void (*) (t3074 *, MethodInfo*))m16668_gshared)(__this, method)
extern "C" bool m16669_gshared (t3074 * __this, MethodInfo* method);
#define m16669(__this, method) (( bool (*) (t3074 *, MethodInfo*))m16669_gshared)(__this, method)
extern "C" t3066  m16670_gshared (t3074 * __this, MethodInfo* method);
#define m16670(__this, method) (( t3066  (*) (t3074 *, MethodInfo*))m16670_gshared)(__this, method)
