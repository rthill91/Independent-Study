#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3310;
#include "t760.h"

extern "C" void m19268_gshared (t3310 * __this, MethodInfo* method);
#define m19268(__this, method) (( void (*) (t3310 *, MethodInfo*))m19268_gshared)(__this, method)
extern "C" int32_t m19269_gshared (t3310 * __this, t760  p0, t760  p1, MethodInfo* method);
#define m19269(__this, p0, p1, method) (( int32_t (*) (t3310 *, t760 , t760 , MethodInfo*))m19269_gshared)(__this, p0, p1, method)
