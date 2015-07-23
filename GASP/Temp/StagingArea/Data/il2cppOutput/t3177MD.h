#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3177;
struct t5;
struct t36;

extern "C" void m17932_gshared (t3177 * __this, t36 * p0, MethodInfo* method);
#define m17932(__this, p0, method) (( void (*) (t3177 *, t36 *, MethodInfo*))m17932_gshared)(__this, p0, method)
extern "C" t5 * m17933_gshared (t3177 * __this, MethodInfo* method);
#define m17933(__this, method) (( t5 * (*) (t3177 *, MethodInfo*))m17933_gshared)(__this, method)
extern "C" void m17934_gshared (t3177 * __this, MethodInfo* method);
#define m17934(__this, method) (( void (*) (t3177 *, MethodInfo*))m17934_gshared)(__this, method)
extern "C" bool m17935_gshared (t3177 * __this, MethodInfo* method);
#define m17935(__this, method) (( bool (*) (t3177 *, MethodInfo*))m17935_gshared)(__this, method)
extern "C" float m17936_gshared (t3177 * __this, MethodInfo* method);
#define m17936(__this, method) (( float (*) (t3177 *, MethodInfo*))m17936_gshared)(__this, method)
