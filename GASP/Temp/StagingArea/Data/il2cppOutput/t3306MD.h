#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3306;
struct t5;
#include "t760.h"

extern "C" void m19252_gshared (t3306 * __this, MethodInfo* method);
#define m19252(__this, method) (( void (*) (t3306 *, MethodInfo*))m19252_gshared)(__this, method)
extern "C" void m19253_gshared (t5 * __this , MethodInfo* method);
#define m19253(__this , method) (( void (*) (t5 * , MethodInfo*))m19253_gshared)(__this , method)
extern "C" int32_t m19254_gshared (t3306 * __this, t5 * p0, MethodInfo* method);
#define m19254(__this, p0, method) (( int32_t (*) (t3306 *, t5 *, MethodInfo*))m19254_gshared)(__this, p0, method)
extern "C" bool m19255_gshared (t3306 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m19255(__this, p0, p1, method) (( bool (*) (t3306 *, t5 *, t5 *, MethodInfo*))m19255_gshared)(__this, p0, p1, method)
extern "C" t3306 * m19256_gshared (t5 * __this , MethodInfo* method);
#define m19256(__this , method) (( t3306 * (*) (t5 * , MethodInfo*))m19256_gshared)(__this , method)
