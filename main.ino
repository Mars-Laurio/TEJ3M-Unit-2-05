/*
* Created by: Mars Laurio
* Created on: Oct 2023
* Turns a servo 180* and then back.
*/

#include <Servo.h>

Servo servoNumber1;
  
  void setup() {
    
  servoNumber1.attach(2);
  servoNumber1.write(0);
}

void loop() {
  
  servoNumber1.write(180);
  delay(1000);
  servoNumber1.write(0);
  delay(1000);
}
  
  