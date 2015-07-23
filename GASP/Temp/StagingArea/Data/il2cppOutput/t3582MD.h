#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3582;
struct t5;
struct t125;
struct t3583;
struct t7;

extern "C" void m21907_gshared (t3582 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m21907(__this, p0, p1, method) (( void (*) (t3582 *, t5 *, t125 *, MethodInfo*))m21907_gshared)(__this, p0, p1, method)
extern "C" void m21908_gshared (t3582 * __this, t3583 * p0, MethodInfo* method);
#define m21908(__this, p0, method) (( void (*) (t3582 *, t3583 *, MethodInfo*))m21908_gshared)(__this, p0, method)
extern "C" void m21909_gshared (t3582 * __this, t7* p0, MethodInfo* method);
#define m21909(__this, p0, method) (( void (*) (t3582 *, t7*, MethodInfo*))m21909_gshared)(__this, p0, method)
extern "C" bool m21910_gshared (t3582 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m21910(__this, p0, p1, method) (( bool (*) (t3582 *, t5 *, t125 *, MethodInfo*))m21910_gshared)(__this, p0, p1, method)
