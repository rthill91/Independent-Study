#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3130;
struct t5;
struct t36;
#include "t3129.h"

extern "C" void m17434_gshared (t3130 * __this, t36 * p0, MethodInfo* method);
#define m17434(__this, p0, method) (( void (*) (t3130 *, t36 *, MethodInfo*))m17434_gshared)(__this, p0, method)
extern "C" t5 * m17435_gshared (t3130 * __this, MethodInfo* method);
#define m17435(__this, method) (( t5 * (*) (t3130 *, MethodInfo*))m17435_gshared)(__this, method)
extern "C" void m17436_gshared (t3130 * __this, MethodInfo* method);
#define m17436(__this, method) (( void (*) (t3130 *, MethodInfo*))m17436_gshared)(__this, method)
extern "C" bool m17437_gshared (t3130 * __this, MethodInfo* method);
#define m17437(__this, method) (( bool (*) (t3130 *, MethodInfo*))m17437_gshared)(__this, method)
extern "C" t3129  m17438_gshared (t3130 * __this, MethodInfo* method);
#define m17438(__this, method) (( t3129  (*) (t3130 *, MethodInfo*))m17438_gshared)(__this, method)
