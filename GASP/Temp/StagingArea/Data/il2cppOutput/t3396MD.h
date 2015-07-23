#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3396;
struct t5;
struct t2;

extern "C" void m20272_gshared (t3396 * __this, uint64_t p0, t5 * p1, MethodInfo* method);
#define m20272(__this, p0, p1, method) (( void (*) (t3396 *, uint64_t, t5 *, MethodInfo*))m20272_gshared)(__this, p0, p1, method)
extern "C" uint64_t m20273_gshared (t3396 * __this, MethodInfo* method);
#define m20273(__this, method) (( uint64_t (*) (t3396 *, MethodInfo*))m20273_gshared)(__this, method)
extern "C" void m20274_gshared (t3396 * __this, uint64_t p0, MethodInfo* method);
#define m20274(__this, p0, method) (( void (*) (t3396 *, uint64_t, MethodInfo*))m20274_gshared)(__this, p0, method)
extern "C" t5 * m20275_gshared (t3396 * __this, MethodInfo* method);
#define m20275(__this, method) (( t5 * (*) (t3396 *, MethodInfo*))m20275_gshared)(__this, method)
extern "C" void m20276_gshared (t3396 * __this, t5 * p0, MethodInfo* method);
#define m20276(__this, p0, method) (( void (*) (t3396 *, t5 *, MethodInfo*))m20276_gshared)(__this, p0, method)
extern "C" t2* m20277_gshared (t3396 * __this, MethodInfo* method);
#define m20277(__this, method) (( t2* (*) (t3396 *, MethodInfo*))m20277_gshared)(__this, method)
