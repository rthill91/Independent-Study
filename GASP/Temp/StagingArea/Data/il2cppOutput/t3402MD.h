#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3402;
struct t5;
struct t3393;

extern "C" void m20312_gshared (t3402 * __this, t3393 * p0, MethodInfo* method);
#define m20312(__this, p0, method) (( void (*) (t3402 *, t3393 *, MethodInfo*))m20312_gshared)(__this, p0, method)
extern "C" t5 * m20313_gshared (t3402 * __this, MethodInfo* method);
#define m20313(__this, method) (( t5 * (*) (t3402 *, MethodInfo*))m20313_gshared)(__this, method)
extern "C" void m20314_gshared (t3402 * __this, MethodInfo* method);
#define m20314(__this, method) (( void (*) (t3402 *, MethodInfo*))m20314_gshared)(__this, method)
extern "C" bool m20315_gshared (t3402 * __this, MethodInfo* method);
#define m20315(__this, method) (( bool (*) (t3402 *, MethodInfo*))m20315_gshared)(__this, method)
extern "C" uint64_t m20316_gshared (t3402 * __this, MethodInfo* method);
#define m20316(__this, method) (( uint64_t (*) (t3402 *, MethodInfo*))m20316_gshared)(__this, method)
