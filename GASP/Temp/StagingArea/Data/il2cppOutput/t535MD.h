#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t535;
struct t535_marshaled;

void t535_marshal(const t535& unmarshaled, t535_marshaled& marshaled);
void t535_marshal_back(const t535_marshaled& marshaled, t535& unmarshaled);
void t535_marshal_cleanup(t535_marshaled& marshaled);
