#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2797;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t2789.h"

extern "C" void m14106_gshared (t2797 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m14106(__this, p0, p1, method) (( void (*) (t2797 *, t5 *, t144, MethodInfo*))m14106_gshared)(__this, p0, p1, method)
extern "C" t2789  m14107_gshared (t2797 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m14107(__this, p0, p1, method) (( t2789  (*) (t2797 *, t5 *, t5 *, MethodInfo*))m14107_gshared)(__this, p0, p1, method)
extern "C" t5 * m14108_gshared (t2797 * __this, t5 * p0, t5 * p1, t142 * p2, t5 * p3, MethodInfo* method);
#define m14108(__this, p0, p1, p2, p3, method) (( t5 * (*) (t2797 *, t5 *, t5 *, t142 *, t5 *, MethodInfo*))m14108_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2789  m14109_gshared (t2797 * __this, t5 * p0, MethodInfo* method);
#define m14109(__this, p0, method) (( t2789  (*) (t2797 *, t5 *, MethodInfo*))m14109_gshared)(__this, p0, method)
