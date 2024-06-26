#include <Arduino.h>

void setup() {
  Serial.begin(MONITOR_SPEED);
  while (!Serial)
    ;
  Serial.println("Booted");
}

void loop() {}
