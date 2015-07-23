#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3165;
struct t5;
struct t202;
#include "t83.h"

extern "C" void m17823_gshared (t3165 * __this, t202 * p0, MethodInfo* method);
#define m17823(__this, p0, method) (( void (*) (t3165 *, t202 *, MethodInfo*))m17823_gshared)(__this, p0, method)
extern "C" t5 * m17824_gshared (t3165 * __this, MethodInfo* method);
#define m17824(__this, method) (( t5 * (*) (t3165 *, MethodInfo*))m17824_gshared)(__this, method)
extern "C" void m17825_gshared (t3165 * __this, MethodInfo* method);
#define m17825(__this, method) (( void (*) (t3165 *, MethodInfo*))m17825_gshared)(__this, method)
extern "C" bool m17826_gshared (t3165 * __this, MethodInfo* method);
#define m17826(__this, method) (( bool (*) (t3165 *, MethodInfo*))m17826_gshared)(__this, method)
extern "C" t83  m17827_gshared (t3165 * __this, MethodInfo* method);
#define m17827(__this, method) (( t83  (*) (t3165 *, MethodInfo*))m17827_gshared)(__this, method)
