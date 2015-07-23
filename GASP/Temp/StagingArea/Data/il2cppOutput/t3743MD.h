#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3743;
#include "t1168.h"

extern "C" void m23604_gshared (t3743 * __this, MethodInfo* method);
#define m23604(__this, method) (( void (*) (t3743 *, MethodInfo*))m23604_gshared)(__this, method)
extern "C" int32_t m23605_gshared (t3743 * __this, t1168  p0, MethodInfo* method);
#define m23605(__this, p0, method) (( int32_t (*) (t3743 *, t1168 , MethodInfo*))m23605_gshared)(__this, p0, method)
extern "C" bool m23606_gshared (t3743 * __this, t1168  p0, t1168  p1, MethodInfo* method);
#define m23606(__this, p0, p1, method) (( bool (*) (t3743 *, t1168 , t1168 , MethodInfo*))m23606_gshared)(__this, p0, p1, method)
