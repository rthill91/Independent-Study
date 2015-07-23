#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3944;
struct t5;
struct t125;
struct t3943;
struct t7;

extern "C" void m25819_gshared (t3944 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m25819(__this, p0, p1, method) (( void (*) (t3944 *, t5 *, t125 *, MethodInfo*))m25819_gshared)(__this, p0, p1, method)
extern "C" void m25820_gshared (t3944 * __this, t3943 * p0, MethodInfo* method);
#define m25820(__this, p0, method) (( void (*) (t3944 *, t3943 *, MethodInfo*))m25820_gshared)(__this, p0, method)
extern "C" void m25821_gshared (t3944 * __this, t7* p0, MethodInfo* method);
#define m25821(__this, p0, method) (( void (*) (t3944 *, t7*, MethodInfo*))m25821_gshared)(__this, p0, method)
extern "C" bool m25822_gshared (t3944 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m25822(__this, p0, p1, method) (( bool (*) (t3944 *, t5 *, t125 *, MethodInfo*))m25822_gshared)(__this, p0, p1, method)
