#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t739;
struct t739_marshaled;
struct t2;

extern "C" bool m3815 (t739 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3816 (t739 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3817 (t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3818 (t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3819 (t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float m3820 (t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3821 (t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3822 (t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3823 (t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t739_marshal(const t739& unmarshaled, t739_marshaled& marshaled);
void t739_marshal_back(const t739_marshaled& marshaled, t739& unmarshaled);
void t739_marshal_cleanup(t739_marshaled& marshaled);
