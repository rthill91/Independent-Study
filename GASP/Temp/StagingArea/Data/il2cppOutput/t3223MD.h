#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3223;
struct t5;
struct t36;
#include "t139.h"

extern "C" void m18255_gshared (t3223 * __this, t36 * p0, MethodInfo* method);
#define m18255(__this, p0, method) (( void (*) (t3223 *, t36 *, MethodInfo*))m18255_gshared)(__this, p0, method)
extern "C" t5 * m18256_gshared (t3223 * __this, MethodInfo* method);
#define m18256(__this, method) (( t5 * (*) (t3223 *, MethodInfo*))m18256_gshared)(__this, method)
extern "C" void m18257_gshared (t3223 * __this, MethodInfo* method);
#define m18257(__this, method) (( void (*) (t3223 *, MethodInfo*))m18257_gshared)(__this, method)
extern "C" bool m18258_gshared (t3223 * __this, MethodInfo* method);
#define m18258(__this, method) (( bool (*) (t3223 *, MethodInfo*))m18258_gshared)(__this, method)
extern "C" t139  m18259_gshared (t3223 * __this, MethodInfo* method);
#define m18259(__this, method) (( t139  (*) (t3223 *, MethodInfo*))m18259_gshared)(__this, method)
