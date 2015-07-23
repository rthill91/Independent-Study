#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2788;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t269.h"

extern "C" void m14097_gshared (t2788 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14097(__this, p0, p1, method) (( void (*) (t2788 *, t5 *, t144, MethodInfo*))m14097_gshared)(__this, p0, p1, method)
extern "C" t269  m14098_gshared (t2788 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m14098(__this, p0, p1, method) (( t269  (*) (t2788 *, t5 *, t5 *, MethodInfo*))m14098_gshared)(__this, p0, p1, method)
extern "C" t5 * m14099_gshared (t2788 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14099(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2788 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m14099_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t269  m14100_gshared (t2788 * __this, t5 * p0, MethodInfo* method);
#define m14100(__this, p0, method) (( t269  (*) (t2788 *, t5 *, MethodInfo*))m14100_gshared)(__this, p0, method)
