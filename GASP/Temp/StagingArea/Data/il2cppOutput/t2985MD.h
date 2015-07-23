#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2985;
struct t5;
struct t36;
#include "t294.h"

extern "C" void m15818_gshared (t2985 * __this, t36 * p0, MethodInfo* method);
#define m15818(__this, p0, method) (( void (*) (t2985 *, t36 *, MethodInfo*))m15818_gshared)(__this, p0, method)
extern "C" t5 * m15819_gshared (t2985 * __this, MethodInfo* method);
#define m15819(__this, method) (( t5 * (*) (t2985 *, MethodInfo*))m15819_gshared)(__this, method)
extern "C" void m15820_gshared (t2985 * __this, MethodInfo* method);
#define m15820(__this, method) (( void (*) (t2985 *, MethodInfo*))m15820_gshared)(__this, method)
extern "C" bool m15821_gshared (t2985 * __this, MethodInfo* method);
#define m15821(__this, method) (( bool (*) (t2985 *, MethodInfo*))m15821_gshared)(__this, method)
extern "C" t294  m15822_gshared (t2985 * __this, MethodInfo* method);
#define m15822(__this, method) (( t294  (*) (t2985 *, MethodInfo*))m15822_gshared)(__this, method)
