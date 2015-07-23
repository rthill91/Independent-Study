#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4070;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t4062.h"

extern "C" void m27112_gshared (t4070 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m27112(__this, p0, p1, method) (( void (*) (t4070 *, t5 *, t144, MethodInfo*))m27112_gshared)(__this, p0, p1, method)
extern "C" t4062  m27113_gshared (t4070 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m27113(__this, p0, p1, method) (( t4062  (*) (t4070 *, int32_t, int32_t, MethodInfo*))m27113_gshared)(__this, p0, p1, method)
extern "C" t5 * m27114_gshared (t4070 * __this, int32_t p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m27114(__this, p0, p1, p2, p3, method) (( t5 * (*) (t4070 *, int32_t, int32_t, t142 *, t5 *, MethodInfo*))m27114_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t4062  m27115_gshared (t4070 * __this, t5 * p0, MethodInfo* method);
#define m27115(__this, p0, method) (( t4062  (*) (t4070 *, t5 *, MethodInfo*))m27115_gshared)(__this, p0, method)
