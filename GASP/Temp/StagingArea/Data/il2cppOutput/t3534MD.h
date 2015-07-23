#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3534;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3446.h"
#include "t914.h"

extern "C" void m21507_gshared (t3534 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m21507(__this, p0, p1, method) (( void (*) (t3534 *, t5 *, t144, MethodInfo*))m21507_gshared)(__this, p0, p1, method)
extern "C" t3446  m21509_gshared (t3534 * __this, t5 * p0, t914  p1, MethodInfo* method);
#define m21509(__this, p0, p1, method) (( t3446  (*) (t3534 *, t5 *, t914 , MethodInfo*))m21509_gshared)(__this, p0, p1, method)
extern "C" t5 * m21511_gshared (t3534 * __this, t5 * p0, t914  p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m21511(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3534 *, t5 *, t914 , t142 *, t5 *, MethodInfo*))m21511_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3446  m21513_gshared (t3534 * __this, t5 * p0, MethodInfo* method);
#define m21513(__this, p0, method) (( t3446  (*) (t3534 *, t5 *, MethodInfo*))m21513_gshared)(__this, p0, method)
