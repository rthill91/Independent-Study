#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t636;
struct t636_marshaled;

extern "C" void m3710 (t636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t636_marshal(const t636& unmarshaled, t636_marshaled& marshaled);
void t636_marshal_back(const t636_marshaled& marshaled, t636& unmarshaled);
void t636_marshal_cleanup(t636_marshaled& marshaled);
