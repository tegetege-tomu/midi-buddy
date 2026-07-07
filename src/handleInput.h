#include <stdint.h> 
#include <Bounce2.h>
#pragma once

void handleInput();

void triggerNote(uint8_t n, uint8_t v, uint16_t d);
void noteOn(uint8_t n, uint8_t v);
void noteOff(uint8_t n);