#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2942;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t2915.h"

extern "C" void m15414_gshared (t2942 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m15414(__this, p0, p1, method) (( void (*) (t2942 *, t5 *, t144, MethodInfo*))m15414_gshared)(__this, p0, p1, method)
extern "C" t2915  m15416_gshared (t2942 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m15416(__this, p0, p1, method) (( t2915  (*) (t2942 *, t5 *, t5 *, MethodInfo*))m15416_gshared)(__this, p0, p1, method)
extern "C" t5 * m15418_gshared (t2942 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m15418(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2942 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m15418_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2915  m15420_gshared (t2942 * __this, t5 * p0, MethodInfo* method);
#define m15420(__this, p0, method) (( t2915  (*) (t2942 *, t5 *, MethodInfo*))m15420_gshared)(__this, p0, method)
