#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2991;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t294.h"

extern "C" void m15881_gshared (t2991 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m15881(__this, p0, p1, method) (( void (*) (t2991 *, t5 *, t144, MethodInfo*))m15881_gshared)(__this, p0, p1, method)
extern "C" t294  m15883_gshared (t2991 * __this, int32_t p0, t5 * p1, MethodInfo* method);
#define m15883(__this, p0, p1, method) (( t294  (*) (t2991 *, int32_t, t5 *, MethodInfo*))m15883_gshared)(__this, p0, p1, method)
extern "C" t5 * m15885_gshared (t2991 * __this, int32_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m15885(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2991 *, int32_t, t5 *, t142 *, t5 *, MethodInfo*))m15885_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t294  m15887_gshared (t2991 * __this, t5 * p0, MethodInfo* method);
#define m15887(__this, p0, method) (( t294  (*) (t2991 *, t5 *, MethodInfo*))m15887_gshared)(__this, p0, method)
