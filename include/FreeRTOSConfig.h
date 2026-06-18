#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

/* Here is a good place to include header files that are required across
your application. */
#include <stdint.h>

#define configUSE_PREEMPTION                     1
#define configSUPPORT_STATIC_ALLOCATION          0
#define configSUPPORT_DYNAMIC_ALLOCATION         1
#define configTOTAL_HEAP_SIZE                    (32 * 1024)
#define configMAX_TASK_NAME_LEN                  16
#define configUSE_16_BIT_TICKS                   0
#define configIDLE_SHOULD_YIELD                  1
#define configUSE_TASK_NOTIFICATIONS             1
#define configUSE_MUTEXES                        1
#define configUSE_RECURSIVE_MUTEXES              1
#define configUSE_COUNTING_SEMAPHORES            1
#define configUSE_ALTERNATIVE_API                0
#define configQUEUE_REGISTRY_SIZE                10
#define configUSE_QUEUE_SETS                     0

/* Set the following definitions to 1 to include the API function, or zero
to exclude the API function. */
#define INCLUDE_vTaskPrioritySet                 1
#define INCLUDE_uxTaskPriorityGet                1
#define INCLUDE_vTaskDelete                      1
#define INCLUDE_vTaskCleanUpResources            0
#define INCLUDE_vTaskSuspend                     1
#define INCLUDE_vTaskDelayUntil                  1
#define INCLUDE_vTaskDelay                       1
#define INCLUDE_xTaskGetSchedulerState           1
#define INCLUDE_xTaskGetCurrentTaskHandle        1
#define INCLUDE_uxTaskGetStackHighWaterMark      1
#define INCLUDE_xTaskGetIdleTaskHandle           0
#define INCLUDE_xTimerGetTimerDaemonTaskHandle   0
#define INCLUDE_pcTaskGetTaskName                1
#define INCLUDE_xEventGroupSetBitsFromISR        1
#define INCLUDE_xTimerPendFunctionCall           1
#define INCLUDE_eTaskGetState                    1

/* Cortex-M specific definitions. */
#define configPRIO_BITS                          4
#define configLIBRARY_LOWEST_INTERRUPT_PRIORITY  0xf
#define configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY 5

#define configKERNEL_INTERRUPT_PRIORITY          (configLIBRARY_LOWEST_INTERRUPT_PRIORITY << (8 - configPRIO_BITS))
#define configMAX_SYSCALL_INTERRUPT_PRIORITY     (configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY << (8 - configPRIO_BITS))

#define configUSE_TICK_HOOK                      0
#define configUSE_IDLE_HOOK                      0
#define configCHECK_FOR_STACK_OVERFLOW           0
#define configUSE_MALLOC_FAILED_HOOK             0
#define configUSE_DAEMON_TASK_STARTUP_HOOK       0

/* Software timer definitions. */
#define configUSE_TIMERS                         1
#define configTIMER_TASK_PRIORITY                (configMAX_PRIORITIES - 1)
#define configTIMER_QUEUE_LENGTH                 10
#define configTIMER_TASK_STACK_DEPTH             (configMINIMAL_STACK_SIZE * 2)

/* Set the following definition to 1 to include the vTaskEndScheduler() function,
or 0 to leave the scheduler running after the vTaskStartScheduler() function. */
#define configUSE_APPLICATION_TASK_TAG           0

/* Priorities at which the event timer task executes. */
#define configEVENT_LOOP_TASK_PRIORITY           (configMAX_PRIORITIES - 2)

/* Task priorities. A mainstream MCU can probably run all the tasks defined
here on the main stack, so set the stack for the idle task to be very small.
The idle task MUST have the lowest priority. */
#define configMAX_PRIORITIES                     5
#define configMINIMAL_STACK_SIZE                 512

/* Task stack allocation functions use these definitions so set the following
definitions to 1 to use dynamically allocated stacks or 0 to use statically
allocated stacks. */
#define configSTATIC_ALLOCATION                  0

#endif /* FREERTOS_CONFIG_H */
