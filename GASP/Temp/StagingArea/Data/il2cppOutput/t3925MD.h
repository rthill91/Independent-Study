#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3925;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3915.h"

extern "C" void m25691_gshared (t3925 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m25691(__this, p0, p1, method) (( void (*) (t3925 *, t5 *, t144, MethodInfo*))m25691_gshared)(__this, p0, p1, method)
extern "C" t3915  m25693_gshared (t3925 * __this, t5 * p0, int32_t p1, MethodInfo* method);
#define m25693(__this, p0, p1, method) (( t3915  (*) (t3925 *, t5 *, int32_t, MethodInfo*))m25693_gshared)(__this, p0, p1, method)
extern "C" t5 * m25695_gshared (t3925 * __this, t5 * p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m25695(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3925 *, t5 *, int32_t, t142 *, t5 *, MethodInfo*))m25695_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3915  m25697_gshared (t3925 * __this, t5 * p0, MethodInfo* method);
#define m25697(__this, p0, method) (( t3915  (*) (t3925 *, t5 *, MethodInfo*))m25697_gshared)(__this, p0, method)
