#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3187;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m18030_gshared (t3187 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m18030(__this, p0, p1, method) (( void (*) (t3187 *, t5 *, t144, MethodInfo*))m18030_gshared)(__this, p0, p1, method)
extern "C" bool m18031_gshared (t3187 * __this, float p0, MethodInfo* method);
#define m18031(__this, p0, method) (( bool (*) (t3187 *, float, MethodInfo*))m18031_gshared)(__this, p0, method)
extern "C" t5 * m18032_gshared (t3187 * __this, float p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m18032(__this, p0, p1, p2, method) (( t5 * (*) (t3187 *, float, t142 *, t5 *, MethodInfo*))m18032_gshared)(__this, p0, p1, p2, method)
extern "C" bool m18033_gshared (t3187 * __this, t5 * p0, MethodInfo* method);
#define m18033(__this, p0, method) (( bool (*) (t3187 *, t5 *, MethodInfo*))m18033_gshared)(__this, p0, method)
