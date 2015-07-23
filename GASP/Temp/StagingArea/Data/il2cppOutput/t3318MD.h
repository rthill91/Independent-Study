#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3318;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t749.h"

extern "C" void m19409_gshared (t3318 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m19409(__this, p0, p1, method) (( void (*) (t3318 *, t5 *, t144, MethodInfo*))m19409_gshared)(__this, p0, p1, method)
extern "C" bool m19410_gshared (t3318 * __this, t749  p0, MethodInfo* method);
#define m19410(__this, p0, method) (( bool (*) (t3318 *, t749 , MethodInfo*))m19410_gshared)(__this, p0, method)
extern "C" t5 * m19411_gshared (t3318 * __this, t749  p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m19411(__this, p0, p1, p2, method) (( t5 * (*) (t3318 *, t749 , t142 *, t5 *, MethodInfo*))m19411_gshared)(__this, p0, p1, p2, method)
extern "C" bool m19412_gshared (t3318 * __this, t5 * p0, MethodInfo* method);
#define m19412(__this, p0, method) (( bool (*) (t3318 *, t5 *, MethodInfo*))m19412_gshared)(__this, p0, method)
