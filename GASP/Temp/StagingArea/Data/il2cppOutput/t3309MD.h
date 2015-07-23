#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3309;
struct t5;
#include "t760.h"

extern "C" void m19264_gshared (t3309 * __this, MethodInfo* method);
#define m19264(__this, method) (( void (*) (t3309 *, MethodInfo*))m19264_gshared)(__this, method)
extern "C" void m19265_gshared (t5 * __this , MethodInfo* method);
#define m19265(__this , method) (( void (*) (t5 * , MethodInfo*))m19265_gshared)(__this , method)
extern "C" int32_t m19266_gshared (t3309 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m19266(__this, p0, p1, method) (( int32_t (*) (t3309 *, t5 *, t5 *, MethodInfo*))m19266_gshared)(__this, p0, p1, method)
extern "C" t3309 * m19267_gshared (t5 * __this , MethodInfo* method);
#define m19267(__this , method) (( t3309 * (*) (t5 * , MethodInfo*))m19267_gshared)(__this , method)
