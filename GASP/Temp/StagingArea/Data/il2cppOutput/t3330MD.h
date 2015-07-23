#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3330;
#include "t750.h"

extern "C" void m19566_gshared (t3330 * __this, MethodInfo* method);
#define m19566(__this, method) (( void (*) (t3330 *, MethodInfo*))m19566_gshared)(__this, method)
extern "C" int32_t m19567_gshared (t3330 * __this, t750  p0, t750  p1, MethodInfo* method);
#define m19567(__this, p0, p1, method) (( int32_t (*) (t3330 *, t750 , t750 , MethodInfo*))m19567_gshared)(__this, p0, p1, method)
