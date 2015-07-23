#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3521;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t914.h"

extern "C" void m21418_gshared (t3521 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m21418(__this, p0, p1, method) (( void (*) (t3521 *, t5 *, t144, MethodInfo*))m21418_gshared)(__this, p0, p1, method)
extern "C" t914  m21419_gshared (t3521 * __this, t5 * p0, t914  p1, MethodInfo* method);
#define m21419(__this, p0, p1, method) (( t914  (*) (t3521 *, t5 *, t914 , MethodInfo*))m21419_gshared)(__this, p0, p1, method)
extern "C" t5 * m21420_gshared (t3521 * __this, t5 * p0, t914  p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m21420(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3521 *, t5 *, t914 , t142 *, t5 *, MethodInfo*))m21420_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t914  m21421_gshared (t3521 * __this, t5 * p0, MethodInfo* method);
#define m21421(__this, p0, method) (( t914  (*) (t3521 *, t5 *, MethodInfo*))m21421_gshared)(__this, p0, method)
