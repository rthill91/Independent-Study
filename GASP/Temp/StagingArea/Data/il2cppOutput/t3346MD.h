#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3346;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m19753_gshared (t3346 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m19753(__this, p0, p1, method) (( void (*) (t3346 *, t5 *, t144, MethodInfo*))m19753_gshared)(__this, p0, p1, method)
extern "C" int64_t m19754_gshared (t3346 * __this, t5 * p0, int64_t p1, MethodInfo* method);
#define m19754(__this, p0, p1, method) (( int64_t (*) (t3346 *, t5 *, int64_t, MethodInfo*))m19754_gshared)(__this, p0, p1, method)
extern "C" t5 * m19755_gshared (t3346 * __this, t5 * p0, int64_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m19755(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3346 *, t5 *, int64_t, t142 *, t5 *, MethodInfo*))m19755_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int64_t m19756_gshared (t3346 * __this, t5 * p0, MethodInfo* method);
#define m19756(__this, p0, method) (( int64_t (*) (t3346 *, t5 *, MethodInfo*))m19756_gshared)(__this, p0, method)
