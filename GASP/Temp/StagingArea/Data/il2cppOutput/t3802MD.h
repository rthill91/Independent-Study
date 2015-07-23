#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3802;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t1360.h"

extern "C" void m24364_gshared (t3802 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m24364(__this, p0, p1, method) (( void (*) (t3802 *, t5 *, t144, MethodInfo*))m24364_gshared)(__this, p0, p1, method)
extern "C" t1360  m24366_gshared (t3802 * __this, int32_t p0, t5 * p1, MethodInfo* method);
#define m24366(__this, p0, p1, method) (( t1360  (*) (t3802 *, int32_t, t5 *, MethodInfo*))m24366_gshared)(__this, p0, p1, method)
extern "C" t5 * m24368_gshared (t3802 * __this, int32_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m24368(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3802 *, int32_t, t5 *, t142 *, t5 *, MethodInfo*))m24368_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1360  m24370_gshared (t3802 * __this, t5 * p0, MethodInfo* method);
#define m24370(__this, p0, method) (( t1360  (*) (t3802 *, t5 *, MethodInfo*))m24370_gshared)(__this, p0, method)
