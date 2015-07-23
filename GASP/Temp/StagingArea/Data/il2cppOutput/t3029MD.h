#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3029;
struct t5;
struct t36;
#include "t3028.h"

extern "C" void m16250_gshared (t3029 * __this, t36 * p0, MethodInfo* method);
#define m16250(__this, p0, method) (( void (*) (t3029 *, t36 *, MethodInfo*))m16250_gshared)(__this, p0, method)
extern "C" t5 * m16251_gshared (t3029 * __this, MethodInfo* method);
#define m16251(__this, method) (( t5 * (*) (t3029 *, MethodInfo*))m16251_gshared)(__this, method)
extern "C" void m16252_gshared (t3029 * __this, MethodInfo* method);
#define m16252(__this, method) (( void (*) (t3029 *, MethodInfo*))m16252_gshared)(__this, method)
extern "C" bool m16253_gshared (t3029 * __this, MethodInfo* method);
#define m16253(__this, method) (( bool (*) (t3029 *, MethodInfo*))m16253_gshared)(__this, method)
extern "C" t3028  m16254_gshared (t3029 * __this, MethodInfo* method);
#define m16254(__this, method) (( t3028  (*) (t3029 *, MethodInfo*))m16254_gshared)(__this, method)
