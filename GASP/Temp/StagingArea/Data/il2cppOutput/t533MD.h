#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t533;
struct t533_marshaled;

void t533_marshal(const t533& unmarshaled, t533_marshaled& marshaled);
void t533_marshal_back(const t533_marshaled& marshaled, t533& unmarshaled);
void t533_marshal_cleanup(t533_marshaled& marshaled);
