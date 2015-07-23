#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3327;
#include "t750.h"

extern "C" void m19555_gshared (t3327 * __this, MethodInfo* method);
#define m19555(__this, method) (( void (*) (t3327 *, MethodInfo*))m19555_gshared)(__this, method)
extern "C" int32_t m19556_gshared (t3327 * __this, t750  p0, MethodInfo* method);
#define m19556(__this, p0, method) (( int32_t (*) (t3327 *, t750 , MethodInfo*))m19556_gshared)(__this, p0, method)
extern "C" bool m19557_gshared (t3327 * __this, t750  p0, t750  p1, MethodInfo* method);
#define m19557(__this, p0, p1, method) (( bool (*) (t3327 *, t750 , t750 , MethodInfo*))m19557_gshared)(__this, p0, p1, method)
