#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3071;
struct t5;
struct t36;
#include "t3070.h"

extern "C" void m16651_gshared (t3071 * __this, t36 * p0, MethodInfo* method);
#define m16651(__this, p0, method) (( void (*) (t3071 *, t36 *, MethodInfo*))m16651_gshared)(__this, p0, method)
extern "C" t5 * m16652_gshared (t3071 * __this, MethodInfo* method);
#define m16652(__this, method) (( t5 * (*) (t3071 *, MethodInfo*))m16652_gshared)(__this, method)
extern "C" void m16653_gshared (t3071 * __this, MethodInfo* method);
#define m16653(__this, method) (( void (*) (t3071 *, MethodInfo*))m16653_gshared)(__this, method)
extern "C" bool m16654_gshared (t3071 * __this, MethodInfo* method);
#define m16654(__this, method) (( bool (*) (t3071 *, MethodInfo*))m16654_gshared)(__this, method)
extern "C" t3070  m16655_gshared (t3071 * __this, MethodInfo* method);
#define m16655(__this, method) (( t3070  (*) (t3071 *, MethodInfo*))m16655_gshared)(__this, method)
