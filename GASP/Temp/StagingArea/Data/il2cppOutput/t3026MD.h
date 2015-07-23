#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3026;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3017.h"

extern "C" void m16234_gshared (t3026 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m16234(__this, p0, p1, method) (( void (*) (t3026 *, t5 *, t144, MethodInfo*))m16234_gshared)(__this, p0, p1, method)
extern "C" t3017  m16235_gshared (t3026 * __this, t5 * p0, int32_t p1, MethodInfo* method);
#define m16235(__this, p0, p1, method) (( t3017  (*) (t3026 *, t5 *, int32_t, MethodInfo*))m16235_gshared)(__this, p0, p1, method)
extern "C" t5 * m16236_gshared (t3026 * __this, t5 * p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m16236(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3026 *, t5 *, int32_t, t142 *, t5 *, MethodInfo*))m16236_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3017  m16237_gshared (t3026 * __this, t5 * p0, MethodInfo* method);
#define m16237(__this, p0, method) (( t3017  (*) (t3026 *, t5 *, MethodInfo*))m16237_gshared)(__this, p0, method)
