#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3525;
#include "t914.h"

extern "C" void m21441_gshared (t3525 * __this, MethodInfo* method);
#define m21441(__this, method) (( void (*) (t3525 *, MethodInfo*))m21441_gshared)(__this, method)
extern "C" int32_t m21442_gshared (t3525 * __this, t914  p0, MethodInfo* method);
#define m21442(__this, p0, method) (( int32_t (*) (t3525 *, t914 , MethodInfo*))m21442_gshared)(__this, p0, method)
extern "C" bool m21443_gshared (t3525 * __this, t914  p0, t914  p1, MethodInfo* method);
#define m21443(__this, p0, p1, method) (( bool (*) (t3525 *, t914 , t914 , MethodInfo*))m21443_gshared)(__this, p0, p1, method)
