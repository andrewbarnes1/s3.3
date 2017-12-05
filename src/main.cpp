#include "mbed.h"

DigitalIn fire(D4);
PwmOut spkr(D6);

int main()
{
    while (1) {
        for (float i=2000.0; i<10000.0; i+=100) {
            spkr.period(1.0/i);
            spkr=0.5;
            wait(0.02);
        }
        spkr=0.0;
        while(!fire);
    }
}
