#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3302;
struct t5;
struct t36;
#include "t760.h"

extern "C" void m19134_gshared (t3302 * __this, t36 * p0, MethodInfo* method);
#define m19134(__this, p0, method) (( void (*) (t3302 *, t36 *, MethodInfo*))m19134_gshared)(__this, p0, method)
extern "C" t5 * m19135_gshared (t3302 * __this, MethodInfo* method);
#define m19135(__this, method) (( t5 * (*) (t3302 *, MethodInfo*))m19135_gshared)(__this, method)
extern "C" void m19136_gshared (t3302 * __this, MethodInfo* method);
#define m19136(__this, method) (( void (*) (t3302 *, MethodInfo*))m19136_gshared)(__this, method)
extern "C" bool m19137_gshared (t3302 * __this, MethodInfo* method);
#define m19137(__this, method) (( bool (*) (t3302 *, MethodInfo*))m19137_gshared)(__this, method)
extern "C" t760  m19138_gshared (t3302 * __this, MethodInfo* method);
#define m19138(__this, method) (( t760  (*) (t3302 *, MethodInfo*))m19138_gshared)(__this, method)
