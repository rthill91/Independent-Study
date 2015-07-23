#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3329;
struct t5;
#include "t750.h"

extern "C" void m19562_gshared (t3329 * __this, MethodInfo* method);
#define m19562(__this, method) (( void (*) (t3329 *, MethodInfo*))m19562_gshared)(__this, method)
extern "C" void m19563_gshared (t5 * __this , MethodInfo* method);
#define m19563(__this , method) (( void (*) (t5 * , MethodInfo*))m19563_gshared)(__this , method)
extern "C" int32_t m19564_gshared (t3329 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m19564(__this, p0, p1, method) (( int32_t (*) (t3329 *, t5 *, t5 *, MethodInfo*))m19564_gshared)(__this, p0, p1, method)
extern "C" t3329 * m19565_gshared (t5 * __this , MethodInfo* method);
#define m19565(__this , method) (( t3329 * (*) (t5 * , MethodInfo*))m19565_gshared)(__this , method)
