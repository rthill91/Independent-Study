#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t743;
struct t743_marshaled;
struct t2;

extern "C" t2* m3836 (t743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3837 (t743 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t2* m3838 (t743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3839 (t743 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t743_marshal(const t743& unmarshaled, t743_marshaled& marshaled);
void t743_marshal_back(const t743_marshaled& marshaled, t743& unmarshaled);
void t743_marshal_cleanup(t743_marshaled& marshaled);
