//JAI SHREE RAM

#define NOTE_C4 256
#define NOTE_G3 196 
#define NOTE_A3 220
#define NOTE_B3 247
#define NOTE_C4 262

// notes in the melody: 
int melody[] = { NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4 };

// notedurations: 4 = quarter note,8 = eighth note, etc.
int noteDurations[] = { 4, 8, 8, 4, 4, 4, 4, 4 };

void setup()
{
	// iterate overthe notes of the melody:
	for (int thisNote = 0; thisNote < 8; thisNote++)
    {
		// to calculate the note duration, take one second 
		//e.g. quarternote = 1000 / 4, eighth note= 1000/8, etc.
		int noteDuration = 1000 / noteDurations[thisNote];
		tone(8, melody[thisNote], noteDuration);
		int pauseBetweenNotes = noteDuration * 1.30;
		delay(pauseBetweenNotes);
		// stop the tone playing: noTone(8);
	}
}

void loop() { 
  // no needto repeat the melody.
}