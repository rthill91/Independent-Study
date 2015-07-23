#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2790;
struct t5;
struct t36;
#include "t2789.h"

extern "C" void m14036_gshared (t2790 * __this, t36 * p0, MethodInfo* method);
#define m14036(__this, p0, method) (( void (*) (t2790 *, t36 *, MethodInfo*))m14036_gshared)(__this, p0, method)
extern "C" t5 * m14037_gshared (t2790 * __this, MethodInfo* method);
#define m14037(__this, method) (( t5 * (*) (t2790 *, MethodInfo*))m14037_gshared)(__this, method)
extern "C" void m14038_gshared (t2790 * __this, MethodInfo* method);
#define m14038(__this, method) (( void (*) (t2790 *, MethodInfo*))m14038_gshared)(__this, method)
extern "C" bool m14039_gshared (t2790 * __this, MethodInfo* method);
#define m14039(__this, method) (( bool (*) (t2790 *, MethodInfo*))m14039_gshared)(__this, method)
extern "C" t2789  m14040_gshared (t2790 * __this, MethodInfo* method);
#define m14040(__this, method) (( t2789  (*) (t2790 *, MethodInfo*))m14040_gshared)(__this, method)
