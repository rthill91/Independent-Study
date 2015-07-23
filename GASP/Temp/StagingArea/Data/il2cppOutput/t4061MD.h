#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4061;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t269.h"

extern "C" void m27108_gshared (t4061 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m27108(__this, p0, p1, method) (( void (*) (t4061 *, t5 *, t144, MethodInfo*))m27108_gshared)(__this, p0, p1, method)
extern "C" t269  m27109_gshared (t4061 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m27109(__this, p0, p1, method) (( t269  (*) (t4061 *, int32_t, int32_t, MethodInfo*))m27109_gshared)(__this, p0, p1, method)
extern "C" t5 * m27110_gshared (t4061 * __this, int32_t p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m27110(__this, p0, p1, p2, p3, method) (( t5 * (*) (t4061 *, int32_t, int32_t, t142 *, t5 *, MethodInfo*))m27110_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t269  m27111_gshared (t4061 * __this, t5 * p0, MethodInfo* method);
#define m27111(__this, p0, method) (( t269  (*) (t4061 *, t5 *, MethodInfo*))m27111_gshared)(__this, p0, method)
