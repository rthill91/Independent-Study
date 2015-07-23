#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4150;
#include "t916.h"

extern "C" void m27598_gshared (t4150 * __this, MethodInfo* method);
#define m27598(__this, method) (( void (*) (t4150 *, MethodInfo*))m27598_gshared)(__this, method)
extern "C" int32_t m27599_gshared (t4150 * __this, t916  p0, MethodInfo* method);
#define m27599(__this, p0, method) (( int32_t (*) (t4150 *, t916 , MethodInfo*))m27599_gshared)(__this, p0, method)
extern "C" bool m27600_gshared (t4150 * __this, t916  p0, t916  p1, MethodInfo* method);
#define m27600(__this, p0, p1, method) (( bool (*) (t4150 *, t916 , t916 , MethodInfo*))m27600_gshared)(__this, p0, p1, method)
