#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2848;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t2839.h"

extern "C" void m14549_gshared (t2848 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14549(__this, p0, p1, method) (( void (*) (t2848 *, t5 *, t144, MethodInfo*))m14549_gshared)(__this, p0, p1, method)
extern "C" t2839  m14550_gshared (t2848 * __this, uint8_t p0, int32_t p1, MethodInfo* method);
#define m14550(__this, p0, p1, method) (( t2839  (*) (t2848 *, uint8_t, int32_t, MethodInfo*))m14550_gshared)(__this, p0, p1, method)
extern "C" t5 * m14551_gshared (t2848 * __this, uint8_t p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14551(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2848 *, uint8_t, int32_t, t142 *, t5 *, MethodInfo*))m14551_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2839  m14552_gshared (t2848 * __this, t5 * p0, MethodInfo* method);
#define m14552(__this, p0, method) (( t2839  (*) (t2848 *, t5 *, MethodInfo*))m14552_gshared)(__this, p0, method)
