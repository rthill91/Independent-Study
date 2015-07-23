#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3347;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3335.h"

extern "C" void m19761_gshared (t3347 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m19761(__this, p0, p1, method) (( void (*) (t3347 *, t5 *, t144, MethodInfo*))m19761_gshared)(__this, p0, p1, method)
extern "C" t3335  m19762_gshared (t3347 * __this, t5 * p0, int64_t p1, MethodInfo* method);
#define m19762(__this, p0, p1, method) (( t3335  (*) (t3347 *, t5 *, int64_t, MethodInfo*))m19762_gshared)(__this, p0, p1, method)
extern "C" t5 * m19763_gshared (t3347 * __this, t5 * p0, int64_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m19763(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3347 *, t5 *, int64_t, t142 *, t5 *, MethodInfo*))m19763_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3335  m19764_gshared (t3347 * __this, t5 * p0, MethodInfo* method);
#define m19764(__this, p0, method) (( t3335  (*) (t3347 *, t5 *, MethodInfo*))m19764_gshared)(__this, p0, method)
