#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3061;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m16592_gshared (t3061 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m16592(__this, p0, p1, method) (( void (*) (t3061 *, t5 *, t144, MethodInfo*))m16592_gshared)(__this, p0, p1, method)
extern "C" bool m16593_gshared (t3061 * __this, int32_t p0, MethodInfo* method);
#define m16593(__this, p0, method) (( bool (*) (t3061 *, int32_t, MethodInfo*))m16593_gshared)(__this, p0, method)
extern "C" t5 * m16594_gshared (t3061 * __this, int32_t p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m16594(__this, p0, p1, p2, method) (( t5 * (*) (t3061 *, int32_t, t142 *, t5 *, MethodInfo*))m16594_gshared)(__this, p0, p1, p2, method)
extern "C" bool m16595_gshared (t3061 * __this, t5 * p0, MethodInfo* method);
#define m16595(__this, p0, method) (( bool (*) (t3061 *, t5 *, MethodInfo*))m16595_gshared)(__this, p0, method)
