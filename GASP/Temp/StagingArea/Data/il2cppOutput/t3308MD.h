#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3308;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t760.h"

extern "C" void m19260_gshared (t3308 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m19260(__this, p0, p1, method) (( void (*) (t3308 *, t5 *, t144, MethodInfo*))m19260_gshared)(__this, p0, p1, method)
extern "C" bool m19261_gshared (t3308 * __this, t760  p0, MethodInfo* method);
#define m19261(__this, p0, method) (( bool (*) (t3308 *, t760 , MethodInfo*))m19261_gshared)(__this, p0, method)
extern "C" t5 * m19262_gshared (t3308 * __this, t760  p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m19262(__this, p0, p1, p2, method) (( t5 * (*) (t3308 *, t760 , t142 *, t5 *, MethodInfo*))m19262_gshared)(__this, p0, p1, p2, method)
extern "C" bool m19263_gshared (t3308 * __this, t5 * p0, MethodInfo* method);
#define m19263(__this, p0, method) (( bool (*) (t3308 *, t5 *, MethodInfo*))m19263_gshared)(__this, p0, method)
