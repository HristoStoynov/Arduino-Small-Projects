#include <Stepper.h>

const int stepsPerRevolution = 2048;
Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);

int potPin = A0;
int val = 0;   

void setup() {
  Serial.begin(9600);
}
void loop() {
  val = analogRead(potPin);
  int newSpeed = val / 100;
  myStepper.setSpeed(newSpeed + 5);
  myStepper.step(stepsPerRevolution);
}
