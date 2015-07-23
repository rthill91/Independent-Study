#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3565;
struct t5;
struct t36;
#include "t3564.h"

extern "C" void m21800_gshared (t3565 * __this, t36 * p0, MethodInfo* method);
#define m21800(__this, p0, method) (( void (*) (t3565 *, t36 *, MethodInfo*))m21800_gshared)(__this, p0, method)
extern "C" t5 * m21801_gshared (t3565 * __this, MethodInfo* method);
#define m21801(__this, method) (( t5 * (*) (t3565 *, MethodInfo*))m21801_gshared)(__this, method)
extern "C" void m21802_gshared (t3565 * __this, MethodInfo* method);
#define m21802(__this, method) (( void (*) (t3565 *, MethodInfo*))m21802_gshared)(__this, method)
extern "C" bool m21803_gshared (t3565 * __this, MethodInfo* method);
#define m21803(__this, method) (( bool (*) (t3565 *, MethodInfo*))m21803_gshared)(__this, method)
extern "C" t3564  m21804_gshared (t3565 * __this, MethodInfo* method);
#define m21804(__this, method) (( t3564  (*) (t3565 *, MethodInfo*))m21804_gshared)(__this, method)
