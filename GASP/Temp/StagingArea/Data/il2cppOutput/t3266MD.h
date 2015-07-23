#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3266;
struct t5;
struct t36;
#include "t892.h"

extern "C" void m18742_gshared (t3266 * __this, t36 * p0, MethodInfo* method);
#define m18742(__this, p0, method) (( void (*) (t3266 *, t36 *, MethodInfo*))m18742_gshared)(__this, p0, method)
extern "C" t5 * m18743_gshared (t3266 * __this, MethodInfo* method);
#define m18743(__this, method) (( t5 * (*) (t3266 *, MethodInfo*))m18743_gshared)(__this, method)
extern "C" void m18744_gshared (t3266 * __this, MethodInfo* method);
#define m18744(__this, method) (( void (*) (t3266 *, MethodInfo*))m18744_gshared)(__this, method)
extern "C" bool m18745_gshared (t3266 * __this, MethodInfo* method);
#define m18745(__this, method) (( bool (*) (t3266 *, MethodInfo*))m18745_gshared)(__this, method)
extern "C" t892  m18746_gshared (t3266 * __this, MethodInfo* method);
#define m18746(__this, method) (( t892  (*) (t3266 *, MethodInfo*))m18746_gshared)(__this, method)
