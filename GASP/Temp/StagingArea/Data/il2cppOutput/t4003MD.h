#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4003;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m26462_gshared (t4003 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m26462(__this, p0, p1, method) (( void (*) (t4003 *, t5 *, t144, MethodInfo*))m26462_gshared)(__this, p0, p1, method)
extern "C" uint8_t m26464_gshared (t4003 * __this, t5 * p0, MethodInfo* method);
#define m26464(__this, p0, method) (( uint8_t (*) (t4003 *, t5 *, MethodInfo*))m26464_gshared)(__this, p0, method)
extern "C" t5 * m26466_gshared (t4003 * __this, t5 * p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m26466(__this, p0, p1, p2, method) (( t5 * (*) (t4003 *, t5 *, t142 *, t5 *, MethodInfo*))m26466_gshared)(__this, p0, p1, p2, method)
extern "C" uint8_t m26468_gshared (t4003 * __this, t5 * p0, MethodInfo* method);
#define m26468(__this, p0, method) (( uint8_t (*) (t4003 *, t5 *, MethodInfo*))m26468_gshared)(__this, p0, method)
