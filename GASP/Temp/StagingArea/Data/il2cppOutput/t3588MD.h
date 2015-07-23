#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3588;
struct t5;
struct t125;
struct t7;

extern "C" void m21929_gshared (t3588 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m21929(__this, p0, p1, method) (( void (*) (t3588 *, t5 *, t125 *, MethodInfo*))m21929_gshared)(__this, p0, p1, method)
extern "C" void m21930_gshared (t3588 * __this, t7* p0, MethodInfo* method);
#define m21930(__this, p0, method) (( void (*) (t3588 *, t7*, MethodInfo*))m21930_gshared)(__this, p0, method)
extern "C" bool m21931_gshared (t3588 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m21931(__this, p0, p1, method) (( bool (*) (t3588 *, t5 *, t125 *, MethodInfo*))m21931_gshared)(__this, p0, p1, method)
