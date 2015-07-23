#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4031;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t269.h"

extern "C" void m26865_gshared (t4031 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m26865(__this, p0, p1, method) (( void (*) (t4031 *, t5 *, t144, MethodInfo*))m26865_gshared)(__this, p0, p1, method)
extern "C" t269  m26866_gshared (t4031 * __this, t5 * p0, uint8_t p1, MethodInfo* method);
#define m26866(__this, p0, p1, method) (( t269  (*) (t4031 *, t5 *, uint8_t, MethodInfo*))m26866_gshared)(__this, p0, p1, method)
extern "C" t5 * m26867_gshared (t4031 * __this, t5 * p0, uint8_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m26867(__this, p0, p1, p2, p3, method) (( t5 * (*) (t4031 *, t5 *, uint8_t, t142 *, t5 *, MethodInfo*))m26867_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t269  m26868_gshared (t4031 * __this, t5 * p0, MethodInfo* method);
#define m26868(__this, p0, method) (( t269  (*) (t4031 *, t5 *, MethodInfo*))m26868_gshared)(__this, p0, method)
