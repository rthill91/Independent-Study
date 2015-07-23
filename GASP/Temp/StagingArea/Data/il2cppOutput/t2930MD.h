#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2930;
struct t5;
struct t36;
#include "t2915.h"

extern "C" void m15331_gshared (t2930 * __this, t36 * p0, MethodInfo* method);
#define m15331(__this, p0, method) (( void (*) (t2930 *, t36 *, MethodInfo*))m15331_gshared)(__this, p0, method)
extern "C" t5 * m15332_gshared (t2930 * __this, MethodInfo* method);
#define m15332(__this, method) (( t5 * (*) (t2930 *, MethodInfo*))m15332_gshared)(__this, method)
extern "C" void m15333_gshared (t2930 * __this, MethodInfo* method);
#define m15333(__this, method) (( void (*) (t2930 *, MethodInfo*))m15333_gshared)(__this, method)
extern "C" bool m15334_gshared (t2930 * __this, MethodInfo* method);
#define m15334(__this, method) (( bool (*) (t2930 *, MethodInfo*))m15334_gshared)(__this, method)
extern "C" t2915  m15335_gshared (t2930 * __this, MethodInfo* method);
#define m15335(__this, method) (( t2915  (*) (t2930 *, MethodInfo*))m15335_gshared)(__this, method)
