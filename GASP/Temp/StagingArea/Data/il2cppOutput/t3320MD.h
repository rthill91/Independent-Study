#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3320;
#include "t749.h"

extern "C" void m19417_gshared (t3320 * __this, MethodInfo* method);
#define m19417(__this, method) (( void (*) (t3320 *, MethodInfo*))m19417_gshared)(__this, method)
extern "C" int32_t m19418_gshared (t3320 * __this, t749  p0, t749  p1, MethodInfo* method);
#define m19418(__this, p0, p1, method) (( int32_t (*) (t3320 *, t749 , t749 , MethodInfo*))m19418_gshared)(__this, p0, p1, method)
