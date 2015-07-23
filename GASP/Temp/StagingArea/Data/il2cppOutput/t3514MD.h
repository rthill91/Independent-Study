#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3514;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t269.h"
#include "t914.h"

extern "C" void m21422_gshared (t3514 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m21422(__this, p0, p1, method) (( void (*) (t3514 *, t5 *, t144, MethodInfo*))m21422_gshared)(__this, p0, p1, method)
extern "C" t269  m21423_gshared (t3514 * __this, t5 * p0, t914  p1, MethodInfo* method);
#define m21423(__this, p0, p1, method) (( t269  (*) (t3514 *, t5 *, t914 , MethodInfo*))m21423_gshared)(__this, p0, p1, method)
extern "C" t5 * m21424_gshared (t3514 * __this, t5 * p0, t914  p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m21424(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3514 *, t5 *, t914 , t142 *, t5 *, MethodInfo*))m21424_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t269  m21425_gshared (t3514 * __this, t5 * p0, MethodInfo* method);
#define m21425(__this, p0, method) (( t269  (*) (t3514 *, t5 *, MethodInfo*))m21425_gshared)(__this, p0, method)
