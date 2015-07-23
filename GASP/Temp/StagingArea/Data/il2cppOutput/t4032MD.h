#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4032;
struct t5;
struct t2;

extern "C" void m26796_gshared (t4032 * __this, t5 * p0, uint8_t p1, MethodInfo* method);
#define m26796(__this, p0, p1, method) (( void (*) (t4032 *, t5 *, uint8_t, MethodInfo*))m26796_gshared)(__this, p0, p1, method)
extern "C" t5 * m26797_gshared (t4032 * __this, MethodInfo* method);
#define m26797(__this, method) (( t5 * (*) (t4032 *, MethodInfo*))m26797_gshared)(__this, method)
extern "C" void m26798_gshared (t4032 * __this, t5 * p0, MethodInfo* method);
#define m26798(__this, p0, method) (( void (*) (t4032 *, t5 *, MethodInfo*))m26798_gshared)(__this, p0, method)
extern "C" uint8_t m26799_gshared (t4032 * __this, MethodInfo* method);
#define m26799(__this, method) (( uint8_t (*) (t4032 *, MethodInfo*))m26799_gshared)(__this, method)
extern "C" void m26800_gshared (t4032 * __this, uint8_t p0, MethodInfo* method);
#define m26800(__this, p0, method) (( void (*) (t4032 *, uint8_t, MethodInfo*))m26800_gshared)(__this, p0, method)
extern "C" t2* m26801_gshared (t4032 * __this, MethodInfo* method);
#define m26801(__this, method) (( t2* (*) (t4032 *, MethodInfo*))m26801_gshared)(__this, method)
