#include <Arduino.h>
#include "FreeRtos.h"

void setup() {
    Serial.begin(115200);
    setupTasks();
}

void loop() {
    delay(1000);
}
