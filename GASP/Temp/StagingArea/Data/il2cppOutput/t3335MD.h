#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3335;
struct t5;
struct t2;

extern "C" void m19673_gshared (t3335 * __this, t5 * p0, int64_t p1, MethodInfo* method);
#define m19673(__this, p0, p1, method) (( void (*) (t3335 *, t5 *, int64_t, MethodInfo*))m19673_gshared)(__this, p0, p1, method)
extern "C" t5 * m19674_gshared (t3335 * __this, MethodInfo* method);
#define m19674(__this, method) (( t5 * (*) (t3335 *, MethodInfo*))m19674_gshared)(__this, method)
extern "C" void m19675_gshared (t3335 * __this, t5 * p0, MethodInfo* method);
#define m19675(__this, p0, method) (( void (*) (t3335 *, t5 *, MethodInfo*))m19675_gshared)(__this, p0, method)
extern "C" int64_t m19676_gshared (t3335 * __this, MethodInfo* method);
#define m19676(__this, method) (( int64_t (*) (t3335 *, MethodInfo*))m19676_gshared)(__this, method)
extern "C" void m19677_gshared (t3335 * __this, int64_t p0, MethodInfo* method);
#define m19677(__this, p0, method) (( void (*) (t3335 *, int64_t, MethodInfo*))m19677_gshared)(__this, p0, method)
extern "C" t2* m19678_gshared (t3335 * __this, MethodInfo* method);
#define m19678(__this, method) (( t2* (*) (t3335 *, MethodInfo*))m19678_gshared)(__this, method)
