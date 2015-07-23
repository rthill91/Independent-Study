#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3585;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m21918_gshared (t3585 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m21918(__this, p0, p1, method) (( void (*) (t3585 *, t5 *, t144, MethodInfo*))m21918_gshared)(__this, p0, p1, method)
extern "C" void m21919_gshared (t3585 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m21919(__this, p0, p1, method) (( void (*) (t3585 *, t5 *, t5 *, MethodInfo*))m21919_gshared)(__this, p0, p1, method)
extern "C" t5 * m21920_gshared (t3585 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m21920(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3585 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m21920_gshared)(__this, p0, p1, p2, p3, method)
extern "C" void m21921_gshared (t3585 * __this, t5 * p0, MethodInfo* method);
#define m21921(__this, p0, method) (( void (*) (t3585 *, t5 *, MethodInfo*))m21921_gshared)(__this, p0, method)
