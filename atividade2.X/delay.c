#include "delay.h"

void tempo(unsigned char x) {
    volatile unsigned char j, k;
    unsigned char i;
    
    for (int l = 0; l < x; l++) {
        for (i = 0; i < 100; i++) {
            for (j = 0; j < 41; j++) {
                for (k = 0; k < 3; k++);
            }
        }
    }
}