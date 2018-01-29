#include "mbed.h"

DigitalIn fire(D4);
DigitalOut green(D9,1);

PwmOut speaker(D6);

int main()
{
  while (1) {
    float f;
    green.write(1);

    for(int i = 0; i < 25; i++) {
      speaker.period(1.0/261);
      speaker.write(0.5);
      wait(0.1);
    }
    for(int i = 0; i < 25; i++) {
      speaker.period(1.0/293);
      speaker.write(0.5);
      wait(0.1);
    }
    for(int i = 0; i < 25; i++) {
      speaker.period(1.0/329);
      speaker.write(0.5);
      wait(0.1);
    }

    /*
    // 20hz ; 20khz ; Incrementation
    for (f=20.00; f<5.0e3; f+=300) {
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
