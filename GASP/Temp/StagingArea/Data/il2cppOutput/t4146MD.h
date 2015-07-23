#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4146;
#include "t915.h"

extern "C" void m27577_gshared (t4146 * __this, MethodInfo* method);
#define m27577(__this, method) (( void (*) (t4146 *, MethodInfo*))m27577_gshared)(__this, method)
extern "C" int32_t m27578_gshared (t4146 * __this, t915  p0, MethodInfo* method);
#define m27578(__this, p0, method) (( int32_t (*) (t4146 *, t915 , MethodInfo*))m27578_gshared)(__this, p0, method)
extern "C" bool m27579_gshared (t4146 * __this, t915  p0, t915  p1, MethodInfo* method);
#define m27579(__this, p0, p1, method) (( bool (*) (t4146 *, t915 , t915 , MethodInfo*))m27579_gshared)(__this, p0, p1, method)
