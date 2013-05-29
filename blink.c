/* 
 * File:   blink.c
 * Author: viitanenm
 *
 * Created on April 5, 2013, 11:45 AM
 */

#include <p24FJ64GB002.h>

#define DELAY 5000
#define RB15AND13 0xA000
#define RB14 0x4000

int main(int argc, char** argv) {
    TRISB = 0x0000;
    T1CON = 0x8030;

    while (1) {
        // light up the red LED (RB15) and the yellow LED (RB13)
        LATB = RB15AND13;
        TMR1 = 0;
        while (TMR1 < DELAY) {
        }

        // light up the green LED (RB14)
        LATB = RB14;
        TMR1 = 0;
        while (TMR1 < DELAY) {
        }
    } // main loop
} // main