#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2828;
struct t5;

extern "C" void m14351_gshared (t2828 * __this, MethodInfo* method);
#define m14351(__this, method) (( void (*) (t2828 *, MethodInfo*))m14351_gshared)(__this, method)
extern "C" void m14352_gshared (t5 * __this , MethodInfo* method);
#define m14352(__this , method) (( void (*) (t5 * , MethodInfo*))m14352_gshared)(__this , method)
extern "C" int32_t m14353_gshared (t2828 * __this, t5 * p0, MethodInfo* method);
#define m14353(__this, p0, method) (( int32_t (*) (t2828 *, t5 *, MethodInfo*))m14353_gshared)(__this, p0, method)
extern "C" bool m14354_gshared (t2828 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m14354(__this, p0, p1, method) (( bool (*) (t2828 *, t5 *, t5 *, MethodInfo*))m14354_gshared)(__this, p0, p1, method)
extern "C" t2828 * m14355_gshared (t5 * __this , MethodInfo* method);
#define m14355(__this , method) (( t2828 * (*) (t5 * , MethodInfo*))m14355_gshared)(__this , method)
