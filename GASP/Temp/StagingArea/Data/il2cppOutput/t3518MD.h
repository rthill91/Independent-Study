#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3518;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t914.h"

extern "C" void m21395_gshared (t3518 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m21395(__this, p0, p1, method) (( void (*) (t3518 *, t5 *, t144, MethodInfo*))m21395_gshared)(__this, p0, p1, method)
extern "C" t5 * m21396_gshared (t3518 * __this, t5 * p0, t914  p1, MethodInfo* method);
#define m21396(__this, p0, p1, method) (( t5 * (*) (t3518 *, t5 *, t914 , MethodInfo*))m21396_gshared)(__this, p0, p1, method)
extern "C" t5 * m21397_gshared (t3518 * __this, t5 * p0, t914  p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m21397(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3518 *, t5 *, t914 , t142 *, t5 *, MethodInfo*))m21397_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t5 * m21398_gshared (t3518 * __this, t5 * p0, MethodInfo* method);
#define m21398(__this, p0, method) (( t5 * (*) (t3518 *, t5 *, MethodInfo*))m21398_gshared)(__this, p0, method)
