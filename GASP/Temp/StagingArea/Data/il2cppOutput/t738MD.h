#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t738;
struct t738_marshaled;
struct t5;

extern "C" bool m4344 (t738 * __this, t5 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m4345 (t738 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m4346 (t5 * __this , t738 * p0, t738 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t738_marshal(const t738& unmarshaled, t738_marshaled& marshaled);
void t738_marshal_back(const t738_marshaled& marshaled, t738& unmarshaled);
void t738_marshal_cleanup(t738_marshaled& marshaled);
