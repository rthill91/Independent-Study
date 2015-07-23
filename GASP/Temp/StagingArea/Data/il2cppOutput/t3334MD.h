#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3334;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t269.h"

extern "C" void m19757_gshared (t3334 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m19757(__this, p0, p1, method) (( void (*) (t3334 *, t5 *, t144, MethodInfo*))m19757_gshared)(__this, p0, p1, method)
extern "C" t269  m19758_gshared (t3334 * __this, t5 * p0, int64_t p1, MethodInfo* method);
#define m19758(__this, p0, p1, method) (( t269  (*) (t3334 *, t5 *, int64_t, MethodInfo*))m19758_gshared)(__this, p0, p1, method)
extern "C" t5 * m19759_gshared (t3334 * __this, t5 * p0, int64_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m19759(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3334 *, t5 *, int64_t, t142 *, t5 *, MethodInfo*))m19759_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t269  m19760_gshared (t3334 * __this, t5 * p0, MethodInfo* method);
#define m19760(__this, p0, method) (( t269  (*) (t3334 *, t5 *, MethodInfo*))m19760_gshared)(__this, p0, method)
