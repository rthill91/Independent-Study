#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3113;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t805.h"

extern "C" void m17213_gshared (t3113 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m17213(__this, p0, p1, method) (( void (*) (t3113 *, t5 *, t144, MethodInfo*))m17213_gshared)(__this, p0, p1, method)
extern "C" t805  m17215_gshared (t3113 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m17215(__this, p0, p1, method) (( t805  (*) (t3113 *, t5 *, t5 *, MethodInfo*))m17215_gshared)(__this, p0, p1, method)
extern "C" t5 * m17217_gshared (t3113 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m17217(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3113 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m17217_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t805  m17219_gshared (t3113 * __this, t5 * p0, MethodInfo* method);
#define m17219(__this, p0, method) (( t805  (*) (t3113 *, t5 *, MethodInfo*))m17219_gshared)(__this, p0, method)
