#ifndef HIPPHAPP_TIMER_H
#define HIPPHAPP_TIMER_H

#include <arduino.h>

class Timer {
 public:
  explicit Timer();

  void start(int numberOfSeconds);
  bool justFinished();

 private:
  unsigned long startedAt_;
  unsigned long numberOfMillisToWait_;
  bool isRunning_;
};

#endif  // HIPPHAPP_TIMER_H
