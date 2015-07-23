#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3742;
struct t5;
#include "t1168.h"

extern "C" void m23599_gshared (t3742 * __this, MethodInfo* method);
#define m23599(__this, method) (( void (*) (t3742 *, MethodInfo*))m23599_gshared)(__this, method)
extern "C" void m23600_gshared (t5 * __this , MethodInfo* method);
#define m23600(__this , method) (( void (*) (t5 * , MethodInfo*))m23600_gshared)(__this , method)
extern "C" int32_t m23601_gshared (t3742 * __this, t5 * p0, MethodInfo* method);
#define m23601(__this, p0, method) (( int32_t (*) (t3742 *, t5 *, MethodInfo*))m23601_gshared)(__this, p0, method)
extern "C" bool m23602_gshared (t3742 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m23602(__this, p0, p1, method) (( bool (*) (t3742 *, t5 *, t5 *, MethodInfo*))m23602_gshared)(__this, p0, p1, method)
extern "C" t3742 * m23603_gshared (t5 * __this , MethodInfo* method);
#define m23603(__this , method) (( t3742 * (*) (t5 * , MethodInfo*))m23603_gshared)(__this , method)
