#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4145;
struct t5;
#include "t915.h"

extern "C" void m27572_gshared (t4145 * __this, MethodInfo* method);
#define m27572(__this, method) (( void (*) (t4145 *, MethodInfo*))m27572_gshared)(__this, method)
extern "C" void m27573_gshared (t5 * __this , MethodInfo* method);
#define m27573(__this , method) (( void (*) (t5 * , MethodInfo*))m27573_gshared)(__this , method)
extern "C" int32_t m27574_gshared (t4145 * __this, t5 * p0, MethodInfo* method);
#define m27574(__this, p0, method) (( int32_t (*) (t4145 *, t5 *, MethodInfo*))m27574_gshared)(__this, p0, method)
extern "C" bool m27575_gshared (t4145 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m27575(__this, p0, p1, method) (( bool (*) (t4145 *, t5 *, t5 *, MethodInfo*))m27575_gshared)(__this, p0, p1, method)
extern "C" t4145 * m27576_gshared (t5 * __this , MethodInfo* method);
#define m27576(__this , method) (( t4145 * (*) (t5 * , MethodInfo*))m27576_gshared)(__this , method)
