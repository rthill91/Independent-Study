#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3522;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3443.h"
#include "t914.h"

extern "C" void m21426_gshared (t3522 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m21426(__this, p0, p1, method) (( void (*) (t3522 *, t5 *, t144, MethodInfo*))m21426_gshared)(__this, p0, p1, method)
extern "C" t3443  m21427_gshared (t3522 * __this, t5 * p0, t914  p1, MethodInfo* method);
#define m21427(__this, p0, p1, method) (( t3443  (*) (t3522 *, t5 *, t914 , MethodInfo*))m21427_gshared)(__this, p0, p1, method)
extern "C" t5 * m21428_gshared (t3522 * __this, t5 * p0, t914  p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m21428(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3522 *, t5 *, t914 , t142 *, t5 *, MethodInfo*))m21428_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3443  m21429_gshared (t3522 * __this, t5 * p0, MethodInfo* method);
#define m21429(__this, p0, method) (( t3443  (*) (t3522 *, t5 *, MethodInfo*))m21429_gshared)(__this, p0, method)
