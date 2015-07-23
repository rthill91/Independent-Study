#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3350;

extern "C" void m19776_gshared (t3350 * __this, MethodInfo* method);
#define m19776(__this, method) (( void (*) (t3350 *, MethodInfo*))m19776_gshared)(__this, method)
extern "C" int32_t m19777_gshared (t3350 * __this, int64_t p0, MethodInfo* method);
#define m19777(__this, p0, method) (( int32_t (*) (t3350 *, int64_t, MethodInfo*))m19777_gshared)(__this, p0, method)
extern "C" bool m19778_gshared (t3350 * __this, int64_t p0, int64_t p1, MethodInfo* method);
#define m19778(__this, p0, p1, method) (( bool (*) (t3350 *, int64_t, int64_t, MethodInfo*))m19778_gshared)(__this, p0, p1, method)
