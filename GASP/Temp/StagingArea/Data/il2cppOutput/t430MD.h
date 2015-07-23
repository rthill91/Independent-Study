#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t430;
struct t430_marshaled;

void t430_marshal(const t430& unmarshaled, t430_marshaled& marshaled);
void t430_marshal_back(const t430_marshaled& marshaled, t430& unmarshaled);
void t430_marshal_cleanup(t430_marshaled& marshaled);
