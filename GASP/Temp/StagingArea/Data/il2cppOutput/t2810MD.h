#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2810;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t2799.h"

extern "C" void m14195_gshared (t2810 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14195(__this, p0, p1, method) (( void (*) (t2810 *, t5 *, t144, MethodInfo*))m14195_gshared)(__this, p0, p1, method)
extern "C" t2799  m14197_gshared (t2810 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m14197(__this, p0, p1, method) (( t2799  (*) (t2810 *, t5 *, t5 *, MethodInfo*))m14197_gshared)(__this, p0, p1, method)
extern "C" t5 * m14199_gshared (t2810 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14199(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2810 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m14199_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2799  m14201_gshared (t2810 * __this, t5 * p0, MethodInfo* method);
#define m14201(__this, p0, method) (( t2799  (*) (t2810 *, t5 *, MethodInfo*))m14201_gshared)(__this, p0, method)
