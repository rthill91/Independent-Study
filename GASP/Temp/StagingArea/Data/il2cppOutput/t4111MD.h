#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4111;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m27313_gshared (t4111 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m27313(__this, p0, p1, method) (( void (*) (t4111 *, t5 *, t144, MethodInfo*))m27313_gshared)(__this, p0, p1, method)
extern "C" t5 * m27314_gshared (t4111 * __this, MethodInfo* method);
#define m27314(__this, method) (( t5 * (*) (t4111 *, MethodInfo*))m27314_gshared)(__this, method)
extern "C" t5 * m27315_gshared (t4111 * __this, t142 * p0, t5 * p1, MethodInfo* method);
#define m27315(__this, p0, p1, method) (( t5 * (*) (t4111 *, t142 *, t5 *, MethodInfo*))m27315_gshared)(__this, p0, p1, method)
extern "C" t5 * m27316_gshared (t4111 * __this, t5 * p0, MethodInfo* method);
#define m27316(__this, p0, method) (( t5 * (*) (t4111 *, t5 *, MethodInfo*))m27316_gshared)(__this, p0, method)
