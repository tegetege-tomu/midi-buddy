#include <stdint.h> 

#pragma once

struct Settings {
	uint8_t note;
	uint8_t velocity;
	uint16_t durationMs;
};

extern Settings settings;