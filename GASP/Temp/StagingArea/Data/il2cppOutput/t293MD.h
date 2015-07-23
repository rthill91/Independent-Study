#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t293;
struct t293_marshaled;

extern "C" void m2839 (t293 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2840 (t293 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2841 (t293 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t293_marshal(const t293& unmarshaled, t293_marshaled& marshaled);
void t293_marshal_back(const t293_marshaled& marshaled, t293& unmarshaled);
void t293_marshal_cleanup(t293_marshaled& marshaled);
