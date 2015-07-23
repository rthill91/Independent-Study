#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t530;
struct t530_marshaled;

void t530_marshal(const t530& unmarshaled, t530_marshaled& marshaled);
void t530_marshal_back(const t530_marshaled& marshaled, t530& unmarshaled);
void t530_marshal_cleanup(t530_marshaled& marshaled);
