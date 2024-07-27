#include <ESP32Servo.h>

const int servoPin = 18;
const int greenLedPin = 14; 
const int redLedPin = 25;   

Servo servo;

void setup() {
  servo.attach(servoPin, 500, 2400);
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
}

int pos = 0;

void loop() {
  // Turning servo to the right
  digitalWrite(greenLedPin, LOW);
  digitalWrite(redLedPin, HIGH);
  for (pos = 0; pos <= 180; pos += 1) {
    servo.write(pos);
    delay(15);
  }

  // Turning servo to the left
  digitalWrite(redLedPin, LOW);
  digitalWrite(greenLedPin, HIGH);
  for (pos = 180; pos >= 0; pos -= 1) {
    servo.write(pos);
    delay(15);
  }
}
