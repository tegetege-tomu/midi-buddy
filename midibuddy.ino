//based on Based on Sketch built by Gustavo Silveira (aka Music Nerd) and Dolce Wang

/*
setup: uno with midi shield (sparkfun)
*/

//LIBRARY
#include <EEPROM.h> //* need to include these in ino file too for linking
#include <Bounce2.h>
//#include <MIDI.h> no need since using serial directly



//DEBOUNCE?

//INIT BUTTON AND POTS


//MIDI assignments
const byte MIDI_CH = 0; //* which MIDI channel is used
const byte NOTE = 36; //* C2
const byte VELOCITY = 100;
const int DURATION_MS = 120;


//SETUP
void setup() {
  // Baud Rate
  // 31250 for MIDI class compliant
  Serial.begin(31250);
  initButtonsAndPots();
}

//LOOP
void loop() {
  handleInput();
  // other serial for debug?
}
