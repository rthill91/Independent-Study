#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4110;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m27309_gshared (t4110 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m27309(__this, p0, p1, method) (( void (*) (t4110 *, t5 *, t144, MethodInfo*))m27309_gshared)(__this, p0, p1, method)
extern "C" t5 * m27310_gshared (t4110 * __this, t5 * p0, MethodInfo* method);
#define m27310(__this, p0, method) (( t5 * (*) (t4110 *, t5 *, MethodInfo*))m27310_gshared)(__this, p0, method)
extern "C" t5 * m27311_gshared (t4110 * __this, t5 * p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m27311(__this, p0, p1, p2, method) (( t5 * (*) (t4110 *, t5 *, t142 *, t5 *, MethodInfo*))m27311_gshared)(__this, p0, p1, p2, method)
extern "C" t5 * m27312_gshared (t4110 * __this, t5 * p0, MethodInfo* method);
#define m27312(__this, p0, method) (( t5 * (*) (t4110 *, t5 *, MethodInfo*))m27312_gshared)(__this, p0, method)
