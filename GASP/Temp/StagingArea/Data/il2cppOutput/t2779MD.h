#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2779;
struct t5;

extern "C" void m13944_gshared (t2779 * __this, MethodInfo* method);
#define m13944(__this, method) (( void (*) (t2779 *, MethodInfo*))m13944_gshared)(__this, method)
extern "C" int32_t m13946_gshared (t2779 * __this, t5 * p0, MethodInfo* method);
#define m13946(__this, p0, method) (( int32_t (*) (t2779 *, t5 *, MethodInfo*))m13946_gshared)(__this, p0, method)
extern "C" bool m13948_gshared (t2779 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m13948(__this, p0, p1, method) (( bool (*) (t2779 *, t5 *, t5 *, MethodInfo*))m13948_gshared)(__this, p0, p1, method)
