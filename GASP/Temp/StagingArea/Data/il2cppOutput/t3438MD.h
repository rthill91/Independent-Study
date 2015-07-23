#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3438;
struct t5;
struct t36;
#include "t917.h"

extern "C" void m20570_gshared (t3438 * __this, t36 * p0, MethodInfo* method);
#define m20570(__this, p0, method) (( void (*) (t3438 *, t36 *, MethodInfo*))m20570_gshared)(__this, p0, method)
extern "C" t5 * m20571_gshared (t3438 * __this, MethodInfo* method);
#define m20571(__this, method) (( t5 * (*) (t3438 *, MethodInfo*))m20571_gshared)(__this, method)
extern "C" void m20572_gshared (t3438 * __this, MethodInfo* method);
#define m20572(__this, method) (( void (*) (t3438 *, MethodInfo*))m20572_gshared)(__this, method)
extern "C" bool m20573_gshared (t3438 * __this, MethodInfo* method);
#define m20573(__this, method) (( bool (*) (t3438 *, MethodInfo*))m20573_gshared)(__this, method)
extern "C" t917  m20574_gshared (t3438 * __this, MethodInfo* method);
#define m20574(__this, method) (( t917  (*) (t3438 *, MethodInfo*))m20574_gshared)(__this, method)
