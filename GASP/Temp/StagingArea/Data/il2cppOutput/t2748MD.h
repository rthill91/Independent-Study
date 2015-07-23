#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2748;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m13703_gshared (t2748 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m13703(__this, p0, p1, method) (( void (*) (t2748 *, t5 *, t144, MethodInfo*))m13703_gshared)(__this, p0, p1, method)
extern "C" bool m13704_gshared (t2748 * __this, t5 * p0, MethodInfo* method);
#define m13704(__this, p0, method) (( bool (*) (t2748 *, t5 *, MethodInfo*))m13704_gshared)(__this, p0, method)
extern "C" t5 * m13705_gshared (t2748 * __this, t5 * p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m13705(__this, p0, p1, p2, method) (( t5 * (*) (t2748 *, t5 *, t142 *, t5 *, MethodInfo*))m13705_gshared)(__this, p0, p1, p2, method)
extern "C" bool m13706_gshared (t2748 * __this, t5 * p0, MethodInfo* method);
#define m13706(__this, p0, method) (( bool (*) (t2748 *, t5 *, MethodInfo*))m13706_gshared)(__this, p0, method)
