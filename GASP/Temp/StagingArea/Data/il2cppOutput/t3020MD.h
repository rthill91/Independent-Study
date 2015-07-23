#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3020;
struct t5;
struct t3015;

extern "C" void m16186_gshared (t3020 * __this, t3015 * p0, MethodInfo* method);
#define m16186(__this, p0, method) (( void (*) (t3020 *, t3015 *, MethodInfo*))m16186_gshared)(__this, p0, method)
extern "C" t5 * m16187_gshared (t3020 * __this, MethodInfo* method);
#define m16187(__this, method) (( t5 * (*) (t3020 *, MethodInfo*))m16187_gshared)(__this, method)
extern "C" void m16188_gshared (t3020 * __this, MethodInfo* method);
#define m16188(__this, method) (( void (*) (t3020 *, MethodInfo*))m16188_gshared)(__this, method)
extern "C" bool m16189_gshared (t3020 * __this, MethodInfo* method);
#define m16189(__this, method) (( bool (*) (t3020 *, MethodInfo*))m16189_gshared)(__this, method)
extern "C" t5 * m16190_gshared (t3020 * __this, MethodInfo* method);
#define m16190(__this, method) (( t5 * (*) (t3020 *, MethodInfo*))m16190_gshared)(__this, method)
