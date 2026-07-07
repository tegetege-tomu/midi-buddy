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
	initAll();
}

//LOOP
void loop() {
	handleInput();
	// other serial output here for debug only?
}

//INIT
void initAll(){
		Settings settings(
			36, //*note
			100, //*velocity
			120) //duration(ms)
			;
		//if statement for loading from persistence
		//anything else needs to be done for midi? serial baud rate already set
		//whatever needs to be done for the resistance re buttons and pots??
}