#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3440;
struct t5;
struct t36;
#include "t3437.h"

extern "C" void m20580_gshared (t3440 * __this, t36 * p0, MethodInfo* method);
#define m20580(__this, p0, method) (( void (*) (t3440 *, t36 *, MethodInfo*))m20580_gshared)(__this, p0, method)
extern "C" t5 * m20581_gshared (t3440 * __this, MethodInfo* method);
#define m20581(__this, method) (( t5 * (*) (t3440 *, MethodInfo*))m20581_gshared)(__this, method)
extern "C" void m20582_gshared (t3440 * __this, MethodInfo* method);
#define m20582(__this, method) (( void (*) (t3440 *, MethodInfo*))m20582_gshared)(__this, method)
extern "C" bool m20583_gshared (t3440 * __this, MethodInfo* method);
#define m20583(__this, method) (( bool (*) (t3440 *, MethodInfo*))m20583_gshared)(__this, method)
extern "C" t3437  m20584_gshared (t3440 * __this, MethodInfo* method);
#define m20584(__this, method) (( t3437  (*) (t3440 *, MethodInfo*))m20584_gshared)(__this, method)
