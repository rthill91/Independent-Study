#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3414;
struct t5;
struct t36;
#include "t3413.h"

extern "C" void m20387_gshared (t3414 * __this, t36 * p0, MethodInfo* method);
#define m20387(__this, p0, method) (( void (*) (t3414 *, t36 *, MethodInfo*))m20387_gshared)(__this, p0, method)
extern "C" t5 * m20388_gshared (t3414 * __this, MethodInfo* method);
#define m20388(__this, method) (( t5 * (*) (t3414 *, MethodInfo*))m20388_gshared)(__this, method)
extern "C" void m20389_gshared (t3414 * __this, MethodInfo* method);
#define m20389(__this, method) (( void (*) (t3414 *, MethodInfo*))m20389_gshared)(__this, method)
extern "C" bool m20390_gshared (t3414 * __this, MethodInfo* method);
#define m20390(__this, method) (( bool (*) (t3414 *, MethodInfo*))m20390_gshared)(__this, method)
extern "C" t3413  m20391_gshared (t3414 * __this, MethodInfo* method);
#define m20391(__this, method) (( t3413  (*) (t3414 *, MethodInfo*))m20391_gshared)(__this, method)
