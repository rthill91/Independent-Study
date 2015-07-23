#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3877;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3849.h"

extern "C" void m25152_gshared (t3877 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m25152(__this, p0, p1, method) (( void (*) (t3877 *, t5 *, t144, MethodInfo*))m25152_gshared)(__this, p0, p1, method)
extern "C" t3849  m25154_gshared (t3877 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m25154(__this, p0, p1, method) (( t3849  (*) (t3877 *, t5 *, t5 *, MethodInfo*))m25154_gshared)(__this, p0, p1, method)
extern "C" t5 * m25156_gshared (t3877 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m25156(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3877 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m25156_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3849  m25158_gshared (t3877 * __this, t5 * p0, MethodInfo* method);
#define m25158(__this, p0, method) (( t3849  (*) (t3877 *, t5 *, MethodInfo*))m25158_gshared)(__this, p0, method)
