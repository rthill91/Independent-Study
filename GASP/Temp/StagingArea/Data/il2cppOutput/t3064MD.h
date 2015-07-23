#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3064;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m16602_gshared (t3064 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m16602(__this, p0, p1, method) (( void (*) (t3064 *, t5 *, t144, MethodInfo*))m16602_gshared)(__this, p0, p1, method)
extern "C" int32_t m16603_gshared (t3064 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m16603(__this, p0, p1, method) (( int32_t (*) (t3064 *, int32_t, int32_t, MethodInfo*))m16603_gshared)(__this, p0, p1, method)
extern "C" t5 * m16604_gshared (t3064 * __this, int32_t p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m16604(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3064 *, int32_t, int32_t, t142 *, t5 *, MethodInfo*))m16604_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16605_gshared (t3064 * __this, t5 * p0, MethodInfo* method);
#define m16605(__this, p0, method) (( int32_t (*) (t3064 *, t5 *, MethodInfo*))m16605_gshared)(__this, p0, method)
