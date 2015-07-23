#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3937;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t3912.h"

extern "C" void m25777_gshared (t3937 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m25777(__this, p0, p1, method) (( void (*) (t3937 *, t5 *, t144, MethodInfo*))m25777_gshared)(__this, p0, p1, method)
extern "C" t3912  m25779_gshared (t3937 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m25779(__this, p0, p1, method) (( t3912  (*) (t3937 *, t5 *, t5 *, MethodInfo*))m25779_gshared)(__this, p0, p1, method)
extern "C" t5 * m25781_gshared (t3937 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m25781(__this, p0, p1, p2, p3, method) (( t5 * (*) (t3937 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m25781_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3912  m25783_gshared (t3937 * __this, t5 * p0, MethodInfo* method);
#define m25783(__this, p0, method) (( t3912  (*) (t3937 *, t5 *, MethodInfo*))m25783_gshared)(__this, p0, method)
