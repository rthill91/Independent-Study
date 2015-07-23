#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3478;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3437.h"

extern "C" void m20952_gshared (t3478 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m20952(__this, p0, p1, method) (( void (*) (t3478 *, t5 *, t144, MethodInfo*))m20952_gshared)(__this, p0, p1, method)
extern "C" t3437  m20954_gshared (t3478 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m20954(__this, p0, p1, method) (( t3437  (*) (t3478 *, t5 *, t5 *, MethodInfo*))m20954_gshared)(__this, p0, p1, method)
extern "C" t5 * m20956_gshared (t3478 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m20956(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3478 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m20956_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3437  m20958_gshared (t3478 * __this, t5 * p0, MethodInfo* method);
#define m20958(__this, p0, method) (( t3437  (*) (t3478 *, t5 *, MethodInfo*))m20958_gshared)(__this, p0, method)
