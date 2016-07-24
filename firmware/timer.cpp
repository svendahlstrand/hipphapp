#include "timer.h"

Timer::Timer() {
  isRunning_ = false;
  numberOfMillisToWait_ = 0;
  startedAt_ = 0;
}

void Timer::start(int numberOfSeconds) {
  isRunning_ = true;
  numberOfMillisToWait_ = numberOfSeconds * 1000;
  startedAt_ = millis();
}

bool Timer::justFinished() {
  if (isRunning_) {
    unsigned long elapsed = millis() - startedAt_;

    if (elapsed >= numberOfMillisToWait_) {
      isRunning_ = false;

      return true;
    }
  }

  return false;
}
