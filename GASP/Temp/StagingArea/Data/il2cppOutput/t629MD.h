#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t629;
struct t629_marshaled;

extern "C" void m3550 (t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3551 (t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3552 (t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t629_marshal(const t629& unmarshaled, t629_marshaled& marshaled);
void t629_marshal_back(const t629_marshaled& marshaled, t629& unmarshaled);
void t629_marshal_cleanup(t629_marshaled& marshaled);
