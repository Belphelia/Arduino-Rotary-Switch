#include "RotaryRes.h"

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(getRotaryRes(A0),DEC);
  delay(1000);
}
