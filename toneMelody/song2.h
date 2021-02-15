//C2 D2 E2 F2 G2 A2 B2 C3 D3 E3 F3 G3 A3 B3 C4 D4 E4 F4 G4 A4 B4
//.1 .2 .3 .4 .5 .6 .7 1  2  3  4  5  6  7  1. 2. 3. 4. 5. 6. 7.

//春天在哪里

// notes in the melody:
int melody[] = {
  NOTE_E3, NOTE_E3, NOTE_E3, NOTE_C3, NOTE_G2, NOTE_G2, 0,  // 3 3 3 1 5  5 0
  NOTE_E3, NOTE_E3, NOTE_E3, NOTE_C3, NOTE_E3, 0,           // 3 3 3 1 3  0
  NOTE_G3, NOTE_G3, NOTE_E3, NOTE_C3, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_A2, NOTE_B2, NOTE_C3, NOTE_E3, NOTE_D3, 0, // 55 31 55 5 67 13 2 0
  NOTE_E3, NOTE_E3, NOTE_E3, NOTE_C3, NOTE_G2, NOTE_G2, 0,  // 33 31 5 50
  NOTE_E3, NOTE_E3, NOTE_E3, NOTE_C3, NOTE_E3, 0,           // 33 31 3 0
  NOTE_G3, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_G3, NOTE_F3, NOTE_E3, NOTE_C3, NOTE_G2, 0, NOTE_C3, 0, NOTE_D3, NOTE_C3, 0 //56 56 54 31 50 30 21 0
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 4, 4, 2, 4, 4,
  4, 4, 4, 4, 2, 2,
  4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 2, 2,
  4, 4, 4, 4, 2, 4, 4,
  4, 4, 4, 4, 2, 2,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2
};
