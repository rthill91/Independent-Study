#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3307;
#include "t760.h"

extern "C" void m19257_gshared (t3307 * __this, MethodInfo* method);
#define m19257(__this, method) (( void (*) (t3307 *, MethodInfo*))m19257_gshared)(__this, method)
extern "C" int32_t m19258_gshared (t3307 * __this, t760  p0, MethodInfo* method);
#define m19258(__this, p0, method) (( int32_t (*) (t3307 *, t760 , MethodInfo*))m19258_gshared)(__this, p0, method)
extern "C" bool m19259_gshared (t3307 * __this, t760  p0, t760  p1, MethodInfo* method);
#define m19259(__this, p0, p1, method) (( bool (*) (t3307 *, t760 , t760 , MethodInfo*))m19259_gshared)(__this, p0, p1, method)
