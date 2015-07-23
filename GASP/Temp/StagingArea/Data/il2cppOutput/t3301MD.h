#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3301;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m19128_gshared (t3301 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m19128(__this, p0, p1, method) (( void (*) (t3301 *, t5 *, t144, MethodInfo*))m19128_gshared)(__this, p0, p1, method)
extern "C" void m19129_gshared (t3301 * __this, t5 * p0, MethodInfo* method);
#define m19129(__this, p0, method) (( void (*) (t3301 *, t5 *, MethodInfo*))m19129_gshared)(__this, p0, method)
extern "C" t5 * m19131_gshared (t3301 * __this, t5 * p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m19131(__this, p0, p1, p2, method) (( t5 * (*) (t3301 *, t5 *, t142 *, t5 *, MethodInfo*))m19131_gshared)(__this, p0, p1, p2, method)
extern "C" void m19133_gshared (t3301 * __this, t5 * p0, MethodInfo* method);
#define m19133(__this, p0, method) (( void (*) (t3301 *, t5 *, MethodInfo*))m19133_gshared)(__this, p0, method)
