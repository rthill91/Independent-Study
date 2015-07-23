#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3331;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t750.h"

extern "C" void m19568_gshared (t3331 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m19568(__this, p0, p1, method) (( void (*) (t3331 *, t5 *, t144, MethodInfo*))m19568_gshared)(__this, p0, p1, method)
extern "C" int32_t m19569_gshared (t3331 * __this, t750  p0, t750  p1, MethodInfo* method);
#define m19569(__this, p0, p1, method) (( int32_t (*) (t3331 *, t750 , t750 , MethodInfo*))m19569_gshared)(__this, p0, p1, method)
extern "C" t5 * m19570_gshared (t3331 * __this, t750  p0, t750  p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m19570(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3331 *, t750 , t750 , t142 *, t5 *, MethodInfo*))m19570_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m19571_gshared (t3331 * __this, t5 * p0, MethodInfo* method);
#define m19571(__this, p0, method) (( int32_t (*) (t3331 *, t5 *, MethodInfo*))m19571_gshared)(__this, p0, method)
