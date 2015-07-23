#pragma once
#include <stdint.h>
struct t95;
struct t82;
#include "t5.h"
#include "t104.h"
#include "t103.h"
struct  t95  : public t5
{
	uint8_t f1;
	uint8_t f2;
	t82* f3;
	uint8_t f4;
	uint8_t f5;
	bool f6;
	int32_t f7;
	bool f8;
};
struct t95_SFs{
	t95 * f0;
};
