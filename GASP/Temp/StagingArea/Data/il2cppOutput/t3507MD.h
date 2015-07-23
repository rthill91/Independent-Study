#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3507;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t917.h"

extern "C" void m21242_gshared (t3507 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m21242(__this, p0, p1, method) (( void (*) (t3507 *, t5 *, t144, MethodInfo*))m21242_gshared)(__this, p0, p1, method)
extern "C" t917  m21244_gshared (t3507 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m21244(__this, p0, p1, method) (( t917  (*) (t3507 *, t5 *, t5 *, MethodInfo*))m21244_gshared)(__this, p0, p1, method)
extern "C" t5 * m21246_gshared (t3507 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m21246(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3507 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m21246_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t917  m21248_gshared (t3507 * __this, t5 * p0, MethodInfo* method);
#define m21248(__this, p0, method) (( t917  (*) (t3507 *, t5 *, MethodInfo*))m21248_gshared)(__this, p0, method)
