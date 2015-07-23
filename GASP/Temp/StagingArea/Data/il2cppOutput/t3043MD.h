#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3043;
struct t5;
struct t36;
#include "t3042.h"

extern "C" void m16382_gshared (t3043 * __this, t36 * p0, MethodInfo* method);
#define m16382(__this, p0, method) (( void (*) (t3043 *, t36 *, MethodInfo*))m16382_gshared)(__this, p0, method)
extern "C" t5 * m16383_gshared (t3043 * __this, MethodInfo* method);
#define m16383(__this, method) (( t5 * (*) (t3043 *, MethodInfo*))m16383_gshared)(__this, method)
extern "C" void m16384_gshared (t3043 * __this, MethodInfo* method);
#define m16384(__this, method) (( void (*) (t3043 *, MethodInfo*))m16384_gshared)(__this, method)
extern "C" bool m16385_gshared (t3043 * __this, MethodInfo* method);
#define m16385(__this, method) (( bool (*) (t3043 *, MethodInfo*))m16385_gshared)(__this, method)
extern "C" t3042  m16386_gshared (t3043 * __this, MethodInfo* method);
#define m16386(__this, method) (( t3042  (*) (t3043 *, MethodInfo*))m16386_gshared)(__this, method)
