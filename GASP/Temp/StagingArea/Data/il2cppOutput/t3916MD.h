#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3916;
struct t5;
struct t36;
#include "t3915.h"

extern "C" void m25623_gshared (t3916 * __this, t36 * p0, MethodInfo* method);
#define m25623(__this, p0, method) (( void (*) (t3916 *, t36 *, MethodInfo*))m25623_gshared)(__this, p0, method)
extern "C" t5 * m25624_gshared (t3916 * __this, MethodInfo* method);
#define m25624(__this, method) (( t5 * (*) (t3916 *, MethodInfo*))m25624_gshared)(__this, method)
extern "C" void m25625_gshared (t3916 * __this, MethodInfo* method);
#define m25625(__this, method) (( void (*) (t3916 *, MethodInfo*))m25625_gshared)(__this, method)
extern "C" bool m25626_gshared (t3916 * __this, MethodInfo* method);
#define m25626(__this, method) (( bool (*) (t3916 *, MethodInfo*))m25626_gshared)(__this, method)
extern "C" t3915  m25627_gshared (t3916 * __this, MethodInfo* method);
#define m25627(__this, method) (( t3915  (*) (t3916 *, MethodInfo*))m25627_gshared)(__this, method)
