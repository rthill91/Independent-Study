#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2842;
struct t5;
struct t2837;

extern "C" void m14501_gshared (t2842 * __this, t2837 * p0, MethodInfo* method);
#define m14501(__this, p0, method) (( void (*) (t2842 *, t2837 *, MethodInfo*))m14501_gshared)(__this, p0, method)
extern "C" t5 * m14502_gshared (t2842 * __this, MethodInfo* method);
#define m14502(__this, method) (( t5 * (*) (t2842 *, MethodInfo*))m14502_gshared)(__this, method)
extern "C" void m14503_gshared (t2842 * __this, MethodInfo* method);
#define m14503(__this, method) (( void (*) (t2842 *, MethodInfo*))m14503_gshared)(__this, method)
extern "C" bool m14504_gshared (t2842 * __this, MethodInfo* method);
#define m14504(__this, method) (( bool (*) (t2842 *, MethodInfo*))m14504_gshared)(__this, method)
extern "C" uint8_t m14505_gshared (t2842 * __this, MethodInfo* method);
#define m14505(__this, method) (( uint8_t (*) (t2842 *, MethodInfo*))m14505_gshared)(__this, method)
