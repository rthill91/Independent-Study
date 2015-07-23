#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3395;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t269.h"

extern "C" void m20356_gshared (t3395 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m20356(__this, p0, p1, method) (( void (*) (t3395 *, t5 *, t144, MethodInfo*))m20356_gshared)(__this, p0, p1, method)
extern "C" t269  m20357_gshared (t3395 * __this, uint64_t p0, t5 * p1, MethodInfo* method);
#define m20357(__this, p0, p1, method) (( t269  (*) (t3395 *, uint64_t, t5 *, MethodInfo*))m20357_gshared)(__this, p0, p1, method)
extern "C" t5 * m20358_gshared (t3395 * __this, uint64_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m20358(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3395 *, uint64_t, t5 *, t142 *, t5 *, MethodInfo*))m20358_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t269  m20359_gshared (t3395 * __this, t5 * p0, MethodInfo* method);
#define m20359(__this, p0, method) (( t269  (*) (t3395 *, t5 *, MethodInfo*))m20359_gshared)(__this, p0, method)
