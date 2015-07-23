#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2839;
struct t2;

extern "C" void m14476_gshared (t2839 * __this, uint8_t p0, int32_t p1, MethodInfo* method);
#define m14476(__this, p0, p1, method) (( void (*) (t2839 *, uint8_t, int32_t, MethodInfo*))m14476_gshared)(__this, p0, p1, method)
extern "C" uint8_t m14477_gshared (t2839 * __this, MethodInfo* method);
#define m14477(__this, method) (( uint8_t (*) (t2839 *, MethodInfo*))m14477_gshared)(__this, method)
extern "C" void m14478_gshared (t2839 * __this, uint8_t p0, MethodInfo* method);
#define m14478(__this, p0, method) (( void (*) (t2839 *, uint8_t, MethodInfo*))m14478_gshared)(__this, p0, method)
extern "C" int32_t m14479_gshared (t2839 * __this, MethodInfo* method);
#define m14479(__this, method) (( int32_t (*) (t2839 *, MethodInfo*))m14479_gshared)(__this, method)
extern "C" void m14480_gshared (t2839 * __this, int32_t p0, MethodInfo* method);
#define m14480(__this, p0, method) (( void (*) (t2839 *, int32_t, MethodInfo*))m14480_gshared)(__this, p0, method)
extern "C" t2* m14481_gshared (t2839 * __this, MethodInfo* method);
#define m14481(__this, method) (( t2* (*) (t2839 *, MethodInfo*))m14481_gshared)(__this, method)
