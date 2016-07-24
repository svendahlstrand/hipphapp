#include "vibrator.h"

Vibrator::Vibrator() {
}

void Vibrator::begin(int pin) {
  pin_ = pin;
  pinMode(pin_, OUTPUT);
}

void Vibrator::vibrate() {
  fadeInOut();
}

void Vibrator::vibrateIntense() {
  for (int i = 0; i < 3; i++) {
    fadeInOut();
  }
}

void Vibrator::fadeInOut() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(pin_, i);
    delay(2);
  }

  for (int i = 255; i >= 0; i--) {
    analogWrite(pin_, i);
    delay(2);
  }

  digitalWrite(pin_, LOW);
}
