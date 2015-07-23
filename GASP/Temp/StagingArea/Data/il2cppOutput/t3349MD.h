#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3349;
struct t5;

extern "C" void m19771_gshared (t3349 * __this, MethodInfo* method);
#define m19771(__this, method) (( void (*) (t3349 *, MethodInfo*))m19771_gshared)(__this, method)
extern "C" void m19772_gshared (t5 * __this , MethodInfo* method);
#define m19772(__this , method) (( void (*) (t5 * , MethodInfo*))m19772_gshared)(__this , method)
extern "C" int32_t m19773_gshared (t3349 * __this, t5 * p0, MethodInfo* method);
#define m19773(__this, p0, method) (( int32_t (*) (t3349 *, t5 *, MethodInfo*))m19773_gshared)(__this, p0, method)
extern "C" bool m19774_gshared (t3349 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m19774(__this, p0, p1, method) (( bool (*) (t3349 *, t5 *, t5 *, MethodInfo*))m19774_gshared)(__this, p0, p1, method)
extern "C" t3349 * m19775_gshared (t5 * __this , MethodInfo* method);
#define m19775(__this , method) (( t3349 * (*) (t5 * , MethodInfo*))m19775_gshared)(__this , method)
