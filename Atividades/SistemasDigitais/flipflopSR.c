#include <wiringPi.h>
#include <stdio.h>

#define PIN_SET       2
#define PIN_RESET 26
#define LED_Q         22

int main() {
    wiringPiSetup();

    pinMode(PIN_SET, INPUT);
    pinMode(PIN_RESET, INPUT);
    pullUpDnControl(PIN_SET, PUD_UP);
    pullUpDnControl(PIN_RESET, PUD_UP);

    pinMode(LED_Q, OUTPUT);

    int q = 0;

    while (1) {
        int setPressed = (digitalRead(PIN_SET) == LOW);
        int resetPressed = (digitalRead(PIN_RESET) == LOW);

        if (setPressed && !resetPressed) {
            q = 1;
        } else if (!setPressed && resetPressed) {
            q = 0;
        } else if (setPressed && resetPressed) {
            printf("Estado proibido: SET e RESET pressionados ao mesmo tempo!\n");
        }

        digitalWrite(LED_Q, q);
        delay(50);
    }

    return 0;
}
