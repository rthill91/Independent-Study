#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t705;
struct t705_marshaled;

void t705_marshal(const t705& unmarshaled, t705_marshaled& marshaled);
void t705_marshal_back(const t705_marshaled& marshaled, t705& unmarshaled);
void t705_marshal_cleanup(t705_marshaled& marshaled);
