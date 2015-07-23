#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t345;
struct t345_marshaled;
#include "t84.h"
#include "t346.h"

extern "C" int32_t m3636 (t345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t84  m1479 (t345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m1480 (t345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t345_marshal(const t345& unmarshaled, t345_marshaled& marshaled);
void t345_marshal_back(const t345_marshaled& marshaled, t345& unmarshaled);
void t345_marshal_cleanup(t345_marshaled& marshaled);
