#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2826;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t1133.h"

extern "C" void m14341_gshared (t2826 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14341(__this, p0, p1, method) (( void (*) (t2826 *, t5 *, t144, MethodInfo*))m14341_gshared)(__this, p0, p1, method)
extern "C" t1133  m14342_gshared (t2826 * __this, uint8_t p0, t5 * p1, MethodInfo* method);
#define m14342(__this, p0, p1, method) (( t1133  (*) (t2826 *, uint8_t, t5 *, MethodInfo*))m14342_gshared)(__this, p0, p1, method)
extern "C" t5 * m14343_gshared (t2826 * __this, uint8_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14343(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2826 *, uint8_t, t5 *, t142 *, t5 *, MethodInfo*))m14343_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1133  m14344_gshared (t2826 * __this, t5 * p0, MethodInfo* method);
#define m14344(__this, p0, method) (( t1133  (*) (t2826 *, t5 *, MethodInfo*))m14344_gshared)(__this, p0, method)
