#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t930;
struct t930_marshaled;

void t930_marshal(const t930& unmarshaled, t930_marshaled& marshaled);
void t930_marshal_back(const t930_marshaled& marshaled, t930& unmarshaled);
void t930_marshal_cleanup(t930_marshaled& marshaled);
