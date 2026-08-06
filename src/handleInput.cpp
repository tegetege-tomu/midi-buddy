#include "Arduino.h"
#include "handleInput.h"
#include "handleMidi.h"
#include "settings.h"
#include <Bounce2.h>

void handleInput() {
  void handleNotetrigger();
  void handleBothcrementPress();
  if (settings.mode) {
    void handleIncrementPress();
    void handleDecrementPress();
    int handleVelocityPot();
    int handleDurationPot();
  }
}

void handleNotetrigger() {
  if ((digitalRead(3) == LOW) && !settings.mode) {
    triggerNote(settings.note, settings.mode, settings.durationMs);
    Serial.println("note triggered");
  }
  if ((digitalRead(3) == LOW) && settings.mode) {
    settings.mode = false;
    Serial.println("returned to play mode");
  }
}

void handleBothcrementPress() {
  if (digitalRead(2 == LOW) && digitalRead(4 == LOW) && !settings.mode) {
    settings.mode = true;
    Serial.println("entered settings mode");
  }
}

void handleIncrementPress() {
  if (digitalRead(2 == LOW) && settings.mode) {
    settings.note = settings.note + 1;
  }
}

void handleDecrementPress() {
  if (digitalRead(4 == LOW) && settings.mode) {
    settings.note = settings.note - 1;
  }
}

int handleVelocityPot();
int handleDurationPot();

bool didPotMove(uint8_t pin, int &lastValue, int threshold);
