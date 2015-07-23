#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2825;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m14333_gshared (t2825 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14333(__this, p0, p1, method) (( void (*) (t2825 *, t5 *, t144, MethodInfo*))m14333_gshared)(__this, p0, p1, method)
extern "C" t5 * m14334_gshared (t2825 * __this, uint8_t p0, t5 * p1, MethodInfo* method);
#define m14334(__this, p0, p1, method) (( t5 * (*) (t2825 *, uint8_t, t5 *, MethodInfo*))m14334_gshared)(__this, p0, p1, method)
extern "C" t5 * m14335_gshared (t2825 * __this, uint8_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14335(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2825 *, uint8_t, t5 *, t142 *, t5 *, MethodInfo*))m14335_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t5 * m14336_gshared (t2825 * __this, t5 * p0, MethodInfo* method);
#define m14336(__this, p0, method) (( t5 * (*) (t2825 *, t5 *, MethodInfo*))m14336_gshared)(__this, p0, method)
