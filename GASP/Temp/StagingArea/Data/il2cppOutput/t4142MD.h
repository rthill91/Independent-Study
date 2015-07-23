#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4142;
#include "t405.h"

extern "C" void m27560_gshared (t4142 * __this, MethodInfo* method);
#define m27560(__this, method) (( void (*) (t4142 *, MethodInfo*))m27560_gshared)(__this, method)
extern "C" int32_t m27561_gshared (t4142 * __this, t405  p0, MethodInfo* method);
#define m27561(__this, p0, method) (( int32_t (*) (t4142 *, t405 , MethodInfo*))m27561_gshared)(__this, p0, method)
extern "C" bool m27562_gshared (t4142 * __this, t405  p0, t405  p1, MethodInfo* method);
#define m27562(__this, p0, p1, method) (( bool (*) (t4142 *, t405 , t405 , MethodInfo*))m27562_gshared)(__this, p0, p1, method)
