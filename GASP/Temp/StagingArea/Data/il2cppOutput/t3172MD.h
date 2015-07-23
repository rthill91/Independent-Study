#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3172;
struct t5;
struct t36;
#include "t3168.h"

extern "C" void m17862_gshared (t3172 * __this, t36 * p0, MethodInfo* method);
#define m17862(__this, p0, method) (( void (*) (t3172 *, t36 *, MethodInfo*))m17862_gshared)(__this, p0, method)
extern "C" t5 * m17863_gshared (t3172 * __this, MethodInfo* method);
#define m17863(__this, method) (( t5 * (*) (t3172 *, MethodInfo*))m17863_gshared)(__this, method)
extern "C" void m17864_gshared (t3172 * __this, MethodInfo* method);
#define m17864(__this, method) (( void (*) (t3172 *, MethodInfo*))m17864_gshared)(__this, method)
extern "C" bool m17865_gshared (t3172 * __this, MethodInfo* method);
#define m17865(__this, method) (( bool (*) (t3172 *, MethodInfo*))m17865_gshared)(__this, method)
extern "C" t3168  m17866_gshared (t3172 * __this, MethodInfo* method);
#define m17866(__this, method) (( t3168  (*) (t3172 *, MethodInfo*))m17866_gshared)(__this, method)
