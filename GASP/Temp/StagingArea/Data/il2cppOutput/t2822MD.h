#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2822;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m14310_gshared (t2822 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14310(__this, p0, p1, method) (( void (*) (t2822 *, t5 *, t144, MethodInfo*))m14310_gshared)(__this, p0, p1, method)
extern "C" uint8_t m14311_gshared (t2822 * __this, uint8_t p0, t5 * p1, MethodInfo* method);
#define m14311(__this, p0, p1, method) (( uint8_t (*) (t2822 *, uint8_t, t5 *, MethodInfo*))m14311_gshared)(__this, p0, p1, method)
extern "C" t5 * m14312_gshared (t2822 * __this, uint8_t p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14312(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2822 *, uint8_t, t5 *, t142 *, t5 *, MethodInfo*))m14312_gshared)(__this, p0, p1, p2, p3, method)
extern "C" uint8_t m14313_gshared (t2822 * __this, t5 * p0, MethodInfo* method);
#define m14313(__this, p0, method) (( uint8_t (*) (t2822 *, t5 *, MethodInfo*))m14313_gshared)(__this, p0, method)
