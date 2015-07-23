#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4143;
struct t5;
#include "t915.h"

extern "C" void m27564_gshared (t4143 * __this, MethodInfo* method);
#define m27564(__this, method) (( void (*) (t4143 *, MethodInfo*))m27564_gshared)(__this, method)
extern "C" void m27565_gshared (t5 * __this , MethodInfo* method);
#define m27565(__this , method) (( void (*) (t5 * , MethodInfo*))m27565_gshared)(__this , method)
extern "C" int32_t m27566_gshared (t4143 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m27566(__this, p0, p1, method) (( int32_t (*) (t4143 *, t5 *, t5 *, MethodInfo*))m27566_gshared)(__this, p0, p1, method)
extern "C" t4143 * m27567_gshared (t5 * __this , MethodInfo* method);
#define m27567(__this , method) (( t4143 * (*) (t5 * , MethodInfo*))m27567_gshared)(__this , method)
