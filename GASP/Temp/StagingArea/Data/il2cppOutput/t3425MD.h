#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3425;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3413.h"

extern "C" void m20465_gshared (t3425 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m20465(__this, p0, p1, method) (( void (*) (t3425 *, t5 *, t144, MethodInfo*))m20465_gshared)(__this, p0, p1, method)
extern "C" t3413  m20467_gshared (t3425 * __this, uint64_t p0, t5 * p1, MethodInfo* method);
#define m20467(__this, p0, p1, method) (( t3413  (*) (t3425 *, uint64_t, t5 *, MethodInfo*))m20467_gshared)(__this, p0, p1, method)
extern "C" t5 * m20469_gshared (t3425 * __this, uint64_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m20469(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3425 *, uint64_t, t5 *, t142 *, t5 *, MethodInfo*))m20469_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3413  m20471_gshared (t3425 * __this, t5 * p0, MethodInfo* method);
#define m20471(__this, p0, method) (( t3413  (*) (t3425 *, t5 *, MethodInfo*))m20471_gshared)(__this, p0, method)
