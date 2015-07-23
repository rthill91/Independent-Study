#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3583;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m21911_gshared (t3583 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m21911(__this, p0, p1, method) (( void (*) (t3583 *, t5 *, t144, MethodInfo*))m21911_gshared)(__this, p0, p1, method)
extern "C" void m21912_gshared (t3583 * __this, t5 * p0, MethodInfo* method);
#define m21912(__this, p0, method) (( void (*) (t3583 *, t5 *, MethodInfo*))m21912_gshared)(__this, p0, method)
extern "C" t5 * m21913_gshared (t3583 * __this, t5 * p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m21913(__this, p0, p1, p2, method) (( t5 * (*) (t3583 *, t5 *, t142 *, t5 *, MethodInfo*))m21913_gshared)(__this, p0, p1, p2, method)
extern "C" void m21914_gshared (t3583 * __this, t5 * p0, MethodInfo* method);
#define m21914(__this, p0, method) (( void (*) (t3583 *, t5 *, MethodInfo*))m21914_gshared)(__this, p0, method)
