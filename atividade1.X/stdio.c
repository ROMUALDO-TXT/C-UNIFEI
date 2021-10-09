#include "stdio.h"
#include "lcd.h"

void printf(char msg[]){
    lcdInit();
    char i;
    for(i=0; i < 15; i++){
        if(msg[i] == '\n'){
            lcdCommand(0xc0);
        }else{
            lcdChar(msg[i]);
        }
    }
}