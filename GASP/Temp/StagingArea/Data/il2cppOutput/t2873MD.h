#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2873;
struct t5;
struct t36;
#include "t2872.h"

extern "C" void m14771_gshared (t2873 * __this, t36 * p0, MethodInfo* method);
#define m14771(__this, p0, method) (( void (*) (t2873 *, t36 *, MethodInfo*))m14771_gshared)(__this, p0, method)
extern "C" t5 * m14772_gshared (t2873 * __this, MethodInfo* method);
#define m14772(__this, method) (( t5 * (*) (t2873 *, MethodInfo*))m14772_gshared)(__this, method)
extern "C" void m14773_gshared (t2873 * __this, MethodInfo* method);
#define m14773(__this, method) (( void (*) (t2873 *, MethodInfo*))m14773_gshared)(__this, method)
extern "C" bool m14774_gshared (t2873 * __this, MethodInfo* method);
#define m14774(__this, method) (( bool (*) (t2873 *, MethodInfo*))m14774_gshared)(__this, method)
extern "C" t2872  m14775_gshared (t2873 * __this, MethodInfo* method);
#define m14775(__this, method) (( t2872  (*) (t2873 *, MethodInfo*))m14775_gshared)(__this, method)
