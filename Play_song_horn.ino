//YouTube|Tech at Home
/*
 Connections:
 
 Speaker positive = Arduino digital 8
 Speaker negative = Arduino GND
 
*/

int tempo = 3000;
int buzzer = 10;

#define mod  5
#define NOTE_B0  31*mod
#define NOTE_C1  33*mod
#define NOTE_CS1 35*mod
#define NOTE_D1  37*mod
#define NOTE_DS1 39*mod
#define NOTE_E1  41*mod
#define NOTE_F1  44*mod
#define NOTE_FS1 46*mod
#define NOTE_G1  49*mod
#define NOTE_GS1 52*mod
#define NOTE_A1  55*mod
#define NOTE_AS1 58*mod
#define NOTE_B1  62*mod
#define NOTE_C2  65*mod
#define NOTE_CS2 69*mod
#define NOTE_D2  73*mod
#define NOTE_DS2 78*mod
#define NOTE_E2  82*mod
#define NOTE_F2  87*mod
#define NOTE_FS2 93*mod
#define NOTE_G2  98*mod
#define NOTE_GS2 104*mod
#define NOTE_A2  110*mod
#define NOTE_AS2 117*mod
#define NOTE_B2  123*mod
#define NOTE_C3  131*mod
#define NOTE_CS3 139*mod
#define NOTE_D3  147*mod
#define NOTE_DS3 156*mod
#define NOTE_E3  165*mod
#define NOTE_F3  175*mod
#define NOTE_FS3 185*mod
#define NOTE_G3  196*mod
#define NOTE_GS3 208*mod
#define NOTE_A3  220*mod
#define NOTE_AS3 233*mod
#define NOTE_B3  247*mod
#define NOTE_C4  262*mod
#define NOTE_CS4 277*mod
#define NOTE_D4  294*mod
#define NOTE_DS4 311*mod
#define NOTE_E4  330*mod
#define NOTE_F4  349*mod
#define NOTE_FS4 370*mod
#define NOTE_G4  392*mod
#define NOTE_GS4 415*mod
#define NOTE_A4  440*mod
#define NOTE_AS4 466*mod
#define NOTE_B4  494*mod
#define NOTE_C5  523*mod
#define NOTE_CS5 554*mod
#define NOTE_D5  587*mod
#define NOTE_DS5 622*mod
#define NOTE_E5  659*mod
#define NOTE_F5  698*mod
#define NOTE_FS5 740*mod
#define NOTE_G5  784*mod
#define NOTE_GS5 831*mod
#define NOTE_A5  880*mod
#define NOTE_AS5 932*mod
#define NOTE_B5  988*mod
#define NOTE_C6  1047*mod
#define NOTE_CS6 1109*mod
#define NOTE_D6  1175*mod
#define NOTE_DS6 1245*mod
#define NOTE_E6  1319*mod
#define NOTE_F6  1397*mod
#define NOTE_FS6 1480*mod
#define NOTE_G6  1568*mod
#define NOTE_GS6 1661*mod
#define NOTE_A6  1760*mod
#define NOTE_AS6 1865*mod
#define NOTE_B6  1976*mod
#define NOTE_C7  2093*mod
#define NOTE_CS7 2217*mod
#define NOTE_D7  2349*mod
#define NOTE_DS7 2489*mod
#define NOTE_E7  2637*mod
#define NOTE_F7  2794*mod
#define NOTE_FS7 2960*mod
#define NOTE_G7  3136*mod
#define NOTE_GS7 3322*mod
#define NOTE_A7  3520*mod
#define NOTE_AS7 3729*mod
#define NOTE_B7  3951*mod
#define NOTE_C8  4186*mod
#define NOTE_CS8 4435*mod
#define NOTE_D8  4699*mod
#define NOTE_DS8 4978*mod
#define REST 0



// notes of the moledy followed by the duration.
// a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
// !!negative numbers are used to represent dotted notes,
// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!

int Final_countdown_melody[] = {
 NOTE_B4, 16, NOTE_A4, 16, NOTE_B4, 4, NOTE_E4, 2,
 REST, 8, NOTE_C5, 16,  NOTE_B4, 16, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 2,
 REST, 8, NOTE_C5, 16, NOTE_B4, 16, NOTE_C5, 4, NOTE_E4, 4,
 NOTE_FS4, 4, REST, 8, NOTE_A4, 16,  NOTE_G4, 16, NOTE_A4, 8, NOTE_G4, 8, NOTE_FS4, 8, NOTE_A4, 8, NOTE_G4, -4
// REST, 8, 
//
// NOTE_B4, 16, NOTE_A4, 16, NOTE_B4, 4, NOTE_E4, -4,
// REST, 4, NOTE_C5, 16, NOTE_B4, 16, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, -4,
// REST, 4, NOTE_B4, 16, NOTE_A4, 16, NOTE_B4, 4, NOTE_E4, 4,
// NOTE_FS4, 4, REST, 8, NOTE_A4, 16, NOTE_G4, 16, NOTE_A4, 8, NOTE_G4, 8, NOTE_FS4, 8, NOTE_A4, 8, NOTE_G4, -4 

// NOTE_G4, 3, NOTE_FS4, 16,  NOTE_G4, 16, NOTE_A4, 3, NOTE_G4, 16, NOTE_A4, 16,
// NOTE_B4, 8, NOTE_A4, 8, NOTE_G4, 8, NOTE_FS4, 8, NOTE_E4, 4, NOTE_B4, 4,
// NOTE_C5, 1, 
// //NOTE_C5, 1,
// NOTE_G4, 4, REST, 4, NOTE_B4, 16, NOTE_A4, 16, NOTE_B4, 4, NOTE_E4, 4, 
// REST, -4, NOTE_C5, 16, NOTE_B4, 16, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 8,
//
// REST, -4, NOTE_C5, 16,  NOTE_B4, 16, NOTE_C5, 4, NOTE_E4, 4,
// NOTE_FS4, 4, REST, 4, NOTE_A4, 16, NOTE_G4, 16, NOTE_A4, 8, NOTE_G4, 8, NOTE_FS4, 8, NOTE_A4, 8,
// NOTE_G4, 4,  REST, 4, NOTE_B4, 16, NOTE_A4, 16, NOTE_B4, 4, NOTE_E4, 4,
// REST, -4, NOTE_C5, 16, NOTE_B4, 16, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 4,
// REST, -4, NOTE_C5, 16, NOTE_B4, 16, NOTE_C5, 4, NOTE_E4, 4,
//
// NOTE_FS4, 4, REST, 4, NOTE_A4, 16,  NOTE_G4, 16, NOTE_A4, 8, NOTE_G4, 8, NOTE_FS4, 8, NOTE_A4, 8,
// NOTE_G4, 3, NOTE_FS4, 16, NOTE_G4, 16, NOTE_A4, 3, NOTE_G4, 16, NOTE_A4, 16,
// NOTE_B4, 8, NOTE_A4, 8, NOTE_G4, 8, NOTE_FS4, 8, NOTE_E4, 4, NOTE_B4, 4,
// NOTE_C5, 1, 
};

int HarryPotter_melody[] = {
  
  NOTE_D4, 4,
  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_G4, 2, NOTE_D5, 4,
  NOTE_C5, -2, 
  NOTE_A4, -2,
  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_F4, 2, NOTE_GS4, 4,
  NOTE_D4, 1, 
  NOTE_D4, 4,

  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4, //10
  NOTE_G4, 2, NOTE_D5, 4,
  NOTE_F5, 2, NOTE_E5, 4,
  NOTE_DS5, 2, NOTE_B4, 4,
  NOTE_DS5, -4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_B4, 4,
  NOTE_G4, 1, REST, 4,
//  NOTE_AS4, 4,
     
//  NOTE_D5, 2, NOTE_AS4, 4,//18
//  NOTE_D5, 2, NOTE_AS4, 4,
//  NOTE_DS5, 2, NOTE_D5, 4,
//  NOTE_CS5, 2, NOTE_A4, 4,
//  NOTE_AS4, -4, NOTE_D5, 8, NOTE_CS5, 4,
//  NOTE_CS4, 2, NOTE_D4, 4,
//  NOTE_D5, 1, 
//  REST,4, NOTE_AS4,4,  
//
//  NOTE_D5, 2, NOTE_AS4, 4,//26
//  NOTE_D5, 2, NOTE_AS4, 4,
//  NOTE_F5, 2, NOTE_E5, 4,
//  NOTE_DS5, 2, NOTE_B4, 4,
//  NOTE_DS5, -4, NOTE_D5, 8, NOTE_CS5, 4,
//  NOTE_CS4, 2, NOTE_AS4, 4,
//  NOTE_G4, 1, 
//  
};

int Carribean_melody[] = {       //Note of the song, 0 is a rest/pulse
   NOTE_E4, 8, NOTE_G4, 8, NOTE_A4, 4, NOTE_A4, 8, REST, 8, 
   NOTE_A4, 8, NOTE_B4, 8 ,NOTE_C5, 4, NOTE_C5, 8, REST, 8,
   NOTE_C5, 8, NOTE_D5, 8, NOTE_B4, 4, NOTE_B4, 8, REST, 8,
   NOTE_A4, 8, NOTE_G4, 8, NOTE_A4, -4, REST, -8,
   
   NOTE_E4, 8, NOTE_G4, 8, NOTE_A4, 4, NOTE_A4, 8, REST, 8, 
   NOTE_A4, 8, NOTE_B4, 8 ,NOTE_C5, 4, NOTE_C5, 8, REST, 8,
   NOTE_C5, 8, NOTE_D5, 8, NOTE_B4, 4, NOTE_B4, 8, REST, 8,
   NOTE_A4, 8, NOTE_G4, 8, NOTE_A4, -4, REST, -8,
   
   NOTE_E4, 8, NOTE_G4, 8, NOTE_A4, 4, NOTE_A4, 8, REST, 8,  
   NOTE_A4, 8, NOTE_C5, 8, NOTE_D5, 4, NOTE_D5, 8, REST, 8, 
   NOTE_D5, 8, NOTE_E5, 8, NOTE_F5, 4, NOTE_F5, 8, REST, 8,
   NOTE_E5, 8, NOTE_D5, 8, NOTE_E5, 8, NOTE_A4, 4, REST, 8,
   
   NOTE_A4, 8, NOTE_B4, 8, NOTE_C5, 4, NOTE_C5, 8, REST, 8, 
   NOTE_D5, 4, NOTE_E5, 8, NOTE_A4, 4, REST, 8, 
   NOTE_A4, 8, NOTE_C5, 8, NOTE_B4, 4, NOTE_B4, 8, REST, 8,
   NOTE_C5, 8, NOTE_A4, 8, NOTE_B4, -4, REST, 8,

//   NOTE_A4, 4, NOTE_A4, 8, 
   //Repeat of first part
//   NOTE_A4, 8, NOTE_B4, 8 ,NOTE_C5, 4, NOTE_C5, 8, REST, 8, 
//   NOTE_C5, 8, NOTE_D5, 8, NOTE_B4, 4, NOTE_B4, 8, REST, 8,
//   NOTE_A4, 8, NOTE_G4, 8, NOTE_A4, 4, REST, 4,
//
//   NOTE_E4, 8, NOTE_G4, 8, NOTE_A4, 4, NOTE_A4, 8, REST, 8, 
//   NOTE_A4, 8, NOTE_B4, 8 ,NOTE_C5, 4, NOTE_C5, 8, REST, 8,
//   NOTE_C5, 8, NOTE_D5, 8, NOTE_B4, 4, NOTE_B4, 8, REST, 8,
//   NOTE_A4, 8, NOTE_G4, 8, NOTE_A4, 4, REST, 4,
//   
//   NOTE_E4, 8, NOTE_G4, 8, NOTE_A4, 4, NOTE_A4, 8, REST, 8,  
//   NOTE_A4, 8, NOTE_C5, 8, NOTE_D5, 4, NOTE_D5, 8, REST, 8, 
//   NOTE_D5, 8, NOTE_E5, 8, NOTE_F5, 4, NOTE_F5, 8, REST, 8,
//   NOTE_E5, 8, NOTE_D5, 8, NOTE_E5, 8, NOTE_A4, 4, REST, 8,
//   
//   NOTE_A4, 8, NOTE_B4, 8, NOTE_C5, 4, NOTE_C5, 8, REST, 8, 
//   NOTE_D5, 4, NOTE_E5, 8, NOTE_A4, 4, REST, 8, 
//   NOTE_A4, 8, NOTE_C5, 8, NOTE_B4, 4, NOTE_B4, 8, REST, 8,
//   NOTE_C5, 8, NOTE_A4, 8, NOTE_B4, -4, REST, -4,
//   //End of Repeat
//
//   NOTE_E5, 4, REST, 8, REST, -4, NOTE_F5, 4, REST, 8, REST, -4,
//   NOTE_E5, 8, NOTE_E5, 8, REST, 8, NOTE_G5, 8, REST, 8, NOTE_E5, 8, NOTE_D5, 8, REST, 8, REST, -4,
//   NOTE_D5, 4, REST, 8, REST, -4, NOTE_C5, 4, REST, 8, REST, -4,
//   NOTE_B4, 8, NOTE_C5, 8, REST, 8, NOTE_B4, 8, REST, 8, NOTE_A4, 2,
//
//   NOTE_E5, 4, REST, 8, REST, -4, NOTE_F5, 4, REST, 8, REST, -4,
//   NOTE_E5, 8, NOTE_E5, 8, REST, 8, NOTE_G5, 8, REST, 8, NOTE_E5, 8, NOTE_D5, 8, REST, 8, REST, -4,
//   NOTE_D5, 4, REST, 8, REST, -4, NOTE_C5, 4, REST, 8, REST, -4,
//   NOTE_B4, 8, NOTE_C5, 8, REST, 8, NOTE_B4, 8, REST, 8, NOTE_A4, 2
};

int Coffin_dance_melody[] = {
//  NOTE_AS4, 4, NOTE_AS4, 4, NOTE_AS4, 4, NOTE_AS4, 4,
//  NOTE_D5, 4, NOTE_D5, 4, NOTE_D5, 4, NOTE_D5, 4,
//  NOTE_C5, 4, NOTE_C5, 4, NOTE_C5, 4, NOTE_C5, 4, 
//  NOTE_F5, 4, NOTE_F5, 4, NOTE_F5, 4, NOTE_F5, 4, 
//  NOTE_G5, 4, NOTE_G5, 4, NOTE_G5, 4, NOTE_G5, 4,
//  NOTE_G5, 4, NOTE_G5, 4, NOTE_G5, 4, NOTE_G5, 4, 
//  NOTE_G5, 4, NOTE_G5, 4, NOTE_G5, 4, NOTE_G5, 4, 
//  NOTE_C5, 4, NOTE_AS4, 4, NOTE_A4, 4, NOTE_F4, 4,
  NOTE_G4, 4, REST, 4, NOTE_G4, 4, NOTE_D5, 4,
  NOTE_C5, 4, REST, 4, NOTE_AS4, 4, REST, 4,
  NOTE_A4, 4, REST, 4, NOTE_A4, 4, NOTE_A4, 4,
  NOTE_C5, 4, REST, 4, NOTE_AS4, 4, NOTE_A4, 4, 
  NOTE_G4, 4,REST, 4, NOTE_G4, 4, NOTE_AS5, 4,
  NOTE_A5, 4, NOTE_AS5, 4, NOTE_A5, 4, NOTE_AS5, 4,
  NOTE_G4, 4,REST, 4, NOTE_G4, 4, NOTE_AS5, 4,
  NOTE_A5, 4, NOTE_AS5, 4, NOTE_A5, 4, NOTE_AS5, 4,
//  NOTE_G4, 4, REST, 4, NOTE_G4, 4, NOTE_D5, 4,
//  NOTE_C5, 4, REST, 4, NOTE_AS4, 4, REST, 4,
//  NOTE_A4, 4, REST, 4, NOTE_A4, 4, NOTE_A4, 4,
//  NOTE_C5, 4, REST, 4, NOTE_AS4, 4, NOTE_A4, 4, 
//  NOTE_G4, 4,REST, 4, NOTE_G4, 4, NOTE_AS5, 4,
//  NOTE_A5, 4, NOTE_AS5, 4, NOTE_A5, 4, NOTE_AS5, 4,
//  NOTE_G4, 4,REST, 4, NOTE_G4, 4, NOTE_AS5, 4,
//  NOTE_A5, 4, NOTE_AS5, 4, NOTE_A5, 4, NOTE_AS5, 4
 };


int Baby_shark_melody[] = {

   NOTE_C4, 2, NOTE_D4, 2, NOTE_F4, 4, NOTE_F4, 4, NOTE_F4, 4, NOTE_F4, 8, NOTE_F4, 4, NOTE_F4, 8, NOTE_F4, 4,
   NOTE_C4, 4, NOTE_D4, 4, NOTE_F4, 4, NOTE_F4, 4, NOTE_F4, 4, NOTE_F4, 8, NOTE_F4, 4, NOTE_F4, 8, NOTE_F4, 4,
   NOTE_C4, 4, NOTE_D4, 4, NOTE_F4, 4, NOTE_F4, 4, NOTE_F4, 4, NOTE_F4, 8, NOTE_F4, 4, NOTE_F4, 8, NOTE_F4, 4, NOTE_F4, 4, NOTE_F4, 4, NOTE_E4, 2,
      REST, 2
 };

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int HarryPotter_notes = sizeof(HarryPotter_melody) / sizeof(HarryPotter_melody[0]) / 2;
int Coffin_dance_notes = sizeof(Coffin_dance_melody) / sizeof(Coffin_dance_melody[0]) / 2;
int Carribean_notes = sizeof(Carribean_melody) / sizeof(Carribean_melody[0]) / 2;
int Baby_shark_notes = sizeof(Baby_shark_melody) / sizeof(Baby_shark_melody[0]) / 2;
int Final_countdown_notes = sizeof(Final_countdown_melody) / sizeof(Final_countdown_melody[0]) / 2;

// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;

void HarryPotter() {
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < HarryPotter_notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = HarryPotter_melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (70) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (70) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, HarryPotter_melody[thisNote], noteDuration*0.8);
    delay(noteDuration);
    noTone(buzzer);
  }
}


void Final_countdown() {
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < Final_countdown_notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = Final_countdown_melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (120) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, Final_countdown_melody[thisNote], noteDuration*0.8);
    delay(noteDuration);
    noTone(buzzer);
  }
}

void Baby_shark() {
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < Baby_shark_notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = Baby_shark_melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (70) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (70) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, Baby_shark_melody[thisNote], noteDuration*0.8);
    delay(noteDuration);
    noTone(buzzer);
  }
}

void Coffin_dance() {
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < Coffin_dance_notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = Coffin_dance_melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (60) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (60) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, Coffin_dance_melody[thisNote], noteDuration*0.8);
    delay(noteDuration);
    noTone(buzzer);
  }
}

void Carribean() {
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < Carribean_notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = Carribean_melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (70) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (70) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, Carribean_melody[thisNote], noteDuration*0.8);
    delay(noteDuration);
    noTone(buzzer);
  }
}

void setup() {
  pinMode(buzzer ,OUTPUT);
  pinMode(4 ,INPUT_PULLUP); // bip bip
  pinMode(5 ,INPUT_PULLUP); // final countdown-
  pinMode(6 ,INPUT_PULLUP); // carribean-
  pinMode(7 ,INPUT_PULLUP); // coffin dance-
  pinMode(8 ,INPUT_PULLUP); // baby shark-
  pinMode(9 ,INPUT_PULLUP); // harry potter
}

void loop() {
  if (digitalRead(4) == 0)
  {
    digitalWrite(buzzer, 1);
    delay(5);
    digitalWrite(buzzer, 0);
    delay(3);
  }

  if (digitalRead(5) == 0)
  {
    Coffin_dance();
  }

  if (digitalRead(6) == 0)
  {
    Final_countdown();
  }

  if (digitalRead(7) == 0)
  {
    Baby_shark();
  }

  if (digitalRead(8) == 0)
  {
    Carribean();
  }

  if (digitalRead(9) == 0)
  {
    HarryPotter();
  }
}
