#include <Servo.h>

Servo myServo;

const int waterSensor = A0;
const int servoPin = 9;

const int threshold = 400;

void setup() {
  Serial.begin(9600);

  myServo.attach(servoPin);

  myServo.write(0);
}

void loop() {

  int waterValue = analogRead(waterSensor);

  Serial.println(waterValue);

  if (waterValue > threshold) {
    myServo.write(90);
  }
  else {
    myServo.write(0);
  }

  delay(100);
  }
