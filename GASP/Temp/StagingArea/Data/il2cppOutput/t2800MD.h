#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2800;
struct t5;
struct t36;
#include "t2799.h"

extern "C" void m14122_gshared (t2800 * __this, t36 * p0, MethodInfo* method);
#define m14122(__this, p0, method) (( void (*) (t2800 *, t36 *, MethodInfo*))m14122_gshared)(__this, p0, method)
extern "C" t5 * m14123_gshared (t2800 * __this, MethodInfo* method);
#define m14123(__this, method) (( t5 * (*) (t2800 *, MethodInfo*))m14123_gshared)(__this, method)
extern "C" void m14124_gshared (t2800 * __this, MethodInfo* method);
#define m14124(__this, method) (( void (*) (t2800 *, MethodInfo*))m14124_gshared)(__this, method)
extern "C" bool m14125_gshared (t2800 * __this, MethodInfo* method);
#define m14125(__this, method) (( bool (*) (t2800 *, MethodInfo*))m14125_gshared)(__this, method)
extern "C" t2799  m14126_gshared (t2800 * __this, MethodInfo* method);
#define m14126(__this, method) (( t2799  (*) (t2800 *, MethodInfo*))m14126_gshared)(__this, method)
