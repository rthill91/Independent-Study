#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3326;
struct t5;
#include "t750.h"

extern "C" void m19550_gshared (t3326 * __this, MethodInfo* method);
#define m19550(__this, method) (( void (*) (t3326 *, MethodInfo*))m19550_gshared)(__this, method)
extern "C" void m19551_gshared (t5 * __this , MethodInfo* method);
#define m19551(__this , method) (( void (*) (t5 * , MethodInfo*))m19551_gshared)(__this , method)
extern "C" int32_t m19552_gshared (t3326 * __this, t5 * p0, MethodInfo* method);
#define m19552(__this, p0, method) (( int32_t (*) (t3326 *, t5 *, MethodInfo*))m19552_gshared)(__this, p0, method)
extern "C" bool m19553_gshared (t3326 * __this, t5 * p0, t5 * p1, MethodInfo* method);
#define m19553(__this, p0, p1, method) (( bool (*) (t3326 *, t5 *, t5 *, MethodInfo*))m19553_gshared)(__this, p0, p1, method)
extern "C" t3326 * m19554_gshared (t5 * __this , MethodInfo* method);
#define m19554(__this , method) (( t3326 * (*) (t5 * , MethodInfo*))m19554_gshared)(__this , method)
