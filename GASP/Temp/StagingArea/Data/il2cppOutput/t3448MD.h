#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3448;
struct t5;
struct t36;
#include "t3442.h"

extern "C" void m20628_gshared (t3448 * __this, t36 * p0, MethodInfo* method);
#define m20628(__this, p0, method) (( void (*) (t3448 *, t36 *, MethodInfo*))m20628_gshared)(__this, p0, method)
extern "C" t5 * m20629_gshared (t3448 * __this, MethodInfo* method);
#define m20629(__this, method) (( t5 * (*) (t3448 *, MethodInfo*))m20629_gshared)(__this, method)
extern "C" void m20630_gshared (t3448 * __this, MethodInfo* method);
#define m20630(__this, method) (( void (*) (t3448 *, MethodInfo*))m20630_gshared)(__this, method)
extern "C" bool m20631_gshared (t3448 * __this, MethodInfo* method);
#define m20631(__this, method) (( bool (*) (t3448 *, MethodInfo*))m20631_gshared)(__this, method)
extern "C" t3442  m20632_gshared (t3448 * __this, MethodInfo* method);
#define m20632(__this, method) (( t3442  (*) (t3448 *, MethodInfo*))m20632_gshared)(__this, method)
