#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t648;
struct t648_marshaled;

extern "C" void m2883 (t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2884 (t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2885 (t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2886 (t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t648_marshal(const t648& unmarshaled, t648_marshaled& marshaled);
void t648_marshal_back(const t648_marshaled& marshaled, t648& unmarshaled);
void t648_marshal_cleanup(t648_marshaled& marshaled);
