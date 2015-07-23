#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3599;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m21971_gshared (t3599 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m21971(__this, p0, p1, method) (( void (*) (t3599 *, t5 *, t144, MethodInfo*))m21971_gshared)(__this, p0, p1, method)
extern "C" void m21972_gshared (t3599 * __this, uint8_t p0, MethodInfo* method);
#define m21972(__this, p0, method) (( void (*) (t3599 *, uint8_t, MethodInfo*))m21972_gshared)(__this, p0, method)
extern "C" t5 * m21973_gshared (t3599 * __this, uint8_t p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m21973(__this, p0, p1, p2, method) (( t5 * (*) (t3599 *, uint8_t, t142 *, t5 *, MethodInfo*))m21973_gshared)(__this, p0, p1, p2, method)
extern "C" void m21974_gshared (t3599 * __this, t5 * p0, MethodInfo* method);
#define m21974(__this, p0, method) (( void (*) (t3599 *, t5 *, MethodInfo*))m21974_gshared)(__this, p0, method)
