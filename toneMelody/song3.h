//C2 D2 E2 F2 G2 A2 B2 C3 D3 E3 F3 G3 A3 B3 C4 D4 E4 F4 G4 A4 B4
//.1 .2 .3 .4 .5 .6 .7 1  2  3  4  5  6  7  1. 2. 3. 4. 5. 6. 7.

//春天在哪里

// notes in the song:
// melody, noteDuration
int song[][] = {
  {NOTE_E3,4}, {NOTE_E3,4}, {NOTE_E3,4}, {NOTE_C3,4}, {NOTE_G2,2}, {NOTE_G2,4}, {0,4},       // 33 31 5 50
  {NOTE_E3,4}, {NOTE_E3,4}, {NOTE_E3,4}, {NOTE_C3,4}, {NOTE_E3,2}, {0,2},                    // 33 31 3 0
  {NOTE_G3,4}, {NOTE_G3,4}, {NOTE_E3,4}, {NOTE_C3,4}, {NOTE_G2,4}, {NOTE_G2,4}, {NOTE_G2,2}, // 55 31 55 5
  {NOTE_A2,4}, {NOTE_B2,4}, {NOTE_C3,4}, {NOTE_E3,4}, {NOTE_D3,2}, {0,2},                    // 67 13 2 0
  {NOTE_E3,4}, {NOTE_E3,4}, {NOTE_E3,4}, {NOTE_C3,4}, {NOTE_G2,2}, {NOTE_G2,4}, {0,4},       // 33 31 5 50
  {NOTE_E3,4}, {NOTE_E3,4}, {NOTE_E3,4}, {NOTE_C3,4}, {NOTE_E3,2}, {0,2},                    // 33 31 3 0
  {NOTE_G3,4}, {NOTE_A3,4}, {NOTE_G3,4}, {NOTE_A3,4}, {NOTE_G3,4}, {NOTE_F3,4}, {NOTE_E3,4},
  {NOTE_C3,4}, {NOTE_G2,4}, {0,4},       {NOTE_C3,4}, {0,4},       {NOTE_D3,4}, {NOTE_C3,4}, {0,2} //56 56 54 31 50 30 21 0
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
//  4, 4, 4, 4, 2, 4, 4,
//  4, 4, 4, 4, 2, 2,
//  4, 4, 4, 4, 4, 4, 2, 
//  4, 4, 4, 4, 2, 2,
//  4, 4, 4, 4, 2, 4, 4,
//  4, 4, 4, 4, 2, 2,
//  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2
};
