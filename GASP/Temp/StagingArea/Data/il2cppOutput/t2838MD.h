#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2838;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t269.h"

extern "C" void m14545_gshared (t2838 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14545(__this, p0, p1, method) (( void (*) (t2838 *, t5 *, t144, MethodInfo*))m14545_gshared)(__this, p0, p1, method)
extern "C" t269  m14546_gshared (t2838 * __this, uint8_t p0, int32_t p1, MethodInfo* method);
#define m14546(__this, p0, p1, method) (( t269  (*) (t2838 *, uint8_t, int32_t, MethodInfo*))m14546_gshared)(__this, p0, p1, method)
extern "C" t5 * m14547_gshared (t2838 * __this, uint8_t p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14547(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2838 *, uint8_t, int32_t, t142 *, t5 *, MethodInfo*))m14547_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t269  m14548_gshared (t2838 * __this, t5 * p0, MethodInfo* method);
#define m14548(__this, p0, method) (( t269  (*) (t2838 *, t5 *, MethodInfo*))m14548_gshared)(__this, p0, method)
