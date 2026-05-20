#include "Stepper.h"

Stepper myStepper = Stepper(stepsPerRevolution, 19, 5, 18, 17); // IN1 IN2 IN3 IN4

void setup() {
  myStepper.setSpeed(15); // De 1 a 15
  Serial.begin(9600);
}

void loop() {
  myStepper.step(1);
  delay(1);
}
