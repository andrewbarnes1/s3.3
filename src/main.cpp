#include "mbed.h"

DigitalIn fire(D4);
DigitalOut green(D9,1);

PwmOut speaker(D6);

// Function to play a note. Pause is wait time.
void tone(float note, float pause) {
  speaker.period(1.0/note);
  speaker.write(0.5);
  wait(pause);
}

int main()
{
  while (1) {

    //20hz = 20.0
    //20khz = 20.0e3

    //List of notes with hz
    float lowA = 220.000;
    float middleC = 261.626;
    float d = 293.665;
    float e = 329.628;
    float noteF = 349.228;
    float g = 391.995;
    float a = 440.000;
    float b = 493.883;
    float c = 523.251;

    green.write(1);

    /*
    // Metal Gear?
    tone(e,0.25);
    tone(d,0.25);
    tone(middleC,1.25);
    tone(d,0.25);
    tone(e,0.25);
    tone(lowA,0.25);
    tone(e,0.5);
    tone(d,1);
    */

    // Plays each note every half a second.

    speaker.period(1.0/middleC);
    speaker.write(0.5);
    wait(0.5);
    speaker.period(1.0/d);
    speaker.write(0.5);
    wait(0.5);
    speaker.period(1.0/e);
    speaker.write(0.5);
    wait(0.5);
    speaker.period(1.0/noteF);
    speaker.write(0.5);
    wait(0.5);
    speaker.period(1.0/g);
    speaker.write(0.5);
    wait(0.5);
    speaker.period(1.0/a);
    speaker.write(0.5);
    wait(0.5);
    speaker.period(1.0/b);
    speaker.write(0.5);
    wait(0.5);
    speaker.period(1.0/c);
    speaker.write(0.5);
    wait(0.5);

    /*
    //Play through all frequencies

    for (f=20.0; f<20.0e3; f+=100) {
    speaker.period(1.0/f);
    speaker.write(0.5);
    wait(0.1);
  }

  speaker.write(0.0);
  green.write(0);
  while(!fire);
  */
}
}
