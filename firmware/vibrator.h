#ifndef HIPPHAPP_VIBRATOR_H
#define HIPPHAPP_VIBRATOR_H

#include <arduino.h>

class Vibrator {
 public:
  explicit Vibrator();

  void begin(int pin);
  void vibrate();
  void vibrateIntense();

 private:
  int pin_;
  void fadeInOut();
};

#endif  // HIPPHAPP_VIBRATOR_H
