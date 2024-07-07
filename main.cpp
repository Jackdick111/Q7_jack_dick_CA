#include "mbed.h"


DigitalOut led1(LED1);
DigitalOut led2(LED2);

int main() {
   
    led1 = 0;
    led2 = 0;

 
    const int interval1 = 2000; // (2 seconds)
    const int interval2 = 5000; // (5 seconds)

    
    Timer timer1;
    Timer timer2;

    // Start the timers
    timer1.start();
    timer2.start();

    while (true) {
        // Check if 2 seconds have passed for LED1
        if (timer1.elapsed_time().count() >= interval1 * 1000) {
            led1 = !led1; // Toggle LED1
            timer1.reset(); // Reset the timer
        }

        // Check if 5 seconds have passed for LED2
        if (timer2.elapsed_time().count() >= interval2 * 1000) {
            led2 = !led2; // Toggle LED2
            timer2.reset(); // Reset the timer
        }

        
        
    }
}
