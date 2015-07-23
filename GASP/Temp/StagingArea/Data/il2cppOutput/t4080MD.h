#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4080;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m27162_gshared (t4080 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m27162(__this, p0, p1, method) (( void (*) (t4080 *, t5 *, t144, MethodInfo*))m27162_gshared)(__this, p0, p1, method)
extern "C" t5 * m27163_gshared (t4080 * __this, t5 * p0, MethodInfo* method);
#define m27163(__this, p0, method) (( t5 * (*) (t4080 *, t5 *, MethodInfo*))m27163_gshared)(__this, p0, method)
extern "C" t5 * m27164_gshared (t4080 * __this, t5 * p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m27164(__this, p0, p1, p2, method) (( t5 * (*) (t4080 *, t5 *, t142 *, t5 *, MethodInfo*))m27164_gshared)(__this, p0, p1, p2, method)
extern "C" t5 * m27165_gshared (t4080 * __this, t5 * p0, MethodInfo* method);
#define m27165(__this, p0, method) (( t5 * (*) (t4080 *, t5 *, MethodInfo*))m27165_gshared)(__this, p0, method)
