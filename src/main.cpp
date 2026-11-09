#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  // ORANGE
  pinMode(4, OUTPUT);
  // GREEN
  pinMode(3, OUTPUT);
  // WHITE
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(4, HIGH);
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
}
