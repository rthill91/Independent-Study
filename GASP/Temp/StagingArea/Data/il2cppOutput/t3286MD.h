#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3286;
struct t5;
struct t36;
#include "t144.h"

extern "C" void m18964_gshared (t3286 * __this, t36 * p0, MethodInfo* method);
#define m18964(__this, p0, method) (( void (*) (t3286 *, t36 *, MethodInfo*))m18964_gshared)(__this, p0, method)
extern "C" t5 * m18965_gshared (t3286 * __this, MethodInfo* method);
#define m18965(__this, method) (( t5 * (*) (t3286 *, MethodInfo*))m18965_gshared)(__this, method)
extern "C" void m18966_gshared (t3286 * __this, MethodInfo* method);
#define m18966(__this, method) (( void (*) (t3286 *, MethodInfo*))m18966_gshared)(__this, method)
extern "C" bool m18967_gshared (t3286 * __this, MethodInfo* method);
#define m18967(__this, method) (( bool (*) (t3286 *, MethodInfo*))m18967_gshared)(__this, method)
extern "C" t144 m18968_gshared (t3286 * __this, MethodInfo* method);
#define m18968(__this, method) (( t144 (*) (t3286 *, MethodInfo*))m18968_gshared)(__this, method)
