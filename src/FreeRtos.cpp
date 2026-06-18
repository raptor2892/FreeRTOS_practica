#include <Arduino.h>
#include "FreeRtos.h"

// Funciones FreeRTOS básicas más usadas:
// xTaskCreate()       - crear una tarea
// vTaskDelay()        - pausar una tarea por tiempo fijo
// vTaskDelete()       - eliminar una tarea
// xQueueCreate()      - crear una cola de datos
// xQueueSend()        - enviar datos a una cola
// xQueueReceive()     - recibir datos de una cola
// xSemaphoreCreateBinary() - crear un semáforo binario
// xSemaphoreTake()    - tomar un semáforo
// xSemaphoreGive()    - liberar un semáforo

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
    // Ejemplo de xTaskCreate:
    // xTaskCreate(
    //     taskFunction,      // función que ejecuta la tarea
    //     "TaskName",       // nombre de la tarea para debug
    //     stackSize,         // tamaño de pila en palabras (no bytes)
    //     pvParameters,      // puntero a parámetros para la tarea
    //     uxPriority,        // prioridad de la tarea
    //     pxCreatedTask      // handle de la tarea creada
    // );
    
    xTaskCreate(
        blinkTask,   // taskFunction: función donde corre la tarea
        "Blink",    // name: nombre legible de la tarea
        4096,        // stackSize: pila reservada para la tarea
        NULL,        // pvParameters: argumentos pasados a la tarea
        1,           // uxPriority: prioridad de la tarea
        NULL         // pxCreatedTask: handle opcional si se quiere guardar
    );
}

