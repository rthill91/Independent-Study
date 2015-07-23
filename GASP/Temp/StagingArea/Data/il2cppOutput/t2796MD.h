#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2796;
struct t5;
struct t36;
#include "t269.h"

extern "C" void m14101_gshared (t2796 * __this, t36 * p0, MethodInfo* method);
#define m14101(__this, p0, method) (( void (*) (t2796 *, t36 *, MethodInfo*))m14101_gshared)(__this, p0, method)
extern "C" t5 * m14102_gshared (t2796 * __this, MethodInfo* method);
#define m14102(__this, method) (( t5 * (*) (t2796 *, MethodInfo*))m14102_gshared)(__this, method)
extern "C" void m14103_gshared (t2796 * __this, MethodInfo* method);
#define m14103(__this, method) (( void (*) (t2796 *, MethodInfo*))m14103_gshared)(__this, method)
extern "C" bool m14104_gshared (t2796 * __this, MethodInfo* method);
#define m14104(__this, method) (( bool (*) (t2796 *, MethodInfo*))m14104_gshared)(__this, method)
extern "C" t269  m14105_gshared (t2796 * __this, MethodInfo* method);
#define m14105(__this, method) (( t269  (*) (t2796 *, MethodInfo*))m14105_gshared)(__this, method)
