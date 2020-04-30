#include <Servo.h>
Servo myservo;  // create servo object to control a servo
int pos;        // variable to store the servo position

void setup() {
  myservo.attach(10);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 80; pos <= 140; pos += 1) { // goes from 80 degrees to 140 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 140; pos >= 80; pos -= 1) { // goes from 140 degrees to 80 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }
}
