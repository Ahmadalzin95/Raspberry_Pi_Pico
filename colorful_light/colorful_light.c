#include"pico/stdlib.h"

#define redPin 13
#define greenPin 14
#define bluePin 15

void color (unsigned char red, unsigned char green, unsigned char blue){

    gpio_put(redPin, red);
    gpio_put(greenPin, green);
    gpio_put(bluePin, blue);
}

main(){
    
    gpio_init(redPin);
    gpio_init(greenPin);
    gpio_init(bluePin);

    gpio_set_dir(redPin, GPIO_OUT);
    gpio_set_dir(greenPin, GPIO_OUT);
    gpio_set_dir(bluePin, GPIO_OUT);

    while(true){

        color(22,181,133);
        sleep_ms(1000);

        color(255, 0, 0);
        sleep_ms(1000);

        color(0, 255, 0);
        sleep_ms(1000);

        color(0, 0, 255);
        sleep_ms(1000);

        color(255,255, 255);
        sleep_ms(1000);

        color(0, 0, 0);
        sleep_ms(1000);

        color(153, 3, 91);
        sleep_ms(1000);

        color(207, 79, 10);
        sleep_ms(1000);

        color(79, 207, 10);
        sleep_ms(1000);

        color(128,0,128);
        sleep_ms(1000);
    }
}