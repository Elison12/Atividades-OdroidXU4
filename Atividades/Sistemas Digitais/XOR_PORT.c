#include <stdio.h>
#include <wiringPi.h>

#define PIN_SET       6
#define PIN_Constant 2
#define LED_Q         22

void main() {
    wiringPiSetup()

    pinMode(PIN_SET, INPUT);
    pullUpDnControl(PIN_set, PUD_UP);

    pinMode(LED_Q, OUTPUT);
    int q = 0;
    while (1) {
        int setPressed = (digitalRead(PIN_SET) == LOW);

        if (setPressed) {
            q = 1;
        }
        digitalWrite(PIN_Constant, HIGH);
        digitalWrite(LED_Q, q);
    }

    return 0;
}

