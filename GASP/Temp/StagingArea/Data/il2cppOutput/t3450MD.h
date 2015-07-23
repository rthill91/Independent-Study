#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3450;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m20638_gshared (t3450 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m20638(__this, p0, p1, method) (( void (*) (t3450 *, t5 *, t144, MethodInfo*))m20638_gshared)(__this, p0, p1, method)
extern "C" t5 * m20640_gshared (t3450 * __this, t5 * p0, MethodInfo* method);
#define m20640(__this, p0, method) (( t5 * (*) (t3450 *, t5 *, MethodInfo*))m20640_gshared)(__this, p0, method)
extern "C" t5 * m20642_gshared (t3450 * __this, t5 * p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m20642(__this, p0, p1, p2, method) (( t5 * (*) (t3450 *, t5 *, t142 *, t5 *, MethodInfo*))m20642_gshared)(__this, p0, p1, p2, method)
extern "C" t5 * m20644_gshared (t3450 * __this, t5 * p0, MethodInfo* method);
#define m20644(__this, p0, method) (( t5 * (*) (t3450 *, t5 *, MethodInfo*))m20644_gshared)(__this, p0, method)
