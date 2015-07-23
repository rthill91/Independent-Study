#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3576;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3564.h"

extern "C" void m21878_gshared (t3576 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m21878(__this, p0, p1, method) (( void (*) (t3576 *, t5 *, t144, MethodInfo*))m21878_gshared)(__this, p0, p1, method)
extern "C" t3564  m21880_gshared (t3576 * __this, t5 * p0, int32_t p1, MethodInfo* method);
#define m21880(__this, p0, p1, method) (( t3564  (*) (t3576 *, t5 *, int32_t, MethodInfo*))m21880_gshared)(__this, p0, p1, method)
extern "C" t5 * m21882_gshared (t3576 * __this, t5 * p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m21882(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3576 *, t5 *, int32_t, t142 *, t5 *, MethodInfo*))m21882_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3564  m21884_gshared (t3576 * __this, t5 * p0, MethodInfo* method);
#define m21884(__this, p0, method) (( t3564  (*) (t3576 *, t5 *, MethodInfo*))m21884_gshared)(__this, p0, method)
