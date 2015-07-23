#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4053;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t4043.h"

extern "C" void m26953_gshared (t4053 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m26953(__this, p0, p1, method) (( void (*) (t4053 *, t5 *, t144, MethodInfo*))m26953_gshared)(__this, p0, p1, method)
extern "C" t4043  m26955_gshared (t4053 * __this, t5 * p0, uint8_t p1, MethodInfo* method);
#define m26955(__this, p0, p1, method) (( t4043  (*) (t4053 *, t5 *, uint8_t, MethodInfo*))m26955_gshared)(__this, p0, p1, method)
extern "C" t5 * m26957_gshared (t4053 * __this, t5 * p0, uint8_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m26957(__this, p0, p1, p2, p3, method) (( t5 * (*) (t4053 *, t5 *, uint8_t, t142 *, t5 *, MethodInfo*))m26957_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t4043  m26959_gshared (t4053 * __this, t5 * p0, MethodInfo* method);
#define m26959(__this, p0, method) (( t4043  (*) (t4053 *, t5 *, MethodInfo*))m26959_gshared)(__this, p0, method)
