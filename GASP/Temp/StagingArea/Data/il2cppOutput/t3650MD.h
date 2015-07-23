#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3650;
struct t3649;
struct t5;

extern "C" void m22526_gshared (t3650 * __this, t3649 * p0, t5 * p1, MethodInfo* method);
#define m22526(__this, p0, p1, method) (( void (*) (t3650 *, t3649 *, t5 *, MethodInfo*))m22526_gshared)(__this, p0, p1, method)
extern "C" void m22527_gshared (t3650 * __this, t3649 * p0, t5 * p1, t3650 * p2, t3650 * p3, MethodInfo* method);
#define m22527(__this, p0, p1, p2, p3, method) (( void (*) (t3650 *, t3649 *, t5 *, t3650 *, t3650 *, MethodInfo*))m22527_gshared)(__this, p0, p1, p2, p3, method)
extern "C" void m22528_gshared (t3650 * __this, MethodInfo* method);
#define m22528(__this, method) (( void (*) (t3650 *, MethodInfo*))m22528_gshared)(__this, method)
extern "C" t3649 * m22529_gshared (t3650 * __this, MethodInfo* method);
#define m22529(__this, method) (( t3649 * (*) (t3650 *, MethodInfo*))m22529_gshared)(__this, method)
extern "C" t3650 * m22530_gshared (t3650 * __this, MethodInfo* method);
#define m22530(__this, method) (( t3650 * (*) (t3650 *, MethodInfo*))m22530_gshared)(__this, method)
extern "C" t5 * m22531_gshared (t3650 * __this, MethodInfo* method);
#define m22531(__this, method) (( t5 * (*) (t3650 *, MethodInfo*))m22531_gshared)(__this, method)
