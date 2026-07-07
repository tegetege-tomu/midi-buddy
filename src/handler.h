#pragma once

struct Settings {
  uint8_t note;
  uint8_t velocity;
  uint16_t durationMs;
}

Settings settings(36, 100, 120);

void triggerNote(uint8_t n, uint8_t v, uint16_t d);
void noteOn(uint8_t n, uint8_t v);
void noteOff(uint8_t n);