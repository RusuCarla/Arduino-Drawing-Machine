#include <AFMotor.h>
AF_Stepper motorX(48, 1);
AF_Stepper motorY(48, 2);

void setup() {
  motorX.setSpeed(150);
  motorY.setSpeed(150);
  delay(1000);
}

void loop() {
  
  //X-axis motor
  motorX.step(256, FORWARD, SINGLE);
  motorX.step(256, BACKWARD, SINGLE);

  motorX.step(256, FORWARD, DOUBLE);
  motorX.step(256, BACKWARD, DOUBLE);

  motorX.step(256, FORWARD, INTERLEAVE);
  motorX.step(256, BACKWARD, INTERLEAVE);

  motorX.step(256, FORWARD, MICROSTEP);
  motorX.step(256, BACKWARD, MICROSTEP);

  //Y-axis motor
  motorY.step(256, FORWARD, SINGLE);
  motorY.step(256, BACKWARD, SINGLE);

  motorY.step(256, FORWARD, DOUBLE);
  motorY.step(256, BACKWARD, DOUBLE);

  motorY.step(256, FORWARD, INTERLEAVE);
  motorY.step(256, BACKWARD, INTERLEAVE);

  motorY.step(256, FORWARD, MICROSTEP);
  motorY.step(256, BACKWARD, MICROSTEP);
}
