#include <Arduino.h>
#include "FreeRtos.h"

void setup(){
    Serial.begin(115200);
    delay(1000);
    Serial.println("ESP32 con FreeRTOS iniciado");
    
    setupTasks();
}

void loop(){
    delay(1000);
}
  