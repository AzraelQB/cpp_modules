#pragma once

#include <stdint.h>

struct Data {
	int n;
};

uintptr_t serialize(Data *ptr);

Data* deserialize(uintptr_t raw);
