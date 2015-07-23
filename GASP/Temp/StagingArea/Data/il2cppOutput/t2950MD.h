#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2950;
struct t5;
struct t36;
#include "t2949.h"

extern "C" void m15497_gshared (t2950 * __this, t36 * p0, MethodInfo* method);
#define m15497(__this, p0, method) (( void (*) (t2950 *, t36 *, MethodInfo*))m15497_gshared)(__this, p0, method)
extern "C" t5 * m15498_gshared (t2950 * __this, MethodInfo* method);
#define m15498(__this, method) (( t5 * (*) (t2950 *, MethodInfo*))m15498_gshared)(__this, method)
extern "C" void m15499_gshared (t2950 * __this, MethodInfo* method);
#define m15499(__this, method) (( void (*) (t2950 *, MethodInfo*))m15499_gshared)(__this, method)
extern "C" bool m15500_gshared (t2950 * __this, MethodInfo* method);
#define m15500(__this, method) (( bool (*) (t2950 *, MethodInfo*))m15500_gshared)(__this, method)
extern "C" t2949  m15501_gshared (t2950 * __this, MethodInfo* method);
#define m15501(__this, method) (( t2949  (*) (t2950 *, MethodInfo*))m15501_gshared)(__this, method)
