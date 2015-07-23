#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4139;
struct t5;
#include "t405.h"

extern "C" void m27547_gshared (t4139 * __this, MethodInfo* method);
#define m27547(__this, method) (( void (*) (t4139 *, MethodInfo*))m27547_gshared)(__this, method)
extern "C" void m27548_gshared (t5 * __this , MethodInfo* method);
#define m27548(__this , method) (( void (*) (t5 * , MethodInfo*))m27548_gshared)(__this , method)
extern "C" int32_t m27549_gshared (t4139 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m27549(__this, p0, p1, method) (( int32_t (*) (t4139 *, t5 *, t5 *, MethodInfo*))m27549_gshared)(__this, p0, p1, method)
extern "C" t4139 * m27550_gshared (t5 * __this , MethodInfo* method);
#define m27550(__this , method) (( t4139 * (*) (t5 * , MethodInfo*))m27550_gshared)(__this , method)
