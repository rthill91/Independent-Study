#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3524;
struct t5;
#include "t914.h"

extern "C" void m21436_gshared (t3524 * __this, MethodInfo* method);
#define m21436(__this, method) (( void (*) (t3524 *, MethodInfo*))m21436_gshared)(__this, method)
extern "C" void m21437_gshared (t5 * __this , MethodInfo* method);
#define m21437(__this , method) (( void (*) (t5 * , MethodInfo*))m21437_gshared)(__this , method)
extern "C" int32_t m21438_gshared (t3524 * __this, t5 * p0, MethodInfo* method);
#define m21438(__this, p0, method) (( int32_t (*) (t3524 *, t5 *, MethodInfo*))m21438_gshared)(__this, p0, method)
extern "C" bool m21439_gshared (t3524 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m21439(__this, p0, p1, method) (( bool (*) (t3524 *, t5 *, t5 *, MethodInfo*))m21439_gshared)(__this, p0, p1, method)
extern "C" t3524 * m21440_gshared (t5 * __this , MethodInfo* method);
#define m21440(__this , method) (( t3524 * (*) (t5 * , MethodInfo*))m21440_gshared)(__this , method)
