#ifndef FREERTOS_H
#define FREERTOS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>

// FreeRTOS ya está integrado en el framework de ESP32
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "freertos/semphr.h"
#include "freertos/timers.h"

// Declaración de funciones
void setupTasks(void);

#ifdef __cplusplus
}
#endif

#endif // FREERTOS_H