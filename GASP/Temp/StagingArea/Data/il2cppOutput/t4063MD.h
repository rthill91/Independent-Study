#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4063;
struct t5;
struct t36;
#include "t4062.h"

extern "C" void m27049_gshared (t4063 * __this, t36 * p0, MethodInfo* method);
#define m27049(__this, p0, method) (( void (*) (t4063 *, t36 *, MethodInfo*))m27049_gshared)(__this, p0, method)
extern "C" t5 * m27050_gshared (t4063 * __this, MethodInfo* method);
#define m27050(__this, method) (( t5 * (*) (t4063 *, MethodInfo*))m27050_gshared)(__this, method)
extern "C" void m27051_gshared (t4063 * __this, MethodInfo* method);
#define m27051(__this, method) (( void (*) (t4063 *, MethodInfo*))m27051_gshared)(__this, method)
extern "C" bool m27052_gshared (t4063 * __this, MethodInfo* method);
#define m27052(__this, method) (( bool (*) (t4063 *, MethodInfo*))m27052_gshared)(__this, method)
extern "C" t4062  m27053_gshared (t4063 * __this, MethodInfo* method);
#define m27053(__this, method) (( t4062  (*) (t4063 *, MethodInfo*))m27053_gshared)(__this, method)
