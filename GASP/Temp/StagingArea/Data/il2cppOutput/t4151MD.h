#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4151;
struct t5;
#include "t1486.h"

extern "C" void m27602_gshared (t4151 * __this, MethodInfo* method);
#define m27602(__this, method) (( void (*) (t4151 *, MethodInfo*))m27602_gshared)(__this, method)
extern "C" void m27603_gshared (t5 * __this , MethodInfo* method);
#define m27603(__this , method) (( void (*) (t5 * , MethodInfo*))m27603_gshared)(__this , method)
extern "C" int32_t m27604_gshared (t4151 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m27604(__this, p0, p1, method) (( int32_t (*) (t4151 *, t5 *, t5 *, MethodInfo*))m27604_gshared)(__this, p0, p1, method)
extern "C" t4151 * m27605_gshared (t5 * __this , MethodInfo* method);
#define m27605(__this , method) (( t4151 * (*) (t5 * , MethodInfo*))m27605_gshared)(__this , method)
