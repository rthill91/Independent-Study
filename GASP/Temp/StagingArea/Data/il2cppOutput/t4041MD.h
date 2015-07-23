#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4041;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t4032.h"

extern "C" void m26869_gshared (t4041 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m26869(__this, p0, p1, method) (( void (*) (t4041 *, t5 *, t144, MethodInfo*))m26869_gshared)(__this, p0, p1, method)
extern "C" t4032  m26870_gshared (t4041 * __this, t5 * p0, uint8_t p1, MethodInfo* method);
#define m26870(__this, p0, p1, method) (( t4032  (*) (t4041 *, t5 *, uint8_t, MethodInfo*))m26870_gshared)(__this, p0, p1, method)
extern "C" t5 * m26871_gshared (t4041 * __this, t5 * p0, uint8_t p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m26871(__this, p0, p1, p2, p3, method) (( t5 * (*) (t4041 *, t5 *, uint8_t, t142 *, t5 *, MethodInfo*))m26871_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t4032  m26872_gshared (t4041 * __this, t5 * p0, MethodInfo* method);
#define m26872(__this, p0, method) (( t4032  (*) (t4041 *, t5 *, MethodInfo*))m26872_gshared)(__this, p0, method)
