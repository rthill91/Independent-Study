#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3164;
struct t5;
struct t36;
#include "t83.h"

extern "C" void m17818_gshared (t3164 * __this, t36 * p0, MethodInfo* method);
#define m17818(__this, p0, method) (( void (*) (t3164 *, t36 *, MethodInfo*))m17818_gshared)(__this, p0, method)
extern "C" t5 * m17819_gshared (t3164 * __this, MethodInfo* method);
#define m17819(__this, method) (( t5 * (*) (t3164 *, MethodInfo*))m17819_gshared)(__this, method)
extern "C" void m17820_gshared (t3164 * __this, MethodInfo* method);
#define m17820(__this, method) (( void (*) (t3164 *, MethodInfo*))m17820_gshared)(__this, method)
extern "C" bool m17821_gshared (t3164 * __this, MethodInfo* method);
#define m17821(__this, method) (( bool (*) (t3164 *, MethodInfo*))m17821_gshared)(__this, method)
extern "C" t83  m17822_gshared (t3164 * __this, MethodInfo* method);
#define m17822(__this, method) (( t83  (*) (t3164 *, MethodInfo*))m17822_gshared)(__this, method)
