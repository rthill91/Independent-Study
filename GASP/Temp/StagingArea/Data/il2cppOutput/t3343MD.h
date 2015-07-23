#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3343;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m19730_gshared (t3343 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m19730(__this, p0, p1, method) (( void (*) (t3343 *, t5 *, t144, MethodInfo*))m19730_gshared)(__this, p0, p1, method)
extern "C" t5 * m19731_gshared (t3343 * __this, t5 * p0, int64_t p1, MethodInfo* method);
#define m19731(__this, p0, p1, method) (( t5 * (*) (t3343 *, t5 *, int64_t, MethodInfo*))m19731_gshared)(__this, p0, p1, method)
extern "C" t5 * m19732_gshared (t3343 * __this, t5 * p0, int64_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m19732(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3343 *, t5 *, int64_t, t142 *, t5 *, MethodInfo*))m19732_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t5 * m19733_gshared (t3343 * __this, t5 * p0, MethodInfo* method);
#define m19733(__this, p0, method) (( t5 * (*) (t3343 *, t5 *, MethodInfo*))m19733_gshared)(__this, p0, method)
