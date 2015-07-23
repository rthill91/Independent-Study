#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4147;
struct t5;
#include "t916.h"

extern "C" void m27585_gshared (t4147 * __this, MethodInfo* method);
#define m27585(__this, method) (( void (*) (t4147 *, MethodInfo*))m27585_gshared)(__this, method)
extern "C" void m27586_gshared (t5 * __this , MethodInfo* method);
#define m27586(__this , method) (( void (*) (t5 * , MethodInfo*))m27586_gshared)(__this , method)
extern "C" int32_t m27587_gshared (t4147 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m27587(__this, p0, p1, method) (( int32_t (*) (t4147 *, t5 *, t5 *, MethodInfo*))m27587_gshared)(__this, p0, p1, method)
extern "C" t4147 * m27588_gshared (t5 * __this , MethodInfo* method);
#define m27588(__this , method) (( t4147 * (*) (t5 * , MethodInfo*))m27588_gshared)(__this , method)
