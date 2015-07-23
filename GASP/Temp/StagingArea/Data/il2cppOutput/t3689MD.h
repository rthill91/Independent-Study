#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3689;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3678.h"

extern "C" void m22961_gshared (t3689 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m22961(__this, p0, p1, method) (( void (*) (t3689 *, t5 *, t144, MethodInfo*))m22961_gshared)(__this, p0, p1, method)
extern "C" t3678  m22963_gshared (t3689 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m22963(__this, p0, p1, method) (( t3678  (*) (t3689 *, t5 *, t5 *, MethodInfo*))m22963_gshared)(__this, p0, p1, method)
extern "C" t5 * m22965_gshared (t3689 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m22965(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3689 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m22965_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3678  m22967_gshared (t3689 * __this, t5 * p0, MethodInfo* method);
#define m22967(__this, p0, method) (( t3678  (*) (t3689 *, t5 *, MethodInfo*))m22967_gshared)(__this, p0, method)
