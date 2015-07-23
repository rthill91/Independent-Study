#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2981;
struct t5;
struct t36;
#include "t2980.h"

extern "C" void m15756_gshared (t2981 * __this, t36 * p0, MethodInfo* method);
#define m15756(__this, p0, method) (( void (*) (t2981 *, t36 *, MethodInfo*))m15756_gshared)(__this, p0, method)
extern "C" t5 * m15757_gshared (t2981 * __this, MethodInfo* method);
#define m15757(__this, method) (( t5 * (*) (t2981 *, MethodInfo*))m15757_gshared)(__this, method)
extern "C" void m15758_gshared (t2981 * __this, MethodInfo* method);
#define m15758(__this, method) (( void (*) (t2981 *, MethodInfo*))m15758_gshared)(__this, method)
extern "C" bool m15759_gshared (t2981 * __this, MethodInfo* method);
#define m15759(__this, method) (( bool (*) (t2981 *, MethodInfo*))m15759_gshared)(__this, method)
extern "C" t2980  m15760_gshared (t2981 * __this, MethodInfo* method);
#define m15760(__this, method) (( t2980  (*) (t2981 *, MethodInfo*))m15760_gshared)(__this, method)
