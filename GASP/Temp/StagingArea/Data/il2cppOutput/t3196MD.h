#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3196;
struct t5;
struct t36;
#include "t3195.h"

extern "C" void m18098_gshared (t3196 * __this, t36 * p0, MethodInfo* method);
#define m18098(__this, p0, method) (( void (*) (t3196 *, t36 *, MethodInfo*))m18098_gshared)(__this, p0, method)
extern "C" t5 * m18099_gshared (t3196 * __this, MethodInfo* method);
#define m18099(__this, method) (( t5 * (*) (t3196 *, MethodInfo*))m18099_gshared)(__this, method)
extern "C" void m18100_gshared (t3196 * __this, MethodInfo* method);
#define m18100(__this, method) (( void (*) (t3196 *, MethodInfo*))m18100_gshared)(__this, method)
extern "C" bool m18101_gshared (t3196 * __this, MethodInfo* method);
#define m18101(__this, method) (( bool (*) (t3196 *, MethodInfo*))m18101_gshared)(__this, method)
extern "C" t3195  m18102_gshared (t3196 * __this, MethodInfo* method);
#define m18102(__this, method) (( t3195  (*) (t3196 *, MethodInfo*))m18102_gshared)(__this, method)
