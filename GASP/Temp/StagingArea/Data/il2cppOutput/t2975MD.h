#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2975;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t2965.h"

extern "C" void m15715_gshared (t2975 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m15715(__this, p0, p1, method) (( void (*) (t2975 *, t5 *, t144, MethodInfo*))m15715_gshared)(__this, p0, p1, method)
extern "C" t2965  m15717_gshared (t2975 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m15717(__this, p0, p1, method) (( t2965  (*) (t2975 *, t5 *, t5 *, MethodInfo*))m15717_gshared)(__this, p0, p1, method)
extern "C" t5 * m15719_gshared (t2975 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m15719(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2975 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m15719_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2965  m15721_gshared (t2975 * __this, t5 * p0, MethodInfo* method);
#define m15721(__this, p0, method) (( t2965  (*) (t2975 *, t5 *, MethodInfo*))m15721_gshared)(__this, p0, method)
