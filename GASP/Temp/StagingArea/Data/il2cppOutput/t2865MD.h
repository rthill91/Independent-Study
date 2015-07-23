#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2865;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t2853.h"

extern "C" void m14654_gshared (t2865 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14654(__this, p0, p1, method) (( void (*) (t2865 *, t5 *, t144, MethodInfo*))m14654_gshared)(__this, p0, p1, method)
extern "C" t2853  m14656_gshared (t2865 * __this, uint8_t p0, int32_t p1, MethodInfo* method);
#define m14656(__this, p0, p1, method) (( t2853  (*) (t2865 *, uint8_t, int32_t, MethodInfo*))m14656_gshared)(__this, p0, p1, method)
extern "C" t5 * m14658_gshared (t2865 * __this, uint8_t p0, int32_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14658(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2865 *, uint8_t, int32_t, t142 *, t5 *, MethodInfo*))m14658_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2853  m14660_gshared (t2865 * __this, t5 * p0, MethodInfo* method);
#define m14660(__this, p0, method) (( t2853  (*) (t2865 *, t5 *, MethodInfo*))m14660_gshared)(__this, p0, method)
