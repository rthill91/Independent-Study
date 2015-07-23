#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3107;
struct t5;
struct t36;
#include "t805.h"

extern "C" void m17145_gshared (t3107 * __this, t36 * p0, MethodInfo* method);
#define m17145(__this, p0, method) (( void (*) (t3107 *, t36 *, MethodInfo*))m17145_gshared)(__this, p0, method)
extern "C" t5 * m17146_gshared (t3107 * __this, MethodInfo* method);
#define m17146(__this, method) (( t5 * (*) (t3107 *, MethodInfo*))m17146_gshared)(__this, method)
extern "C" void m17147_gshared (t3107 * __this, MethodInfo* method);
#define m17147(__this, method) (( void (*) (t3107 *, MethodInfo*))m17147_gshared)(__this, method)
extern "C" bool m17148_gshared (t3107 * __this, MethodInfo* method);
#define m17148(__this, method) (( bool (*) (t3107 *, MethodInfo*))m17148_gshared)(__this, method)
extern "C" t805  m17149_gshared (t3107 * __this, MethodInfo* method);
#define m17149(__this, method) (( t805  (*) (t3107 *, MethodInfo*))m17149_gshared)(__this, method)
