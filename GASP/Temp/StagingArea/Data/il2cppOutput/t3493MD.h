#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3493;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3442.h"

extern "C" void m21108_gshared (t3493 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m21108(__this, p0, p1, method) (( void (*) (t3493 *, t5 *, t144, MethodInfo*))m21108_gshared)(__this, p0, p1, method)
extern "C" t3442  m21110_gshared (t3493 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m21110(__this, p0, p1, method) (( t3442  (*) (t3493 *, t5 *, t5 *, MethodInfo*))m21110_gshared)(__this, p0, p1, method)
extern "C" t5 * m21112_gshared (t3493 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m21112(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3493 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m21112_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3442  m21114_gshared (t3493 * __this, t5 * p0, MethodInfo* method);
#define m21114(__this, p0, method) (( t3442  (*) (t3493 *, t5 *, MethodInfo*))m21114_gshared)(__this, p0, method)
