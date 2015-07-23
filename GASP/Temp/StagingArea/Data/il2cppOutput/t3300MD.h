#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3300;
struct t5;
struct t36;
#include "t725.h"

extern "C" void m19123_gshared (t3300 * __this, t36 * p0, MethodInfo* method);
#define m19123(__this, p0, method) (( void (*) (t3300 *, t36 *, MethodInfo*))m19123_gshared)(__this, p0, method)
extern "C" t5 * m19124_gshared (t3300 * __this, MethodInfo* method);
#define m19124(__this, method) (( t5 * (*) (t3300 *, MethodInfo*))m19124_gshared)(__this, method)
extern "C" void m19125_gshared (t3300 * __this, MethodInfo* method);
#define m19125(__this, method) (( void (*) (t3300 *, MethodInfo*))m19125_gshared)(__this, method)
extern "C" bool m19126_gshared (t3300 * __this, MethodInfo* method);
#define m19126(__this, method) (( bool (*) (t3300 *, MethodInfo*))m19126_gshared)(__this, method)
extern "C" t725  m19127_gshared (t3300 * __this, MethodInfo* method);
#define m19127(__this, method) (( t725  (*) (t3300 *, MethodInfo*))m19127_gshared)(__this, method)
