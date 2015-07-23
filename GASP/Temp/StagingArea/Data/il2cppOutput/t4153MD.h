#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4153;
struct t5;
#include "t1486.h"

extern "C" void m27610_gshared (t4153 * __this, MethodInfo* method);
#define m27610(__this, method) (( void (*) (t4153 *, MethodInfo*))m27610_gshared)(__this, method)
extern "C" void m27611_gshared (t5 * __this , MethodInfo* method);
#define m27611(__this , method) (( void (*) (t5 * , MethodInfo*))m27611_gshared)(__this , method)
extern "C" int32_t m27612_gshared (t4153 * __this, t5 * p0, MethodInfo* method);
#define m27612(__this, p0, method) (( int32_t (*) (t4153 *, t5 *, MethodInfo*))m27612_gshared)(__this, p0, method)
extern "C" bool m27613_gshared (t4153 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m27613(__this, p0, p1, method) (( bool (*) (t4153 *, t5 *, t5 *, MethodInfo*))m27613_gshared)(__this, p0, p1, method)
extern "C" t4153 * m27614_gshared (t5 * __this , MethodInfo* method);
#define m27614(__this , method) (( t4153 * (*) (t5 * , MethodInfo*))m27614_gshared)(__this , method)
