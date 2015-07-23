#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t532;
struct t532_marshaled;

void t532_marshal(const t532& unmarshaled, t532_marshaled& marshaled);
void t532_marshal_back(const t532_marshaled& marshaled, t532& unmarshaled);
void t532_marshal_cleanup(t532_marshaled& marshaled);
