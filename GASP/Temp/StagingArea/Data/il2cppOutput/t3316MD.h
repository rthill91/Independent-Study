#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3316;
struct t5;
#include "t749.h"

extern "C" void m19401_gshared (t3316 * __this, MethodInfo* method);
#define m19401(__this, method) (( void (*) (t3316 *, MethodInfo*))m19401_gshared)(__this, method)
extern "C" void m19402_gshared (t5 * __this , MethodInfo* method);
#define m19402(__this , method) (( void (*) (t5 * , MethodInfo*))m19402_gshared)(__this , method)
extern "C" int32_t m19403_gshared (t3316 * __this, t5 * p0, MethodInfo* method);
#define m19403(__this, p0, method) (( int32_t (*) (t3316 *, t5 *, MethodInfo*))m19403_gshared)(__this, p0, method)
extern "C" bool m19404_gshared (t3316 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m19404(__this, p0, p1, method) (( bool (*) (t3316 *, t5 *, t5 *, MethodInfo*))m19404_gshared)(__this, p0, p1, method)
extern "C" t3316 * m19405_gshared (t5 * __this , MethodInfo* method);
#define m19405(__this , method) (( t3316 * (*) (t5 * , MethodInfo*))m19405_gshared)(__this , method)
