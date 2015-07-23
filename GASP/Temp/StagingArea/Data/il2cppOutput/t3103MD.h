#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3103;
struct t5;

extern "C" void m17092_gshared (t3103 * __this, MethodInfo* method);
#define m17092(__this, method) (( void (*) (t3103 *, MethodInfo*))m17092_gshared)(__this, method)
extern "C" void m17093_gshared (t5 * __this , MethodInfo* method);
#define m17093(__this , method) (( void (*) (t5 * , MethodInfo*))m17093_gshared)(__this , method)
extern "C" int32_t m17094_gshared (t3103 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m17094(__this, p0, p1, method) (( int32_t (*) (t3103 *, t5 *, t5 *, MethodInfo*))m17094_gshared)(__this, p0, p1, method)
extern "C" t3103 * m17095_gshared (t5 * __this , MethodInfo* method);
#define m17095(__this , method) (( t3103 * (*) (t5 * , MethodInfo*))m17095_gshared)(__this , method)
