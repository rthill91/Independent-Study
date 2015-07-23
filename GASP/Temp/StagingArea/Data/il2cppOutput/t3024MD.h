#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3024;
struct t5;
struct t3015;

extern "C" void m16221_gshared (t3024 * __this, t3015 * p0, MethodInfo* method);
#define m16221(__this, p0, method) (( void (*) (t3024 *, t3015 *, MethodInfo*))m16221_gshared)(__this, p0, method)
extern "C" t5 * m16222_gshared (t3024 * __this, MethodInfo* method);
#define m16222(__this, method) (( t5 * (*) (t3024 *, MethodInfo*))m16222_gshared)(__this, method)
extern "C" void m16223_gshared (t3024 * __this, MethodInfo* method);
#define m16223(__this, method) (( void (*) (t3024 *, MethodInfo*))m16223_gshared)(__this, method)
extern "C" bool m16224_gshared (t3024 * __this, MethodInfo* method);
#define m16224(__this, method) (( bool (*) (t3024 *, MethodInfo*))m16224_gshared)(__this, method)
extern "C" int32_t m16225_gshared (t3024 * __this, MethodInfo* method);
#define m16225(__this, method) (( int32_t (*) (t3024 *, MethodInfo*))m16225_gshared)(__this, method)
