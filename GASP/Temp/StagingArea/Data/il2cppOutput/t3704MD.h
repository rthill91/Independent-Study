#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3704;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3694.h"

extern "C" void m23103_gshared (t3704 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m23103(__this, p0, p1, method) (( void (*) (t3704 *, t5 *, t144, MethodInfo*))m23103_gshared)(__this, p0, p1, method)
extern "C" t3694  m23105_gshared (t3704 * __this, uint8_t p0, t5 * p1, MethodInfo* method);
#define m23105(__this, p0, p1, method) (( t3694  (*) (t3704 *, uint8_t, t5 *, MethodInfo*))m23105_gshared)(__this, p0, p1, method)
extern "C" t5 * m23107_gshared (t3704 * __this, uint8_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m23107(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3704 *, uint8_t, t5 *, t142 *, t5 *, MethodInfo*))m23107_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3694  m23109_gshared (t3704 * __this, t5 * p0, MethodInfo* method);
#define m23109(__this, p0, method) (( t3694  (*) (t3704 *, t5 *, MethodInfo*))m23109_gshared)(__this, p0, method)
