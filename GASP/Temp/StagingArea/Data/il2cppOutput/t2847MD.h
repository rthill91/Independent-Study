#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2847;
struct t5;
struct t141;
struct t142;
#include "t144.h"

extern "C" void m14541_gshared (t2847 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14541(__this, p0, p1, method) (( void (*) (t2847 *, t5 *, t144, MethodInfo*))m14541_gshared)(__this, p0, p1, method)
extern "C" int32_t m14542_gshared (t2847 * __this, uint8_t p0, int32_t p1, MethodInfo* method);
#define m14542(__this, p0, p1, method) (( int32_t (*) (t2847 *, uint8_t, int32_t, MethodInfo*))m14542_gshared)(__this, p0, p1, method)
extern "C" t5 * m14543_gshared (t2847 * __this, uint8_t p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14543(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2847 *, uint8_t, int32_t, t142 *, t5 *, MethodInfo*))m14543_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m14544_gshared (t2847 * __this, t5 * p0, MethodInfo* method);
#define m14544(__this, p0, method) (( int32_t (*) (t2847 *, t5 *, MethodInfo*))m14544_gshared)(__this, p0, method)
