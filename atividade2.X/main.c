#include <pic18f4520.h>
#include "config.h"
#include "delay.h"
//Lucas Romualdo Lemos - 2021017077
void main(void) {
    //tempo mínimo: 100 ms
    unsigned char x;
    unsigned char i, j;
    TRISD = 0x00;
    for (;;) {
        PORTD = 0x00;
        PORTD = 0b00000010;
        tempo(40);
        PORTD = 0x00;
        PORTD = 0b00000011;
        tempo(5);
        PORTD = 0x00;
        PORTD = 0b00000001;
        tempo(50);
    }


}
