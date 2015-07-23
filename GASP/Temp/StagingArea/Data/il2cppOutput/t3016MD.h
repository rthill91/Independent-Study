#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3016;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t269.h"

extern "C" void m16230_gshared (t3016 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m16230(__this, p0, p1, method) (( void (*) (t3016 *, t5 *, t144, MethodInfo*))m16230_gshared)(__this, p0, p1, method)
extern "C" t269  m16231_gshared (t3016 * __this, t5 * p0, int32_t p1, MethodInfo* method);
#define m16231(__this, p0, p1, method) (( t269  (*) (t3016 *, t5 *, int32_t, MethodInfo*))m16231_gshared)(__this, p0, p1, method)
extern "C" t5 * m16232_gshared (t3016 * __this, t5 * p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m16232(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3016 *, t5 *, int32_t, t142 *, t5 *, MethodInfo*))m16232_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t269  m16233_gshared (t3016 * __this, t5 * p0, MethodInfo* method);
#define m16233(__this, p0, method) (( t269  (*) (t3016 *, t5 *, MethodInfo*))m16233_gshared)(__this, p0, method)
