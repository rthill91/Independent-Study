#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t422;
struct t422_marshaled;

void t422_marshal(const t422& unmarshaled, t422_marshaled& marshaled);
void t422_marshal_back(const t422_marshaled& marshaled, t422& unmarshaled);
void t422_marshal_cleanup(t422_marshaled& marshaled);
