#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3254;
struct t5;
struct t36;
#include "t3253.h"

extern "C" void m18604_gshared (t3254 * __this, t36 * p0, MethodInfo* method);
#define m18604(__this, p0, method) (( void (*) (t3254 *, t36 *, MethodInfo*))m18604_gshared)(__this, p0, method)
extern "C" t5 * m18605_gshared (t3254 * __this, MethodInfo* method);
#define m18605(__this, method) (( t5 * (*) (t3254 *, MethodInfo*))m18605_gshared)(__this, method)
extern "C" void m18606_gshared (t3254 * __this, MethodInfo* method);
#define m18606(__this, method) (( void (*) (t3254 *, MethodInfo*))m18606_gshared)(__this, method)
extern "C" bool m18607_gshared (t3254 * __this, MethodInfo* method);
#define m18607(__this, method) (( bool (*) (t3254 *, MethodInfo*))m18607_gshared)(__this, method)
extern "C" t3253  m18608_gshared (t3254 * __this, MethodInfo* method);
#define m18608(__this, method) (( t3253  (*) (t3254 *, MethodInfo*))m18608_gshared)(__this, method)
