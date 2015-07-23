#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3587;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m21925_gshared (t3587 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m21925(__this, p0, p1, method) (( void (*) (t3587 *, t5 *, t144, MethodInfo*))m21925_gshared)(__this, p0, p1, method)
extern "C" void m21926_gshared (t3587 * __this, t5 * p0, t5 * p1, t5 * p2, MethodInfo* method);
#define m21926(__this, p0, p1, p2, method) (( void (*) (t3587 *, t5 *, t5 *, t5 *, MethodInfo*))m21926_gshared)(__this, p0, p1, p2, method)
extern "C" t5 * m21927_gshared (t3587 * __this, t5 * p0, t5 * p1, t5 * p2, t142 * p3, t5 * p4, MethodInfo* method);
#define m21927(__this, p0, p1, p2, p3, p4, method) (( t5 * (*) (t3587 *, t5 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m21927_gshared)(__this, p0, p1, p2, p3, p4, method)
extern "C" void m21928_gshared (t3587 * __this, t5 * p0, MethodInfo* method);
#define m21928(__this, p0, method) (( void (*) (t3587 *, t5 *, MethodInfo*))m21928_gshared)(__this, p0, method)
