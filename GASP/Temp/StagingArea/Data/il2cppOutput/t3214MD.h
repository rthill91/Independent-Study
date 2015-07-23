#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3214;
struct t5;
struct t36;

extern "C" void m18210_gshared (t3214 * __this, t36 * p0, MethodInfo* method);
#define m18210(__this, p0, method) (( void (*) (t3214 *, t36 *, MethodInfo*))m18210_gshared)(__this, p0, method)
extern "C" t5 * m18211_gshared (t3214 * __this, MethodInfo* method);
#define m18211(__this, method) (( t5 * (*) (t3214 *, MethodInfo*))m18211_gshared)(__this, method)
extern "C" void m18212_gshared (t3214 * __this, MethodInfo* method);
#define m18212(__this, method) (( void (*) (t3214 *, MethodInfo*))m18212_gshared)(__this, method)
extern "C" bool m18213_gshared (t3214 * __this, MethodInfo* method);
#define m18213(__this, method) (( bool (*) (t3214 *, MethodInfo*))m18213_gshared)(__this, method)
extern "C" uint32_t m18214_gshared (t3214 * __this, MethodInfo* method);
#define m18214(__this, method) (( uint32_t (*) (t3214 *, MethodInfo*))m18214_gshared)(__this, method)
