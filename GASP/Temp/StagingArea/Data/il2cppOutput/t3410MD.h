#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3410;
struct t5;

extern "C" void m20370_gshared (t3410 * __this, MethodInfo* method);
#define m20370(__this, method) (( void (*) (t3410 *, MethodInfo*))m20370_gshared)(__this, method)
extern "C" void m20371_gshared (t5 * __this , MethodInfo* method);
#define m20371(__this , method) (( void (*) (t5 * , MethodInfo*))m20371_gshared)(__this , method)
extern "C" int32_t m20372_gshared (t3410 * __this, t5 * p0, MethodInfo* method);
#define m20372(__this, p0, method) (( int32_t (*) (t3410 *, t5 *, MethodInfo*))m20372_gshared)(__this, p0, method)
extern "C" bool m20373_gshared (t3410 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m20373(__this, p0, p1, method) (( bool (*) (t3410 *, t5 *, t5 *, MethodInfo*))m20373_gshared)(__this, p0, p1, method)
extern "C" t3410 * m20374_gshared (t5 * __this , MethodInfo* method);
#define m20374(__this , method) (( t3410 * (*) (t5 * , MethodInfo*))m20374_gshared)(__this , method)
