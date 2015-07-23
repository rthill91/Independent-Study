#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3207;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3195.h"

extern "C" void m18176_gshared (t3207 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m18176(__this, p0, p1, method) (( void (*) (t3207 *, t5 *, t144, MethodInfo*))m18176_gshared)(__this, p0, p1, method)
extern "C" t3195  m18178_gshared (t3207 * __this, uint8_t p0, t5 * p1, MethodInfo* method);
#define m18178(__this, p0, p1, method) (( t3195  (*) (t3207 *, uint8_t, t5 *, MethodInfo*))m18178_gshared)(__this, p0, p1, method)
extern "C" t5 * m18180_gshared (t3207 * __this, uint8_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m18180(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3207 *, uint8_t, t5 *, t142 *, t5 *, MethodInfo*))m18180_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3195  m18182_gshared (t3207 * __this, t5 * p0, MethodInfo* method);
#define m18182(__this, p0, method) (( t3195  (*) (t3207 *, t5 *, MethodInfo*))m18182_gshared)(__this, p0, method)
