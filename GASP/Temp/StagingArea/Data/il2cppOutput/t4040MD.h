#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4040;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m26861_gshared (t4040 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m26861(__this, p0, p1, method) (( void (*) (t4040 *, t5 *, t144, MethodInfo*))m26861_gshared)(__this, p0, p1, method)
extern "C" uint8_t m26862_gshared (t4040 * __this, t5 * p0, uint8_t p1, MethodInfo* method);
#define m26862(__this, p0, p1, method) (( uint8_t (*) (t4040 *, t5 *, uint8_t, MethodInfo*))m26862_gshared)(__this, p0, p1, method)
extern "C" t5 * m26863_gshared (t4040 * __this, t5 * p0, uint8_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m26863(__this, p0, p1, p2, p3, method) (( t5 * (*) (t4040 *, t5 *, uint8_t, t142 *, t5 *, MethodInfo*))m26863_gshared)(__this, p0, p1, p2, p3, method)
extern "C" uint8_t m26864_gshared (t4040 * __this, t5 * p0, MethodInfo* method);
#define m26864(__this, p0, method) (( uint8_t (*) (t4040 *, t5 *, MethodInfo*))m26864_gshared)(__this, p0, method)
