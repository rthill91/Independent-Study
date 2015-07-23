#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2854;
struct t5;
struct t36;
#include "t2853.h"

extern "C" void m14576_gshared (t2854 * __this, t36 * p0, MethodInfo* method);
#define m14576(__this, p0, method) (( void (*) (t2854 *, t36 *, MethodInfo*))m14576_gshared)(__this, p0, method)
extern "C" t5 * m14577_gshared (t2854 * __this, MethodInfo* method);
#define m14577(__this, method) (( t5 * (*) (t2854 *, MethodInfo*))m14577_gshared)(__this, method)
extern "C" void m14578_gshared (t2854 * __this, MethodInfo* method);
#define m14578(__this, method) (( void (*) (t2854 *, MethodInfo*))m14578_gshared)(__this, method)
extern "C" bool m14579_gshared (t2854 * __this, MethodInfo* method);
#define m14579(__this, method) (( bool (*) (t2854 *, MethodInfo*))m14579_gshared)(__this, method)
extern "C" t2853  m14580_gshared (t2854 * __this, MethodInfo* method);
#define m14580(__this, method) (( t2853  (*) (t2854 *, MethodInfo*))m14580_gshared)(__this, method)
