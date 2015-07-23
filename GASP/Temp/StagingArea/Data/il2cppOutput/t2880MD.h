#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2880;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m14830_gshared (t2880 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14830(__this, p0, p1, method) (( void (*) (t2880 *, t5 *, t144, MethodInfo*))m14830_gshared)(__this, p0, p1, method)
extern "C" t5 * m14831_gshared (t2880 * __this, int32_t p0, t5 * p1, MethodInfo* method);
#define m14831(__this, p0, p1, method) (( t5 * (*) (t2880 *, int32_t, t5 *, MethodInfo*))m14831_gshared)(__this, p0, p1, method)
extern "C" t5 * m14832_gshared (t2880 * __this, int32_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14832(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2880 *, int32_t, t5 *, t142 *, t5 *, MethodInfo*))m14832_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t5 * m14833_gshared (t2880 * __this, t5 * p0, MethodInfo* method);
#define m14833(__this, p0, method) (( t5 * (*) (t2880 *, t5 *, MethodInfo*))m14833_gshared)(__this, p0, method)
