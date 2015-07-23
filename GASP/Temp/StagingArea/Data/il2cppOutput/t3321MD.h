#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3321;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t749.h"

extern "C" void m19419_gshared (t3321 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m19419(__this, p0, p1, method) (( void (*) (t3321 *, t5 *, t144, MethodInfo*))m19419_gshared)(__this, p0, p1, method)
extern "C" int32_t m19420_gshared (t3321 * __this, t749  p0, t749  p1, MethodInfo* method);
#define m19420(__this, p0, p1, method) (( int32_t (*) (t3321 *, t749 , t749 , MethodInfo*))m19420_gshared)(__this, p0, p1, method)
extern "C" t5 * m19421_gshared (t3321 * __this, t749  p0, t749  p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m19421(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3321 *, t749 , t749 , t142 *, t5 *, MethodInfo*))m19421_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m19422_gshared (t3321 * __this, t5 * p0, MethodInfo* method);
#define m19422(__this, p0, method) (( int32_t (*) (t3321 *, t5 *, MethodInfo*))m19422_gshared)(__this, p0, method)
