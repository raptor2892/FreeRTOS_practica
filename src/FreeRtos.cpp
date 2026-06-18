#include <Arduino.h>
#include "FreeRtos.h"

static void blinkTask(void *pvParameters)
{
    const uint8_t ledPin = 2;
    pinMode(ledPin, OUTPUT);

    while (true) {
        digitalWrite(ledPin, HIGH);
        vTaskDelay(pdMS_TO_TICKS(500));
        digitalWrite(ledPin, LOW);
        vTaskDelay(pdMS_TO_TICKS(500));
    }
}

void setupTasks()
{
    xTaskCreate(
        blinkTask,
        "Blink",
        4096,
        NULL,
        1,
        NULL
    );
}
