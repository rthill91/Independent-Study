#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2793;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m14074_gshared (t2793 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14074(__this, p0, p1, method) (( void (*) (t2793 *, t5 *, t144, MethodInfo*))m14074_gshared)(__this, p0, p1, method)
extern "C" t5 * m14075_gshared (t2793 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m14075(__this, p0, p1, method) (( t5 * (*) (t2793 *, t5 *, t5 *, MethodInfo*))m14075_gshared)(__this, p0, p1, method)
extern "C" t5 * m14076_gshared (t2793 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14076(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2793 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m14076_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t5 * m14077_gshared (t2793 * __this, t5 * p0, MethodInfo* method);
#define m14077(__this, p0, method) (( t5 * (*) (t2793 *, t5 *, MethodInfo*))m14077_gshared)(__this, p0, method)
