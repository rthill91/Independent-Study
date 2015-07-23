#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3351;

extern "C" void m19779_gshared (t3351 * __this, MethodInfo* method);
#define m19779(__this, method) (( void (*) (t3351 *, MethodInfo*))m19779_gshared)(__this, method)
extern "C" int32_t m19780_gshared (t3351 * __this, int64_t p0, MethodInfo* method);
#define m19780(__this, p0, method) (( int32_t (*) (t3351 *, int64_t, MethodInfo*))m19780_gshared)(__this, p0, method)
extern "C" bool m19781_gshared (t3351 * __this, int64_t p0, int64_t p1, MethodInfo* method);
#define m19781(__this, p0, p1, method) (( bool (*) (t3351 *, int64_t, int64_t, MethodInfo*))m19781_gshared)(__this, p0, p1, method)
