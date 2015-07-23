#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3018;
struct t5;
struct t36;
#include "t3017.h"

extern "C" void m16167_gshared (t3018 * __this, t36 * p0, MethodInfo* method);
#define m16167(__this, p0, method) (( void (*) (t3018 *, t36 *, MethodInfo*))m16167_gshared)(__this, p0, method)
extern "C" t5 * m16168_gshared (t3018 * __this, MethodInfo* method);
#define m16168(__this, method) (( t5 * (*) (t3018 *, MethodInfo*))m16168_gshared)(__this, method)
extern "C" void m16169_gshared (t3018 * __this, MethodInfo* method);
#define m16169(__this, method) (( void (*) (t3018 *, MethodInfo*))m16169_gshared)(__this, method)
extern "C" bool m16170_gshared (t3018 * __this, MethodInfo* method);
#define m16170(__this, method) (( bool (*) (t3018 *, MethodInfo*))m16170_gshared)(__this, method)
extern "C" t3017  m16171_gshared (t3018 * __this, MethodInfo* method);
#define m16171(__this, method) (( t3017  (*) (t3018 *, MethodInfo*))m16171_gshared)(__this, method)
