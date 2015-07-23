#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3989;
struct t3599;
struct t125;
struct t2;
struct t5;
struct t868;

extern "C" void m26300_gshared (t3989 * __this, MethodInfo* method);
#define m26300(__this, method) (( void (*) (t3989 *, MethodInfo*))m26300_gshared)(__this, method)
extern "C" void m26302_gshared (t3989 * __this, t3599 * p0, MethodInfo* method);
#define m26302(__this, p0, method) (( void (*) (t3989 *, t3599 *, MethodInfo*))m26302_gshared)(__this, p0, method)
extern "C" void m26304_gshared (t3989 * __this, t3599 * p0, MethodInfo* method);
#define m26304(__this, p0, method) (( void (*) (t3989 *, t3599 *, MethodInfo*))m26304_gshared)(__this, p0, method)
extern "C" t125 * m26305_gshared (t3989 * __this, t2* p0, t5 * p1, MethodInfo* method);
#define m26305(__this, p0, p1, method) (( t125 * (*) (t3989 *, t2*, t5 *, MethodInfo*))m26305_gshared)(__this, p0, p1, method)
extern "C" t868 * m26306_gshared (t3989 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m26306(__this, p0, p1, method) (( t868 * (*) (t3989 *, t5 *, t125 *, MethodInfo*))m26306_gshared)(__this, p0, p1, method)
extern "C" t868 * m26308_gshared (t5 * __this , t3599 * p0, MethodInfo* method);
#define m26308(__this , p0, method) (( t868 * (*) (t5 * , t3599 *, MethodInfo*))m26308_gshared)(__this , p0, method)
extern "C" void m26309_gshared (t3989 * __this, uint8_t p0, MethodInfo* method);
#define m26309(__this, p0, method) (( void (*) (t3989 *, uint8_t, MethodInfo*))m26309_gshared)(__this, p0, method)
