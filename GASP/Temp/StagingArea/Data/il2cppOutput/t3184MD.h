#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3184;
struct t5;

extern "C" void m18019_gshared (t3184 * __this, MethodInfo* method);
#define m18019(__this, method) (( void (*) (t3184 *, MethodInfo*))m18019_gshared)(__this, method)
extern "C" void m18020_gshared (t5 * __this , MethodInfo* method);
#define m18020(__this , method) (( void (*) (t5 * , MethodInfo*))m18020_gshared)(__this , method)
extern "C" int32_t m18021_gshared (t3184 * __this, t5 * p0, MethodInfo* method);
#define m18021(__this, p0, method) (( int32_t (*) (t3184 *, t5 *, MethodInfo*))m18021_gshared)(__this, p0, method)
extern "C" bool m18022_gshared (t3184 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m18022(__this, p0, p1, method) (( bool (*) (t3184 *, t5 *, t5 *, MethodInfo*))m18022_gshared)(__this, p0, p1, method)
extern "C" t3184 * m18023_gshared (t5 * __this , MethodInfo* method);
#define m18023(__this , method) (( t3184 * (*) (t5 * , MethodInfo*))m18023_gshared)(__this , method)
