#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t536;
struct t536_marshaled;

void t536_marshal(const t536& unmarshaled, t536_marshaled& marshaled);
void t536_marshal_back(const t536_marshaled& marshaled, t536& unmarshaled);
void t536_marshal_cleanup(t536_marshaled& marshaled);
