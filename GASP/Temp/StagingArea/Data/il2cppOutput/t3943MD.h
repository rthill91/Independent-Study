#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3943;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t84.h"

extern "C" void m25815_gshared (t3943 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m25815(__this, p0, p1, method) (( void (*) (t3943 *, t5 *, t144, MethodInfo*))m25815_gshared)(__this, p0, p1, method)
extern "C" void m25816_gshared (t3943 * __this, t84  p0, MethodInfo* method);
#define m25816(__this, p0, method) (( void (*) (t3943 *, t84 , MethodInfo*))m25816_gshared)(__this, p0, method)
extern "C" t5 * m25817_gshared (t3943 * __this, t84  p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m25817(__this, p0, p1, p2, method) (( t5 * (*) (t3943 *, t84 , t142 *, t5 *, MethodInfo*))m25817_gshared)(__this, p0, p1, p2, method)
extern "C" void m25818_gshared (t3943 * __this, t5 * p0, MethodInfo* method);
#define m25818(__this, p0, method) (( void (*) (t3943 *, t5 *, MethodInfo*))m25818_gshared)(__this, p0, method)
