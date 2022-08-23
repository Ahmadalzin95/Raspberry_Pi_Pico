#include "pico/stdlib.h"

#define GPIO_ON 1
#define GPIO_OFF 0

int main(){

    uint LED_GPIO = 0; 
    while(true){

        for(uint i = 6; i <= 15; i++){

            LED_GPIO = i;

            gpio_init(LED_GPIO);
            gpio_set_dir(LED_GPIO, GPIO_OUT);

            gpio_put(LED_GPIO, GPIO_ON);
            sleep_ms(50);
            gpio_put(LED_GPIO, GPIO_OFF);
            sleep_ms(50);
            
        }
    }
}