#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3941;
struct t5;
struct t36;
#include "t84.h"

extern "C" void m25798_gshared (t3941 * __this, t36 * p0, MethodInfo* method);
#define m25798(__this, p0, method) (( void (*) (t3941 *, t36 *, MethodInfo*))m25798_gshared)(__this, p0, method)
extern "C" t5 * m25799_gshared (t3941 * __this, MethodInfo* method);
#define m25799(__this, method) (( t5 * (*) (t3941 *, MethodInfo*))m25799_gshared)(__this, method)
extern "C" void m25800_gshared (t3941 * __this, MethodInfo* method);
#define m25800(__this, method) (( void (*) (t3941 *, MethodInfo*))m25800_gshared)(__this, method)
extern "C" bool m25801_gshared (t3941 * __this, MethodInfo* method);
#define m25801(__this, method) (( bool (*) (t3941 *, MethodInfo*))m25801_gshared)(__this, method)
extern "C" t84  m25802_gshared (t3941 * __this, MethodInfo* method);
#define m25802(__this, method) (( t84  (*) (t3941 *, MethodInfo*))m25802_gshared)(__this, method)
