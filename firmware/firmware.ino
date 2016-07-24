#include "./vibrator.h"
#include "./timer.h"

Vibrator vibrator;
Timer timer;

int buttonPin = 3;
int vibratorPin = 6;

void setup() {
  vibrator.begin(vibratorPin);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    vibrator.vibrate();
    timer.start(5);
  }

  if (timer.justFinished()) {
    vibrator.vibrateIntense();
  }
}
