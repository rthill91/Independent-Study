#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3927;
struct t5;
struct t36;
#include "t3912.h"

extern "C" void m25704_gshared (t3927 * __this, t36 * p0, MethodInfo* method);
#define m25704(__this, p0, method) (( void (*) (t3927 *, t36 *, MethodInfo*))m25704_gshared)(__this, p0, method)
extern "C" t5 * m25705_gshared (t3927 * __this, MethodInfo* method);
#define m25705(__this, method) (( t5 * (*) (t3927 *, MethodInfo*))m25705_gshared)(__this, method)
extern "C" void m25706_gshared (t3927 * __this, MethodInfo* method);
#define m25706(__this, method) (( void (*) (t3927 *, MethodInfo*))m25706_gshared)(__this, method)
extern "C" bool m25707_gshared (t3927 * __this, MethodInfo* method);
#define m25707(__this, method) (( bool (*) (t3927 *, MethodInfo*))m25707_gshared)(__this, method)
extern "C" t3912  m25708_gshared (t3927 * __this, MethodInfo* method);
#define m25708(__this, method) (( t3912  (*) (t3927 *, MethodInfo*))m25708_gshared)(__this, method)
