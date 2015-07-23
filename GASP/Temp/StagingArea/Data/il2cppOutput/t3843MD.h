#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3843;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3833.h"

extern "C" void m24842_gshared (t3843 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m24842(__this, p0, p1, method) (( void (*) (t3843 *, t5 *, t144, MethodInfo*))m24842_gshared)(__this, p0, p1, method)
extern "C" t3833  m24844_gshared (t3843 * __this, t5 * p0, int32_t p1, MethodInfo* method);
#define m24844(__this, p0, p1, method) (( t3833  (*) (t3843 *, t5 *, int32_t, MethodInfo*))m24844_gshared)(__this, p0, p1, method)
extern "C" t5 * m24846_gshared (t3843 * __this, t5 * p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m24846(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3843 *, t5 *, int32_t, t142 *, t5 *, MethodInfo*))m24846_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3833  m24848_gshared (t3843 * __this, t5 * p0, MethodInfo* method);
#define m24848(__this, p0, method) (( t3833  (*) (t3843 *, t5 *, MethodInfo*))m24848_gshared)(__this, p0, method)
