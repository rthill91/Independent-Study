#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3656;
struct t5;
struct t36;
#include "t3655.h"

extern "C" void m22601_gshared (t3656 * __this, t36 * p0, MethodInfo* method);
#define m22601(__this, p0, method) (( void (*) (t3656 *, t36 *, MethodInfo*))m22601_gshared)(__this, p0, method)
extern "C" t5 * m22602_gshared (t3656 * __this, MethodInfo* method);
#define m22602(__this, method) (( t5 * (*) (t3656 *, MethodInfo*))m22602_gshared)(__this, method)
extern "C" void m22603_gshared (t3656 * __this, MethodInfo* method);
#define m22603(__this, method) (( void (*) (t3656 *, MethodInfo*))m22603_gshared)(__this, method)
extern "C" bool m22604_gshared (t3656 * __this, MethodInfo* method);
#define m22604(__this, method) (( bool (*) (t3656 *, MethodInfo*))m22604_gshared)(__this, method)
extern "C" t3655  m22605_gshared (t3656 * __this, MethodInfo* method);
#define m22605(__this, method) (( t3655  (*) (t3656 *, MethodInfo*))m22605_gshared)(__this, method)
