#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3597;
struct t286;
struct t286_marshaled;
struct t125;
struct t7;

extern "C" void m21964_gshared (t3597 * __this, t286 * p0, t125 * p1, uint8_t p2, MethodInfo* method);
#define m21964(__this, p0, p1, p2, method) (( void (*) (t3597 *, t286 *, t125 *, uint8_t, MethodInfo*))m21964_gshared)(__this, p0, p1, p2, method)
extern "C" void m21966_gshared (t3597 * __this, t7* p0, MethodInfo* method);
#define m21966(__this, p0, method) (( void (*) (t3597 *, t7*, MethodInfo*))m21966_gshared)(__this, p0, method)
