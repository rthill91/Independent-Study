#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3311;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t760.h"

extern "C" void m19270_gshared (t3311 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m19270(__this, p0, p1, method) (( void (*) (t3311 *, t5 *, t144, MethodInfo*))m19270_gshared)(__this, p0, p1, method)
extern "C" int32_t m19271_gshared (t3311 * __this, t760  p0, t760  p1, MethodInfo* method);
#define m19271(__this, p0, p1, method) (( int32_t (*) (t3311 *, t760 , t760 , MethodInfo*))m19271_gshared)(__this, p0, p1, method)
extern "C" t5 * m19272_gshared (t3311 * __this, t760  p0, t760  p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m19272(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3311 *, t760 , t760 , t142 *, t5 *, MethodInfo*))m19272_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m19273_gshared (t3311 * __this, t5 * p0, MethodInfo* method);
#define m19273(__this, p0, method) (( int32_t (*) (t3311 *, t5 *, MethodInfo*))m19273_gshared)(__this, p0, method)
