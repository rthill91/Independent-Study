﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3053;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3042.h"

extern "C" void m16455_gshared (t3053 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m16455(__this, p0, p1, method) (( void (*) (t3053 *, t5 *, t144, MethodInfo*))m16455_gshared)(__this, p0, p1, method)
extern "C" t3042  m16457_gshared (t3053 * __this, int32_t p0, t5 * p1, MethodInfo* method);
#define m16457(__this, p0, p1, method) (( t3042  (*) (t3053 *, int32_t, t5 *, MethodInfo*))m16457_gshared)(__this, p0, p1, method)
extern "C" t5 * m16459_gshared (t3053 * __this, int32_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m16459(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3053 *, int32_t, t5 *, t142 *, t5 *, MethodInfo*))m16459_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3042  m16461_gshared (t3053 * __this, t5 * p0, MethodInfo* method);
#define m16461(__this, p0, method) (( t3042  (*) (t3053 *, t5 *, MethodInfo*))m16461_gshared)(__this, p0, method)
