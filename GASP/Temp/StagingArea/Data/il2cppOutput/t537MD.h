#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t537;
struct t537_marshaled;

void t537_marshal(const t537& unmarshaled, t537_marshaled& marshaled);
void t537_marshal_back(const t537_marshaled& marshaled, t537& unmarshaled);
void t537_marshal_cleanup(t537_marshaled& marshaled);
