#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3188;
struct t5;

extern "C" void m18034_gshared (t3188 * __this, MethodInfo* method);
#define m18034(__this, method) (( void (*) (t3188 *, MethodInfo*))m18034_gshared)(__this, method)
extern "C" void m18035_gshared (t5 * __this , MethodInfo* method);
#define m18035(__this , method) (( void (*) (t5 * , MethodInfo*))m18035_gshared)(__this , method)
extern "C" int32_t m18036_gshared (t3188 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m18036(__this, p0, p1, method) (( int32_t (*) (t3188 *, t5 *, t5 *, MethodInfo*))m18036_gshared)(__this, p0, p1, method)
extern "C" t3188 * m18037_gshared (t5 * __this , MethodInfo* method);
#define m18037(__this , method) (( t3188 * (*) (t5 * , MethodInfo*))m18037_gshared)(__this , method)
