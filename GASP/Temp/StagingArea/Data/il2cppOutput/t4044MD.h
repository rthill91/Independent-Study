#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4044;
struct t5;
struct t36;
#include "t4043.h"

extern "C" void m26885_gshared (t4044 * __this, t36 * p0, MethodInfo* method);
#define m26885(__this, p0, method) (( void (*) (t4044 *, t36 *, MethodInfo*))m26885_gshared)(__this, p0, method)
extern "C" t5 * m26886_gshared (t4044 * __this, MethodInfo* method);
#define m26886(__this, method) (( t5 * (*) (t4044 *, MethodInfo*))m26886_gshared)(__this, method)
extern "C" void m26887_gshared (t4044 * __this, MethodInfo* method);
#define m26887(__this, method) (( void (*) (t4044 *, MethodInfo*))m26887_gshared)(__this, method)
extern "C" bool m26888_gshared (t4044 * __this, MethodInfo* method);
#define m26888(__this, method) (( bool (*) (t4044 *, MethodInfo*))m26888_gshared)(__this, method)
extern "C" t4043  m26889_gshared (t4044 * __this, MethodInfo* method);
#define m26889(__this, method) (( t4043  (*) (t4044 *, MethodInfo*))m26889_gshared)(__this, method)
