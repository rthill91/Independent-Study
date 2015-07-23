#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3322;
struct t5;
struct t36;
#include "t750.h"

extern "C" void m19423_gshared (t3322 * __this, t36 * p0, MethodInfo* method);
#define m19423(__this, p0, method) (( void (*) (t3322 *, t36 *, MethodInfo*))m19423_gshared)(__this, p0, method)
extern "C" t5 * m19424_gshared (t3322 * __this, MethodInfo* method);
#define m19424(__this, method) (( t5 * (*) (t3322 *, MethodInfo*))m19424_gshared)(__this, method)
extern "C" void m19425_gshared (t3322 * __this, MethodInfo* method);
#define m19425(__this, method) (( void (*) (t3322 *, MethodInfo*))m19425_gshared)(__this, method)
extern "C" bool m19426_gshared (t3322 * __this, MethodInfo* method);
#define m19426(__this, method) (( bool (*) (t3322 *, MethodInfo*))m19426_gshared)(__this, method)
extern "C" t750  m19427_gshared (t3322 * __this, MethodInfo* method);
#define m19427(__this, method) (( t750  (*) (t3322 *, MethodInfo*))m19427_gshared)(__this, method)
