#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2966;
struct t5;
struct t36;
#include "t2965.h"

extern "C" void m15643_gshared (t2966 * __this, t36 * p0, MethodInfo* method);
#define m15643(__this, p0, method) (( void (*) (t2966 *, t36 *, MethodInfo*))m15643_gshared)(__this, p0, method)
extern "C" t5 * m15644_gshared (t2966 * __this, MethodInfo* method);
#define m15644(__this, method) (( t5 * (*) (t2966 *, MethodInfo*))m15644_gshared)(__this, method)
extern "C" void m15645_gshared (t2966 * __this, MethodInfo* method);
#define m15645(__this, method) (( void (*) (t2966 *, MethodInfo*))m15645_gshared)(__this, method)
extern "C" bool m15646_gshared (t2966 * __this, MethodInfo* method);
#define m15646(__this, method) (( bool (*) (t2966 *, MethodInfo*))m15646_gshared)(__this, method)
extern "C" t2965  m15647_gshared (t2966 * __this, MethodInfo* method);
#define m15647(__this, method) (( t2965  (*) (t2966 *, MethodInfo*))m15647_gshared)(__this, method)
