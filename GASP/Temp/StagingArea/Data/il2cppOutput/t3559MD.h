#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3559;
struct t5;
struct t36;
#include "t845.h"

extern "C" void m21742_gshared (t3559 * __this, t36 * p0, MethodInfo* method);
#define m21742(__this, p0, method) (( void (*) (t3559 *, t36 *, MethodInfo*))m21742_gshared)(__this, p0, method)
extern "C" t5 * m21743_gshared (t3559 * __this, MethodInfo* method);
#define m21743(__this, method) (( t5 * (*) (t3559 *, MethodInfo*))m21743_gshared)(__this, method)
extern "C" void m21744_gshared (t3559 * __this, MethodInfo* method);
#define m21744(__this, method) (( void (*) (t3559 *, MethodInfo*))m21744_gshared)(__this, method)
extern "C" bool m21745_gshared (t3559 * __this, MethodInfo* method);
#define m21745(__this, method) (( bool (*) (t3559 *, MethodInfo*))m21745_gshared)(__this, method)
extern "C" t845  m21746_gshared (t3559 * __this, MethodInfo* method);
#define m21746(__this, method) (( t845  (*) (t3559 *, MethodInfo*))m21746_gshared)(__this, method)
