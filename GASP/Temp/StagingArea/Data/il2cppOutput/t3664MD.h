#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3664;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3655.h"

extern "C" void m22671_gshared (t3664 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m22671(__this, p0, p1, method) (( void (*) (t3664 *, t5 *, t144, MethodInfo*))m22671_gshared)(__this, p0, p1, method)
extern "C" t3655  m22673_gshared (t3664 * __this, uint8_t p0, t5 * p1, MethodInfo* method);
#define m22673(__this, p0, p1, method) (( t3655  (*) (t3664 *, uint8_t, t5 *, MethodInfo*))m22673_gshared)(__this, p0, p1, method)
extern "C" t5 * m22675_gshared (t3664 * __this, uint8_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m22675(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3664 *, uint8_t, t5 *, t142 *, t5 *, MethodInfo*))m22675_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3655  m22677_gshared (t3664 * __this, t5 * p0, MethodInfo* method);
#define m22677(__this, p0, method) (( t3655  (*) (t3664 *, t5 *, MethodInfo*))m22677_gshared)(__this, p0, method)
