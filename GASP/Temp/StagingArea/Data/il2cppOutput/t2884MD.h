#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2884;
struct t5;
struct t36;
#include "t2883.h"

extern "C" void m14854_gshared (t2884 * __this, t36 * p0, MethodInfo* method);
#define m14854(__this, p0, method) (( void (*) (t2884 *, t36 *, MethodInfo*))m14854_gshared)(__this, p0, method)
extern "C" t5 * m14855_gshared (t2884 * __this, MethodInfo* method);
#define m14855(__this, method) (( t5 * (*) (t2884 *, MethodInfo*))m14855_gshared)(__this, method)
extern "C" void m14856_gshared (t2884 * __this, MethodInfo* method);
#define m14856(__this, method) (( void (*) (t2884 *, MethodInfo*))m14856_gshared)(__this, method)
extern "C" bool m14857_gshared (t2884 * __this, MethodInfo* method);
#define m14857(__this, method) (( bool (*) (t2884 *, MethodInfo*))m14857_gshared)(__this, method)
extern "C" t2883  m14858_gshared (t2884 * __this, MethodInfo* method);
#define m14858(__this, method) (( t2883  (*) (t2884 *, MethodInfo*))m14858_gshared)(__this, method)
