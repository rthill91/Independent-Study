#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3139;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3129.h"

extern "C" void m17502_gshared (t3139 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m17502(__this, p0, p1, method) (( void (*) (t3139 *, t5 *, t144, MethodInfo*))m17502_gshared)(__this, p0, p1, method)
extern "C" t3129  m17504_gshared (t3139 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m17504(__this, p0, p1, method) (( t3129  (*) (t3139 *, t5 *, t5 *, MethodInfo*))m17504_gshared)(__this, p0, p1, method)
extern "C" t5 * m17506_gshared (t3139 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m17506(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3139 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m17506_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3129  m17508_gshared (t3139 * __this, t5 * p0, MethodInfo* method);
#define m17508(__this, p0, method) (( t3129  (*) (t3139 *, t5 *, MethodInfo*))m17508_gshared)(__this, p0, method)
