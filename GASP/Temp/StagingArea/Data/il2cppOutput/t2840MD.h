#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2840;
struct t5;
struct t36;
#include "t2839.h"

extern "C" void m14482_gshared (t2840 * __this, t36 * p0, MethodInfo* method);
#define m14482(__this, p0, method) (( void (*) (t2840 *, t36 *, MethodInfo*))m14482_gshared)(__this, p0, method)
extern "C" t5 * m14483_gshared (t2840 * __this, MethodInfo* method);
#define m14483(__this, method) (( t5 * (*) (t2840 *, MethodInfo*))m14483_gshared)(__this, method)
extern "C" void m14484_gshared (t2840 * __this, MethodInfo* method);
#define m14484(__this, method) (( void (*) (t2840 *, MethodInfo*))m14484_gshared)(__this, method)
extern "C" bool m14485_gshared (t2840 * __this, MethodInfo* method);
#define m14485(__this, method) (( bool (*) (t2840 *, MethodInfo*))m14485_gshared)(__this, method)
extern "C" t2839  m14486_gshared (t2840 * __this, MethodInfo* method);
#define m14486(__this, method) (( t2839  (*) (t2840 *, MethodInfo*))m14486_gshared)(__this, method)
