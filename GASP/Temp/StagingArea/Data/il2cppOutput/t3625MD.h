#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3625;
struct t125;
struct t2;
struct t5;
struct t868;

extern "C" void m22280_gshared (t3625 * __this, MethodInfo* method);
#define m22280(__this, method) (( void (*) (t3625 *, MethodInfo*))m22280_gshared)(__this, method)
extern "C" t125 * m22281_gshared (t3625 * __this, t2* p0, t5 * p1, MethodInfo* method);
#define m22281(__this, p0, p1, method) (( t125 * (*) (t3625 *, t2*, t5 *, MethodInfo*))m22281_gshared)(__this, p0, p1, method)
extern "C" t868 * m22282_gshared (t3625 * __this, t5 * p0, t125 * p1, MethodInfo* method);
#define m22282(__this, p0, p1, method) (( t868 * (*) (t3625 *, t5 *, t125 *, MethodInfo*))m22282_gshared)(__this, p0, p1, method)
