#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t286;
struct t286_marshaled;
struct t2;
struct t303;
struct t47;
struct t5;
#include "t315.h"
#include "t83.h"
#include "t85.h"
#include "t144.h"

extern "C" void m3650 (t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t286 * m3651 (t5 * __this , t286 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t286 * m3652 (t5 * __this , t286 * p0, t83  p1, t85  p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t286 * m3653 (t5 * __this , t286 * p0, t83 * p1, t85 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3654 (t5 * __this , t286 * p0, float p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1177 (t5 * __this , t286 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3655 (t5 * __this , t286 * p0, bool p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1245 (t5 * __this , t286 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t303* m1180 (t5 * __this , t47 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t2* m1176 (t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1282 (t286 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1246 (t5 * __this , t286 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1283 (t286 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3656 (t5 * __this , t286 * p0, float p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1503 (t5 * __this , t286 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t2* m1613 (t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m1611 (t286 * __this, t5 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m1612 (t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3657 (t5 * __this , t286 * p0, t286 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3658 (t5 * __this , t286 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3659 (t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t144 m3660 (t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t286 * m1172 (t5 * __this , t286 * p0, t83  p1, t85  p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3661 (t5 * __this , t5 * p0, t2* p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3662 (t5 * __this , t286 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m1132 (t5 * __this , t286 * p0, t286 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m1178 (t5 * __this , t286 * p0, t286 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t286_marshal(const t286& unmarshaled, t286_marshaled& marshaled);
void t286_marshal_back(const t286_marshaled& marshaled, t286& unmarshaled);
void t286_marshal_cleanup(t286_marshaled& marshaled);
