#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3411;

extern "C" void m20375_gshared (t3411 * __this, MethodInfo* method);
#define m20375(__this, method) (( void (*) (t3411 *, MethodInfo*))m20375_gshared)(__this, method)
extern "C" int32_t m20376_gshared (t3411 * __this, uint64_t p0, MethodInfo* method);
#define m20376(__this, p0, method) (( int32_t (*) (t3411 *, uint64_t, MethodInfo*))m20376_gshared)(__this, p0, method)
extern "C" bool m20377_gshared (t3411 * __this, uint64_t p0, uint64_t p1, MethodInfo* method);
#define m20377(__this, p0, p1, method) (( bool (*) (t3411 *, uint64_t, uint64_t, MethodInfo*))m20377_gshared)(__this, p0, p1, method)
