#include <stdio.h>
#include "driver/gpio.h"
#include "sdkconfig.h"
#include "freertos/freeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    gpio_set_direction(GPIO_NUM_21, GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_NUM_22, GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_NUM_23, GPIO_MODE_OUTPUT);
    while(1)
    {
        gpio_set_level(GPIO_NUM_21, 1);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        gpio_set_level(GPIO_NUM_21, 0);
        gpio_set_level(GPIO_NUM_22, 1);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        gpio_set_level(GPIO_NUM_21, 0);
        gpio_set_level(GPIO_NUM_22, 0);
        gpio_set_level(GPIO_NUM_23, 1);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        gpio_set_level(GPIO_NUM_21, 0);
        gpio_set_level(GPIO_NUM_22, 0);
        gpio_set_level(GPIO_NUM_23, 0);
    }
    

}
