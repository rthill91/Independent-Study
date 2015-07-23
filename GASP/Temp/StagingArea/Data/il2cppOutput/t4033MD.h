#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4033;
struct t5;
struct t36;
#include "t4032.h"

extern "C" void m26802_gshared (t4033 * __this, t36 * p0, MethodInfo* method);
#define m26802(__this, p0, method) (( void (*) (t4033 *, t36 *, MethodInfo*))m26802_gshared)(__this, p0, method)
extern "C" t5 * m26803_gshared (t4033 * __this, MethodInfo* method);
#define m26803(__this, method) (( t5 * (*) (t4033 *, MethodInfo*))m26803_gshared)(__this, method)
extern "C" void m26804_gshared (t4033 * __this, MethodInfo* method);
#define m26804(__this, method) (( void (*) (t4033 *, MethodInfo*))m26804_gshared)(__this, method)
extern "C" bool m26805_gshared (t4033 * __this, MethodInfo* method);
#define m26805(__this, method) (( bool (*) (t4033 *, MethodInfo*))m26805_gshared)(__this, method)
extern "C" t4032  m26806_gshared (t4033 * __this, MethodInfo* method);
#define m26806(__this, method) (( t4032  (*) (t4033 *, MethodInfo*))m26806_gshared)(__this, method)
