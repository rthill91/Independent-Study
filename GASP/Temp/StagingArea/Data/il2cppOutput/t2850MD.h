#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2850;
struct t5;

extern "C" void m14559_gshared (t2850 * __this, MethodInfo* method);
#define m14559(__this, method) (( void (*) (t2850 *, MethodInfo*))m14559_gshared)(__this, method)
extern "C" void m14560_gshared (t5 * __this , MethodInfo* method);
#define m14560(__this , method) (( void (*) (t5 * , MethodInfo*))m14560_gshared)(__this , method)
extern "C" int32_t m14561_gshared (t2850 * __this, t5 * p0, MethodInfo* method);
#define m14561(__this, p0, method) (( int32_t (*) (t2850 *, t5 *, MethodInfo*))m14561_gshared)(__this, p0, method)
extern "C" bool m14562_gshared (t2850 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m14562(__this, p0, p1, method) (( bool (*) (t2850 *, t5 *, t5 *, MethodInfo*))m14562_gshared)(__this, p0, p1, method)
extern "C" t2850 * m14563_gshared (t5 * __this , MethodInfo* method);
#define m14563(__this , method) (( t2850 * (*) (t5 * , MethodInfo*))m14563_gshared)(__this , method)
