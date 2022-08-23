#include "pico/stdlib.h"
#include "hardware/pwm.h"
#define LED_PIN 15

int main(){
    
    gpio_set_function(LED_PIN, GPIO_FUNC_PWM);
    
    uint slice_num = pwm_gpio_to_slice_num(LED_PIN);

    pwm_set_wrap(slice_num, 255);
    pwm_set_enabled(slice_num, true);
    
    while (true)
    {
        for (int i = 0; i <= 255; i += 5){

            pwm_set_gpio_level(LED_PIN, i);
            sleep_ms(5);
        }

        sleep_ms(10);

        for (int i = 255; i >= 0; i -= 5){

            pwm_set_gpio_level(LED_PIN, i);
            sleep_ms(5);
        }

        sleep_ms(10);
    }
}