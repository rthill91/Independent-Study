#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2891;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t2883.h"

extern "C" void m14923_gshared (t2891 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14923(__this, p0, p1, method) (( void (*) (t2891 *, t5 *, t144, MethodInfo*))m14923_gshared)(__this, p0, p1, method)
extern "C" t2883  m14925_gshared (t2891 * __this, int32_t p0, t5 * p1, MethodInfo* method);
#define m14925(__this, p0, p1, method) (( t2883  (*) (t2891 *, int32_t, t5 *, MethodInfo*))m14925_gshared)(__this, p0, p1, method)
extern "C" t5 * m14927_gshared (t2891 * __this, int32_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14927(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2891 *, int32_t, t5 *, t142 *, t5 *, MethodInfo*))m14927_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2883  m14929_gshared (t2891 * __this, t5 * p0, MethodInfo* method);
#define m14929(__this, p0, method) (( t2883  (*) (t2891 *, t5 *, MethodInfo*))m14929_gshared)(__this, p0, method)
