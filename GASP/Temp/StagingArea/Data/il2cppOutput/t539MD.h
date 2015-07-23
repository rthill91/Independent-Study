#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t539;
struct t539_marshaled;

void t539_marshal(const t539& unmarshaled, t539_marshaled& marshaled);
void t539_marshal_back(const t539_marshaled& marshaled, t539& unmarshaled);
void t539_marshal_cleanup(t539_marshaled& marshaled);
