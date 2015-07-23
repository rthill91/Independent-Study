#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2816;
struct t5;
struct t36;
#include "t1133.h"

extern "C" void m14261_gshared (t2816 * __this, t36 * p0, MethodInfo* method);
#define m14261(__this, p0, method) (( void (*) (t2816 *, t36 *, MethodInfo*))m14261_gshared)(__this, p0, method)
extern "C" t5 * m14262_gshared (t2816 * __this, MethodInfo* method);
#define m14262(__this, method) (( t5 * (*) (t2816 *, MethodInfo*))m14262_gshared)(__this, method)
extern "C" void m14263_gshared (t2816 * __this, MethodInfo* method);
#define m14263(__this, method) (( void (*) (t2816 *, MethodInfo*))m14263_gshared)(__this, method)
extern "C" bool m14264_gshared (t2816 * __this, MethodInfo* method);
#define m14264(__this, method) (( bool (*) (t2816 *, MethodInfo*))m14264_gshared)(__this, method)
extern "C" t1133  m14265_gshared (t2816 * __this, MethodInfo* method);
#define m14265(__this, method) (( t1133  (*) (t2816 *, MethodInfo*))m14265_gshared)(__this, method)
