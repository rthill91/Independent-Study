#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3593;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m21951_gshared (t3593 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m21951(__this, p0, p1, method) (( void (*) (t3593 *, t5 *, t144, MethodInfo*))m21951_gshared)(__this, p0, p1, method)
extern "C" void m21952_gshared (t3593 * __this, int32_t p0, MethodInfo* method);
#define m21952(__this, p0, method) (( void (*) (t3593 *, int32_t, MethodInfo*))m21952_gshared)(__this, p0, method)
extern "C" t5 * m21953_gshared (t3593 * __this, int32_t p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m21953(__this, p0, p1, p2, method) (( t5 * (*) (t3593 *, int32_t, t142 *, t5 *, MethodInfo*))m21953_gshared)(__this, p0, p1, p2, method)
extern "C" void m21954_gshared (t3593 * __this, t5 * p0, MethodInfo* method);
#define m21954(__this, p0, method) (( void (*) (t3593 *, t5 *, MethodInfo*))m21954_gshared)(__this, p0, method)
