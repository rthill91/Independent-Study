#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2829;

extern "C" void m14356_gshared (t2829 * __this, MethodInfo* method);
#define m14356(__this, method) (( void (*) (t2829 *, MethodInfo*))m14356_gshared)(__this, method)
extern "C" int32_t m14357_gshared (t2829 * __this, uint8_t p0, MethodInfo* method);
#define m14357(__this, p0, method) (( int32_t (*) (t2829 *, uint8_t, MethodInfo*))m14357_gshared)(__this, p0, method)
extern "C" bool m14358_gshared (t2829 * __this, uint8_t p0, uint8_t p1, MethodInfo* method);
#define m14358(__this, p0, p1, method) (( bool (*) (t2829 *, uint8_t, uint8_t, MethodInfo*))m14358_gshared)(__this, p0, p1, method)
