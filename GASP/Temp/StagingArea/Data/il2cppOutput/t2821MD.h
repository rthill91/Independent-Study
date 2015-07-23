#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2821;
struct t5;
struct t43;

extern "C" void m14295_gshared (t2821 * __this, t43 * p0, MethodInfo* method);
#define m14295(__this, p0, method) (( void (*) (t2821 *, t43 *, MethodInfo*))m14295_gshared)(__this, p0, method)
extern "C" t5 * m14296_gshared (t2821 * __this, MethodInfo* method);
#define m14296(__this, method) (( t5 * (*) (t2821 *, MethodInfo*))m14296_gshared)(__this, method)
extern "C" void m14297_gshared (t2821 * __this, MethodInfo* method);
#define m14297(__this, method) (( void (*) (t2821 *, MethodInfo*))m14297_gshared)(__this, method)
extern "C" bool m14298_gshared (t2821 * __this, MethodInfo* method);
#define m14298(__this, method) (( bool (*) (t2821 *, MethodInfo*))m14298_gshared)(__this, method)
extern "C" uint8_t m14299_gshared (t2821 * __this, MethodInfo* method);
#define m14299(__this, method) (( uint8_t (*) (t2821 *, MethodInfo*))m14299_gshared)(__this, method)
