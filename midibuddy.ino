//based on Based on Sketch built by Gustavo Silveira (aka Music Nerd) and Dolce Wang

/*
setup: uno with midi shield (sparkfun)
*/

//LIBRARY
#include <EPROM.h>
#include <Bounce2.h>
#include <MIDI.h>

//BUTTONS


//DEBOUNCE


//POTS


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
}

//LOOP



//MORE BUTTONS


//MORE POTS
