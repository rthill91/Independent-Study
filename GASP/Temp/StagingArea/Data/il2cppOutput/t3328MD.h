#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3328;
struct t5;
struct t141;
struct t142;
#include "t144.h"
#include "t750.h"

extern "C" void m19558_gshared (t3328 * __this, t5 * p0, t144 p1, MethodInfo* method);
#define m19558(__this, p0, p1, method) (( void (*) (t3328 *, t5 *, t144, MethodInfo*))m19558_gshared)(__this, p0, p1, method)
extern "C" bool m19559_gshared (t3328 * __this, t750  p0, MethodInfo* method);
#define m19559(__this, p0, method) (( bool (*) (t3328 *, t750 , MethodInfo*))m19559_gshared)(__this, p0, method)
extern "C" t5 * m19560_gshared (t3328 * __this, t750  p0, t142 * p1, t5 * p2, MethodInfo* method);
#define m19560(__this, p0, p1, p2, method) (( t5 * (*) (t3328 *, t750 , t142 *, t5 *, MethodInfo*))m19560_gshared)(__this, p0, p1, p2, method)
extern "C" bool m19561_gshared (t3328 * __this, t5 * p0, MethodInfo* method);
#define m19561(__this, p0, method) (( bool (*) (t3328 *, t5 *, MethodInfo*))m19561_gshared)(__this, p0, method)
