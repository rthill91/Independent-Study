#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3362;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3352.h"

extern "C" void m19856_gshared (t3362 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m19856(__this, p0, p1, method) (( void (*) (t3362 *, t5 *, t144, MethodInfo*))m19856_gshared)(__this, p0, p1, method)
extern "C" t3352  m19858_gshared (t3362 * __this, t5 * p0, int64_t p1, MethodInfo* method);
#define m19858(__this, p0, p1, method) (( t3352  (*) (t3362 *, t5 *, int64_t, MethodInfo*))m19858_gshared)(__this, p0, p1, method)
extern "C" t5 * m19860_gshared (t3362 * __this, t5 * p0, int64_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m19860(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3362 *, t5 *, int64_t, t142 *, t5 *, MethodInfo*))m19860_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3352  m19862_gshared (t3362 * __this, t5 * p0, MethodInfo* method);
#define m19862(__this, p0, method) (( t3352  (*) (t3362 *, t5 *, MethodInfo*))m19862_gshared)(__this, p0, method)
