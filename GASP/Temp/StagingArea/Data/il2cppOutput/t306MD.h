#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t306;
struct t306_marshaled;

extern "C" void m1237 (t306 * __this, float p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t306_marshal(const t306& unmarshaled, t306_marshaled& marshaled);
void t306_marshal_back(const t306_marshaled& marshaled, t306& unmarshaled);
void t306_marshal_cleanup(t306_marshaled& marshaled);
