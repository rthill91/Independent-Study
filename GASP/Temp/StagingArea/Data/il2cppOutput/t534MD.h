#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t534;
struct t534_marshaled;

void t534_marshal(const t534& unmarshaled, t534_marshaled& marshaled);
void t534_marshal_back(const t534_marshaled& marshaled, t534& unmarshaled);
void t534_marshal_cleanup(t534_marshaled& marshaled);
