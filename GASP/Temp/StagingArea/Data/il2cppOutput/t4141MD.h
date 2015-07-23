#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4141;
struct t5;
#include "t405.h"

extern "C" void m27555_gshared (t4141 * __this, MethodInfo* method);
#define m27555(__this, method) (( void (*) (t4141 *, MethodInfo*))m27555_gshared)(__this, method)
extern "C" void m27556_gshared (t5 * __this , MethodInfo* method);
#define m27556(__this , method) (( void (*) (t5 * , MethodInfo*))m27556_gshared)(__this , method)
extern "C" int32_t m27557_gshared (t4141 * __this, t5 * p0, MethodInfo* method);
#define m27557(__this, p0, method) (( int32_t (*) (t4141 *, t5 *, MethodInfo*))m27557_gshared)(__this, p0, method)
extern "C" bool m27558_gshared (t4141 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m27558(__this, p0, p1, method) (( bool (*) (t4141 *, t5 *, t5 *, MethodInfo*))m27558_gshared)(__this, p0, p1, method)
extern "C" t4141 * m27559_gshared (t5 * __this , MethodInfo* method);
#define m27559(__this , method) (( t4141 * (*) (t5 * , MethodInfo*))m27559_gshared)(__this , method)
