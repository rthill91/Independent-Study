#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4028;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m26692_gshared (t4028 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m26692(__this, p0, p1, method) (( void (*) (t4028 *, t5 *, t144, MethodInfo*))m26692_gshared)(__this, p0, p1, method)
extern "C" t5 * m26693_gshared (t4028 * __this, t5 * p0, MethodInfo* method);
#define m26693(__this, p0, method) (( t5 * (*) (t4028 *, t5 *, MethodInfo*))m26693_gshared)(__this, p0, method)
extern "C" t5 * m26694_gshared (t4028 * __this, t5 * p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m26694(__this, p0, p1, p2, method) (( t5 * (*) (t4028 *, t5 *, t142 *, t5 *, MethodInfo*))m26694_gshared)(__this, p0, p1, p2, method)
extern "C" t5 * m26695_gshared (t4028 * __this, t5 * p0, MethodInfo* method);
#define m26695(__this, p0, method) (( t5 * (*) (t4028 *, t5 *, MethodInfo*))m26695_gshared)(__this, p0, method)
