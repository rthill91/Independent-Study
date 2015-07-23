#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2747;
struct t5;

extern "C" void m13700_gshared (t2747 * __this, MethodInfo* method);
#define m13700(__this, method) (( void (*) (t2747 *, MethodInfo*))m13700_gshared)(__this, method)
extern "C" int32_t m13701_gshared (t2747 * __this, t5 * p0, MethodInfo* method);
#define m13701(__this, p0, method) (( int32_t (*) (t2747 *, t5 *, MethodInfo*))m13701_gshared)(__this, p0, method)
extern "C" bool m13702_gshared (t2747 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m13702(__this, p0, p1, method) (( bool (*) (t2747 *, t5 *, t5 *, MethodInfo*))m13702_gshared)(__this, p0, p1, method)
