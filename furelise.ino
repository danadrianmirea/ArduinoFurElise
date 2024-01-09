/**
   Arduino UNO project to play "Happy birthday" or "Fur Elise"
   Copyright (C) 2024, Adrian Mirea. Released under the MIT License.
*/

#define SPEAKER_PIN 10

//'Happy Birthday To You'
const int C = 523;
const int D = 587;
const int E = 659;
const int F = 699;
const int G = 784;
const int A = 880;
const int bFlat = 932;
const int highC = 1074;

/*C,C,D,C,F,E
  C,C,D,C,G,F
  C,C,highC,A,F,F,E,D
  B-flat,B-flat,highA,F,G,F
*/

const int noteDelay = 480; //how long each note plays

void setup() {
  pinMode(SPEAKER_PIN, OUTPUT);
}

// TODO: clean up this stuff, use some kind of structure of notes to be played
// instead of magic numbers

void playFurElise() {
  
  // play e4
  delay(600);
  tone(10, 329.63, 300);
  delay(350);
  // play d4# 
  tone(10, 311.13, 300);
  delay(350);
  // play e4
  tone( 10, 329.63, 300);
  delay(350);
  // play d4# 
  tone( 10,311.13, 300);
  delay(350);
  // play e4
  tone(10, 329.63, 300);
  delay(350);
  // play b3
  tone( 10, 246.94, 300);
  delay(400);
  // play d4
  tone(10, 293.66,300);
  delay(400);
  // play c4
  tone(10, 261.63,300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play d3
  tone(10,146.83, 300);
  delay(350);
  //play f3
  tone(10, 174.61, 300);
  delay(400);
  //play a3
  tone(10, 220, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play a3#
  tone(10, 233.08, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 900);
  delay(1000);
  delay(300);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4#
  tone(10, 311.13, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4#
  tone(10, 311.13, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play d4
  tone(10, 293.66, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play d3
  tone(10, 146.83, 300);
  delay(400);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play a3
  tone(10, 220, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play b3
  tone(10,246.94, 300);
  delay(400);
   // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play d4
  tone(10, 293.66, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 900);
  delay(1000);
  // play g3
  tone(10, 196, 300);
  delay(400);
  // play f4
  tone(10, 349.23, 300);
  delay(400);
  //play e4
  tone(10, 329.23, 300);
  delay(400);
  // play d4
  tone(10, 293.63, 900);
  delay(1000);
  // play e3
  tone(10,164.81, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4
  tone(10, 293.63, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 900);
  delay(1000);
  // play d3
  tone(10, 146.83, 300);
  delay(400);
    // play d4
  tone(10, 293.63, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4# 
  tone(10, 311.13, 300);
  delay(350);
  // play e4
  tone( 10, 329.63, 300);
  delay(350);
  // play d4# 
  tone( 10,311.13, 300);
  delay(350);
  // play e4
  tone(10, 329.63, 300);
  delay(350);
  // play b3
  tone( 10, 246.94, 300);
  delay(400);
  // play d4
  tone(10, 293.66,300);
  delay(400);
  // play c4
  tone(10, 261.63,300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play d3
  tone(10,146.83, 300);
  delay(350);
  //play f3
  tone(10, 174.61, 300);
  delay(400);
  //play a3
  tone(10, 220, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play a3
  tone(10, 233.08, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 900);
  delay(1000);
  delay(300);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4#
  tone(10, 311.13, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4#
  tone(10, 311.13, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play d4
  tone(10, 293.66, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play d3
  tone(10, 146.83, 300);
  delay(400);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play a3
  tone(10, 220, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  
  delay(5000);


}


void playHappyBirthday()
{
      //First Line
    tone(SPEAKER_PIN,C);
    delay(noteDelay/3);

    noTone(SPEAKER_PIN); //Pause between two strikes of the same note sounds like a separate keystroke
    delay(20);
    
    tone(SPEAKER_PIN,C);
    delay(noteDelay/2);
    
    tone(SPEAKER_PIN,D);
    delay(noteDelay);
    tone(SPEAKER_PIN,C);
    delay(noteDelay);
    tone(SPEAKER_PIN,F);
    delay(noteDelay);
    tone(SPEAKER_PIN,E);
    delay(noteDelay);
    
    noTone(SPEAKER_PIN);
    delay(800);
    
    //Second Line
    tone(SPEAKER_PIN,C);
    delay(noteDelay/3);

    noTone(SPEAKER_PIN); //Pause between two strikes of the same note sounds like a separate keystroke
    delay(20);
    
    tone(SPEAKER_PIN,C);
    delay(noteDelay/2);
    tone(SPEAKER_PIN,D);
    delay(noteDelay);
    tone(SPEAKER_PIN,C);
    delay(noteDelay);
    tone(SPEAKER_PIN,G);
    delay(noteDelay);
    tone(SPEAKER_PIN,F);
    delay(noteDelay);
    
    noTone(SPEAKER_PIN);
    delay(800);
    
    //Third Line
    tone(SPEAKER_PIN,C);
    delay(noteDelay/3);

    noTone(SPEAKER_PIN); //Pause between two strikes of the same note sounds like a separate keystroke
    delay(20);
    
    tone(SPEAKER_PIN,C);
    delay(noteDelay/2);
    
    tone(SPEAKER_PIN,highC);
    delay(noteDelay);
    tone(SPEAKER_PIN,A);
    delay(noteDelay);
    
    tone(SPEAKER_PIN,F);
    delay(noteDelay/2);

    noTone(SPEAKER_PIN); //Pause between two strikes of the same note sounds like a separate keystroke
    delay(20);
    
    tone(SPEAKER_PIN,F);
    delay(noteDelay);
    
    tone(SPEAKER_PIN,E);
    delay(noteDelay);
    
    tone(SPEAKER_PIN,D);
    delay(noteDelay);
    
    noTone(SPEAKER_PIN);
    delay(800);
    
    //Fourth Line
    tone(SPEAKER_PIN,bFlat);
    delay(noteDelay/2);

    noTone(SPEAKER_PIN); //Pause between two strikes of the same note sounds like a separate keystroke
    delay(20);
    
    tone(SPEAKER_PIN,bFlat);
    delay(noteDelay);
    
    tone(SPEAKER_PIN,A);
    delay(noteDelay);
    
    tone(SPEAKER_PIN,F);
    delay(noteDelay);
    
    tone(SPEAKER_PIN,G);
    delay(noteDelay);
    
    tone(SPEAKER_PIN,F);
    delay(noteDelay);
    
    noTone(SPEAKER_PIN);
    delay(2000); 

}

void loop() {
  //playHappyBirthday();
  playFurElise();
}
