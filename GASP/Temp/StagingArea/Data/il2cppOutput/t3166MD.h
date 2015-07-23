#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3166;
struct t5;
struct t36;
#include "t341.h"

extern "C" void m17828_gshared (t3166 * __this, t36 * p0, MethodInfo* method);
#define m17828(__this, p0, method) (( void (*) (t3166 *, t36 *, MethodInfo*))m17828_gshared)(__this, p0, method)
extern "C" t5 * m17829_gshared (t3166 * __this, MethodInfo* method);
#define m17829(__this, method) (( t5 * (*) (t3166 *, MethodInfo*))m17829_gshared)(__this, method)
extern "C" void m17830_gshared (t3166 * __this, MethodInfo* method);
#define m17830(__this, method) (( void (*) (t3166 *, MethodInfo*))m17830_gshared)(__this, method)
extern "C" bool m17831_gshared (t3166 * __this, MethodInfo* method);
#define m17831(__this, method) (( bool (*) (t3166 *, MethodInfo*))m17831_gshared)(__this, method)
extern "C" t341  m17832_gshared (t3166 * __this, MethodInfo* method);
#define m17832(__this, method) (( t341  (*) (t3166 *, MethodInfo*))m17832_gshared)(__this, method)
