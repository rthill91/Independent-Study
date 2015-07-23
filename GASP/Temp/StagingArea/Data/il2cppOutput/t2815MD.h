#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2815;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t269.h"

extern "C" void m14337_gshared (t2815 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14337(__this, p0, p1, method) (( void (*) (t2815 *, t5 *, t144, MethodInfo*))m14337_gshared)(__this, p0, p1, method)
extern "C" t269  m14338_gshared (t2815 * __this, uint8_t p0, t5 * p1, MethodInfo* method);
#define m14338(__this, p0, p1, method) (( t269  (*) (t2815 *, uint8_t, t5 *, MethodInfo*))m14338_gshared)(__this, p0, p1, method)
extern "C" t5 * m14339_gshared (t2815 * __this, uint8_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14339(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2815 *, uint8_t, t5 *, t142 *, t5 *, MethodInfo*))m14339_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t269  m14340_gshared (t2815 * __this, t5 * p0, MethodInfo* method);
#define m14340(__this, p0, method) (( t269  (*) (t2815 *, t5 *, MethodInfo*))m14340_gshared)(__this, p0, method)
